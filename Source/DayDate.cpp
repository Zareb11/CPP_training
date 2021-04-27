#include <iostream>
#include <stdio.h>   
#include <stdlib.h>   
#include <math.h>  
#include <cstring>     
#include <string>

using namespace std;



int Month(string m)
{
	if(m == "Mar")
	{
		return 3;
	}

	if(m == "Apr")
	{
		return 4;
	}

	if(m == "May")
	{
		return 5;
	}

	if(m == "Jun")
	{
		return 6;
	}

	if(m == "Jul")
	{
		return 7;
	}
	
	if(m == "Aug")
	{
		return 8;
	}
	
	if(m == "Sep")
	{
		return 9;
	}
	
	if(m == "Oct")
	{
		return 10;
	}
	
	if(m == "Nov")
	{
		return 11;
	}
	
	if(m == "Dec")
	{
		return 12;
	}
	
	if(m == "Jan")
	{
		return 13;
	}

	if(m == "Feb")
	{
		return 14;
	}
	
	return -1;
}

void Day(int num)
{
	if(num == 0)
	{
		printf("Saturday");
	}
	
	if(num == 1)
	{
		printf("Sunday");
	}
	
	if(num == 2)
	{
		printf("Monday");
	}
	
	if(num == 3)
	{
		printf("Tuesday");
	}
	
	if(num == 4)
	{
		printf("Wednesday");
	}
	
	if(num == 5)
	{
		printf("Thursday");
	}
	
	if(num == 6)
	{
		printf("Friday");
	}
}

//bool leapYear(int year)
//{
//	if(year%4 != 0)
//	{
//		return 0;
//	}
//	return 1;
//}

bool leapYear(int year)
{
	bool flag = false;
	int century = ((year/100)*100)+100;;
	if(year%4 == 0 && century != 400)
	{
		flag = true;
		return flag;
	}
	return flag;
}


int Zeller(int q, int m, int y)
{
	if(leapYear(y) == 0 && q == 29)
	{
		cout << "The year " << y << " is not a leap year and therefore " << q << " " << m << " " << y << " is not a leap year." << endl;
		return -1;
	}


	if(m == 13 || m == 14)
	{
		y--;
	}
	int h;
	float K = fmod(y,100);
	float J = y/100;
	float seven = 7;
	h =  q + (13*(m+1)/5  + y + (y/4) - y/100 + y/400);
	//h = q + (13*(m+1)/5 + y + (y/4) +5) ;
	h = fmod(h, seven);
	
	return h;
	
}



int main(int argc, char *argv[])
{
	
	
	
	int q          = atoi(argv[1]);
	char* month    = argv[2];
	int year       = atoi(argv[3]);
	string mon     = month;
	int m          = Month(mon);
	
	
	
		
	int h;
	h = Zeller(q, m, year);
	Day(h);
	
	
	
	return 0;
}