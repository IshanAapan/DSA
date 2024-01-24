#include<iostream>
using namespace std;

void alternate_swap(int arr[],int n){
		for(int i=0;i<n;i+=2){
			if(i+1<n){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				// swap(arr[i],arr[i+1]);
			}
		}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	alternate_swap(arr,n);
	return 0;
}