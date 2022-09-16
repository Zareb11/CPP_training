#include <iostream>

void print_array(int array [], int size)
{
    for(int i=0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }
    
}




int main()
{
    int guesses[] = {12, 43, 23, 43, 23};
    int size = sizeof(guesses)/sizeof(int);
    //std::cout << sizeof(guesses) << std::endl;
    print_array(guesses, size);

    return 0;
}