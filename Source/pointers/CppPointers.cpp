#include <iostream>

using namespace std;

void printNumber(int* numberPtr)
{
    cout << *numberPtr << endl;
}


int main()
{
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    //system("pause>0");
    return 0;
}