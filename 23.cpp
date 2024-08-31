#include<iostream>
using namespace std;
int main(){
	int n=153,rev=0,temp=n,r;
	while(n!=0){
		r=n%10;
		rev=rev+r*r*r;
		n=n/10;
	}
	if(temp==rev){
		cout<<temp<<" is a armstrong number";
	}
	else{
		cout<<temp<<" is not a armstrong number";
	}
}
