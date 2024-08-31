#include<iostream>
using namespace std;
string reverse(string str){
	int n=str.length();
	string rev;
	for(int i=n-1;i>=0;i--){
		rev=rev+str[i];
	}
	return rev;
}
int main(){
	string s="hello";
	string r=reverse(s);
	cout<<"reversed string is : "<< r;
	return 0;
}
