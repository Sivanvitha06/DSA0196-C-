#include <iostream>
using namespace std;
int reverse(string str){
    string revstr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        revstr =revstr+ str[i];
    }
    if(revstr==str){
    	cout<<"string is palindrome";
	}
	else{
		cout<<"string is not palindrome";
	}
}
int main(){
	string str="otto";
	cout<<reverse(str);
}
