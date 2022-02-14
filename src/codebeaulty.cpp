#include <iostream>
using std::cout;
using std::endl;
using std::string;

class AbstractEmployee {
    virtual void sayHello()=0;
};

class Employee: AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    } 
    string getName() {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    } 
    string geCompany() {
        return Company;
    }
    void setAge(int age)
    {
        Age = age;
    } 
    int getAge() {
        return Age;
    }
    void IntroduceYourself()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void sayHello() {
        if (Age < 30) {
            cout << "I am a milleniaum and I do not say hello";
        } else {
            cout << "Hello!";
        }
    }
};

int main()
{
    Employee employee1 = Employee("Ezequiel", "CPP Code", 29);
    employee1.IntroduceYourself();
    employee1.sayHello();
}