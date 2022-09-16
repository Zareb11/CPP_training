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
};

int main()
{
    Employee employee1;
    employee1.Name = "Jacob";
    employee1.Company = "jtech";
    employee1.Age = 20;
    employee1.IntroduceYourself();
    
    Employee employee2;
    employee2.Name = "Jane";
    employee2.Company = "Amazon";
    employee2.Age = 35;
    employee2.IntroduceYourself();
    return 0;
}