#include<iostream>
using namespace std;
int gcd(int n1,int n2){
	int temp=0;
	while(n2!=0){
		temp=n2;
		n2=n1%n2;
		n1=temp;
	}
	return n1;
}
int main(){
	int n1=2;
	int n2=4;
	cout<<gcd(n1,n2);
	return 0;
}
