#include<iostream>
using namespace std;
int main() {
    int num=145;
    int sum = 0;
    for (int i = num; i > 0; i=i/10) 
	{
        int fact = 1;
        for (int j = 1; j <= i % 10; j++){
        	fact *= j;
		}
        sum += fact;
    }
	if(sum==num)
	{
	cout<<num<<" is a strong number";
	}
	else
	{
	cout<<num<<" is not a strong number";
	}
}

