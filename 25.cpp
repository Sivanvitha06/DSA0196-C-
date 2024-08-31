#include<iostream>
using namespace std;
int main(){
	int n=19,sum=0,r;
	while(n!=0){
		r=n%10;
		sum=sum+r*r;
		n=n/10;
	}
	n=sum;
	if(n==1){
		cout<<n<<" is  a happy number";
	}
	else{
		cout<<n<<" is not a happy number";
	}
}
