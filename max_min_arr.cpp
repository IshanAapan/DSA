#include<iostream>
#include <limits.h>
using namespace std;

int getMin(int arr[],int siz){
	int min=INT_MAX;
	for(int i=0;i<siz;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}

int getMax(int arr[],int siz){
	int max=INT_MIN;
	for(int i=0;i<siz;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	int siz=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<siz;i++){
		cin>>arr[i];
	}
	int min=getMin(arr,siz);
	int max=getMax(arr,siz);
	cout<<"Minimum is:->"<<min<<endl;
	cout<<"Maximum is:->"<<max;
	return 0;
}