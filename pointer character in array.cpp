#include<iostream>
using namespace std;
int main()
{
	 char arr[]={'a','n','k','i','l'};
	 char (*ptr)[5]=&arr;
	 cout<<ptr;
}
