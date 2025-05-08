#include <iostream>
using namespace std;

class Person {
    public: 
    string name;
    int age;
    Person(string name , int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
    public:
    int roll_no;
    Student(string name, int age, int roll_no) : Person(name, age) {
        this->roll_no = roll_no;
    }
    void getInfo(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll_no: " << roll_no << endl;
    }
};

int main(){
    Student s1("Nitesh", 21, 101);
    s1.getInfo();
    return 0;
}