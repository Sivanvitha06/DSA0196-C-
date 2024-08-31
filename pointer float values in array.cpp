#include<iostream>
using namespace std;
int main()
{
	float arr[]={2.4,5.6,7.8};
	float (*ptr)[3]=&arr;
	cout<<ptr;
}
