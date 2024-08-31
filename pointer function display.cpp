#include<iostream>
using namespace std;
string s()
{
	return "hello world";
}
int main()
{
	string (*ptr)()=&s;
	cout<<ptr();
}
