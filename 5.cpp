#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a=55.0,b=22.5,add,sub,mul,div,mod,rem;
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=fmod(a,b);
	cout<<"add:"<<add<<endl;
	cout<<"sub:"<<sub<<endl;
	cout<<"multiplication:"<<mul<<endl;
	cout<<"division:"<<div<<endl;
	cout<<"modulo:"<<rem<<endl;
}
