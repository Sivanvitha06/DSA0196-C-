#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Student created!" << endl;
    }
    ~Student() {
        cout << "Student deleted!" << endl;
    }
    void display(){
	cout<<"student name:"<<name<<endl;
	cout<<"student age:"<<age<<endl;
	}
};
int main() {
    Student s1("John", 20);
    s1.display();
    return 0;
}

