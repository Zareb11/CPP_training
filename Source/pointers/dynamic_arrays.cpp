#include <iostream>

using namespace std;


int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    //int myArray[size];
    int* myArray = new int[size];
    for(int i=0; i<size;i++)
    {
        cout << "Array[" << i << "]";
        cin >> myArray[i];
    }
    for(int j=0; j<size;j++)
    {
        //cout << myArray[j] << " ";
        cout << *(myArray+j) << " ";    
    }
    delete[] myArray;
    //myArray = NULL;

    return 0;
}