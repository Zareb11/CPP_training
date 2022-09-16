#include <iostream>
using std::string;

class Employee {
    //attributes
    public:
        string Name;
        string Company;
        int Age;
    void IntroduceYourself()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Jacob", "jtech", 20);
    employee1.IntroduceYourself();
    std::cout << "---" << std:: endl;
    Employee employee2 = Employee("Jane", "Amazon", 35);
    employee2.IntroduceYourself();
    return 0;
}