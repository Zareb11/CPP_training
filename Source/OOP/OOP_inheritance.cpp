#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
    private:
        
        string Company;
        int Age;

    protected:
        string Name;

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
        void AskForPromotion() {
            if(Age > 30){
                std::cout << Name << " got promoted." << std:: endl;
            }
            else {
                std::cout << Name << ", sorry no promotion for you." << std:: endl;
            }
        }
};

class Developer: public Employee {
    public:
        string FavProgrammingLanguage;
        Developer(string name, string company, int age, string favouriteProgrammingLanguage ):Employee(name, company, age){
            FavProgrammingLanguage = favouriteProgrammingLanguage;
        }
        void FixBug(){
            std::cout <<  Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
        }
};

class Teacher: public Employee {
    public:
        string Subject;
        void PrepareLesson() {
            std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
        }
        Teacher(string name, string company, int age, string subject): Employee(name, company, age) {
            Subject = subject;
        }

};

int main()
{
    Developer developer = Developer("John", "Alan Gray", 35, "C++");
    //developer.FixBug();
    //developer.AskForPromotion();
    Teacher teacher = Teacher("Jack", "Cool School", 44, "History");
    teacher.PrepareLesson();
    teacher.AskForPromotion();
    return 0;
}