#include <iostream>
using namespace std;

template<typename T>
void Swap(T& a, T& b){
    T temp;
    temp = b;
    b = a;
    a = temp;
}



/*void Swap(int &a, int &b){
    int temp;
    temp = b;
    b = a;
    a = temp;
}

void Swap(char &a, char &b){
    char temp = b;
    b = a;
    a = temp;
}*/

int main() {

    int a = 5;
    int b = 10;
    cout << "a: " << a << " " << "b: " << b << endl;
    Swap<int>(a, b);
    cout << "a: " << a << " " << "b: " << b << endl;

    char c = 'c';
    char d = 'd';
    cout << "c: " << c << " " << "d: " << d << endl;
    Swap<char>(c, d);
    cout << "c: " << c << " " << "d: " << d << endl;

    return 0;
}