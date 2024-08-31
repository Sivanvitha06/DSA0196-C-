#include<iostream>
using namespace std;
int main(){
	int n=123;
	int sum=0,r;
	while(n!=0){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<"sum of the given number is : "<<sum;
}
