#include <iostream>

void print_array(int array [], int size)
{
    for(int i=0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    
}




int main()
{
    const int SIZE = 10;
    int guesses[SIZE];
    
    for(int i = 0; i < SIZE;i++)
    {
        std::cin >> guesses[i];
    }
    print_array(guesses, SIZE);

    return 0;
}