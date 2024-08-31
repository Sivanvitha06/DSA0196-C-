#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	int *ptr4=arr;
	for(int i=0;i<5;i++)
	{
		cout<<*(ptr4+i)<<" "<<endl;
	}
	cout<<arr;

	return 0;
}
