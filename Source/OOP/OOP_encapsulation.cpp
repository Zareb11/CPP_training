#include <iostream>
using std::string;

class Employee {
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name) {
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company) {
            Company = company;
        }
        string getCompany() {
            return Company;
        }
        void setAge(int age) {
            if(age >= 18){
                Age = age;
            }
        }
        int getAge(){
            return Age;
        }
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
    employee2.setAge(15);
    std::cout << employee2.getName() << " is " << employee2.getAge() << " years old." << std::endl;
    
    return 0;
}