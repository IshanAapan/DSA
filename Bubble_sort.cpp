#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){

	for(int i=1;i<n;i++){				//for Round 

		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
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
	bubbleSort(arr,n);
	return 0;
}


//Time Complexity:-  O(n^2)

// Use-case:- small size of (array,list and vector)
