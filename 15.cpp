#include<iostream>
using namespace std;
int main(){
	int a=7;
	int fact=1;
	for(int i=1;i<=a;i++){
		fact=fact*i;
	}
	cout<<"factorial of a number is : "<<fact;
}
