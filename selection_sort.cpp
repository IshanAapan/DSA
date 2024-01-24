#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<"\t";
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
	selectionSort(arr,n);
}


//Time Complexity:-  O(n^2)

// Use-case:- small size of (array,list and vector)
