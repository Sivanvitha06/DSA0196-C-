#include<iostream>
using namespace std;
class person 
{
	public:
		string name;
		int age;
	
};
int main()
{
	person p;
	p.name="nikitha";
	p.age=16;
	person *ptr=&p;
	cout<<"name:"<<ptr->name<<endl;
	cout<<"age:"<<ptr->age<<endl;
}

