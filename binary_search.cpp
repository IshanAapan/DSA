#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
	int start=0,end=n-1, mid=0;

	while(start<=end){
	 	// mid=(start+end)/2;

	 	mid=start+(end-start)/2;     //(optimisation) integer's range(min=>-2^31 - max=> 2^31-1)

	 	if(arr[mid]==key){
			return mid;
	 	}
	 	else if(arr[mid]<key){
			start=mid+1;
	 	}
	 	else{
			end=mid-1;
	 	}
	}
	return -1;
}

int main(){
	int n,key;
	cin>>n;
	cin>>key;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=binarySearch(arr,n,key);
	cout<<ans;
}