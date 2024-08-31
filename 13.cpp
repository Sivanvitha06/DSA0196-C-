#include<iostream>
using namespace std;
int main(){
	int a=9;
	string result;
	result=(a%3==0)?"divisible by 3":"not divisible by 3";
	cout<<"the number is "<<result;
}
