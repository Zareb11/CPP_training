#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    fstream myFile;
    /*myFile.open("jacob.txt", ios::out);//write mode
    if(myFile.is_open())
    {
        myFile << "Hello\n";
        myFile << "This is second line\n";
        myFile.close();
    }
    myFile.open("jacob.txt", ios::app);//write mode
    if(myFile.is_open())
    {
        myFile << "Hello2\n";
        myFile.close();
    }*/
    myFile.open("jacob.txt", ios::in);//read
    if(myFile.is_open())
    {
        string line;
        while(getline(myFile, line))
        {
            cout << line << endl;
        }
    }

    return 0;
}