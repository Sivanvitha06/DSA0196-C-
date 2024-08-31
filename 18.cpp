#include<iostream>
using namespace std;
int main(){
	int n=9;
	int count;
	for(int i=2;i<n;i++){
		if (n%i==0){
			count++;
		}
	}
		if(count=0){
			cout<<n<<" is a prime number";
		}
		else{
			cout<<n<<" is not a prime number";
		}
	}
