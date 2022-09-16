#include <iostream>
#include <vector>

using namespace std;

int main()
 {
    vector<int> numbers;
    numbers.push_back(0);
    for(int i=1; i <= 10; i++)
    {
        numbers.push_back(i);
    }
    numbers.insert(numbers.begin()+5, 88);
    numbers.erase(numbers.begin()+1);
    numbers.pop_back();
    for(auto n : numbers)
    {
        cout << n << endl;
    }
    /*
    cout << "Size: " << numbers.size() <<endl;
    cout << "Max Size: " << numbers.max_size() <<endl;
    cout << "Capacity: " << numbers.capacity() <<endl;
    numbers.resize(5);
    cout << "Size: " << numbers.size() <<endl;
    if(numbers.empty()){
        cout << "Vector is empty" << endl;
    }
    else{
        cout << "Vector is not empty" << endl;
    }
    cout << "Element at [0] is " << numbers[0] << endl;
    cout << "Element at(0) is" << numbers.at(0) << endl;
    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;
    numbers.clear();
    cout << "Size: " << numbers.size() <<endl;*/
    /*for(int number: numbers)
    {
        cout << number << endl;
    }*/
    /*for(auto it=numbers.begin(); it != numbers.end(); it++)
    {
        cout << "Value: " << *it << endl;
        cout << "Address: " << &it << endl;
        cout << "Address of element: " << &(*it) << endl;
    }*/
    //auto it = numbers.begin();
    //cout << *(it+5);
    //Constant begin and constant end
    /*for(auto it=numbers.cbegin(); it != numbers.cend(); it++)
    {
        cout << "Value: " << *it << endl;
        cout << "Address: " << &it << endl;
        cout << "Address of element: " << &(*it) << endl;
    }*/



    
    
    //cin.get();
    return 0;
}