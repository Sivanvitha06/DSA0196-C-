#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int min=arr[0];
	int max=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		else if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"minimum element in the array: "<<min<<endl;
	cout<<"maximum element in the array: "<<max<<endl;
}
