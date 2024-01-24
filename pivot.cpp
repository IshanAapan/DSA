#include<iostream>
using namespace std;

int pivot(int arr[],int n){
	int start=0,end=n-1,mid;

	while(start<end){
		mid=start+(end-start)/2;
		if(arr[mid]>arr[0]){
			start=mid+1;
		}
		else{
			end=mid;
		}
	}
	return start;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans = pivot(arr,n);
	cout<<"Answer:->"<<ans;
}