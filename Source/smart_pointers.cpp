#include <iostream>
#include <memory>
using namespace std;

class MyClass {
    public:
        MyClass(){
            cout << "Constructor invoked" << endl;
        }
        ~MyClass(){
            cout << "Destructor invoked" << endl;
        }
};

int main() {

    //unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();
    //successfully created unique pointer. created address where unPtr1 has been assigned to address 25.
    //unique_ptr cannot be shared.
    //unique_ptr<int> unPtr1 = make_unique<int>(25);
    //unique_ptr<int> unPtr2 = move(unPtr1);
    // cout << *unPtr2 << endl;
    // cout << *unPtr1 << endl;
    //cout <<  &unPtr1 << endl;
    //cout <<  *unPtr1 << endl;

    //shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
    //cout << "Shared count: " << shPtr1.use_count() << endl;
    //shared_ptr<MyClass> shPtr2 = shPtr1;
    //cout << "Shared count: " << shPtr1.use_count() << endl;

    weak_ptr<int> wePtr1;
    {
        shared_ptr<int> shPtr1 = make_shared<int>(25);
        wePtr1 = shPtr1;
    }

    //system("pause>nul");
    return 0;
}