#include<iostream>
using namespace std;
int minmax(int arr[],int size ){
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
	cout<<min<<endl;
	cout<<max<<endl;
}
int main(){
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
    minmax(arr,size);
	return 0;
}
