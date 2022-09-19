#include <iostream>
#include <string>
using namespace std;

int getMin(int numbers[], int size){
    int min = numbers[0];
    for(int i=1; i < size; i++)
    {
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}


int getMax(int numbers[], int size){
    int max = numbers[0];
    for(int i=1; i < size; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

void getMinAndMax(int numbers[], int size, int* min, int* max){
    for(int i=1; i < size; i++)
    {
        if(numbers[i] > *max)
        {
            *max = numbers[i];
        }
        else if(numbers[i] < *min)
        {
            *min = numbers[i];
        }
    }

}

int main()
{
    int numbers[5] = {5, 4, -2, 29, 6};
    //cout << "Min is " << getMin(numbers, 5) << endl;
    //cout << "Min is " << getMax(numbers, 5) << endl;
    
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max);
    cout << "Min is " << getMin(numbers, 5) << endl;;
    cout << "Min is " << getMax(numbers, 5) << endl;;
}



/*
int main()
{
    std::string greeting = "What the hell";
    //greeting.pop_back();
    //greeting.replace(greeting.find("hell"), 4, "****");
    //greeting.append(" there!");
    //greeting.insert(3, " ");
    //std::cout << greeting << std::endl;
    //greeting.erase(3);
    //greeting.replace(9, 4, "****");
    //std::cout << greeting << std::endl;
    //std::cout << greeting.substr(5,2) << std::endl;
    std::cout << greeting.find_first_of("aeoui") << std::endl;
    
    return 0;
}
*/