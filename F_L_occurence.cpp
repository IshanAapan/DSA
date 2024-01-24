// Using BINARY SEARCH


#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
	int start=0,end=n-1,mid=0,ans=-1;

	while(start<=end){
		mid=start+(end-start)/2;

		if(arr[mid]==key){
		    ans = mid;
			end=mid-1;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return ans;
}

int lastOccurence(int arr[],int n,int key){
	int start=0,end=n-1,mid=0,ans=-1;

	while(start<=end){
		mid=start+(end-start)/2;

		if(arr[mid]==key){
		    ans = mid;
			start=mid+1;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return ans;
}

int main(){
	int n,key;
	cin>>n;
	cin>>key;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		int first=firstOccurence(arr,n,key);
		int second=lastOccurence(arr,n,key);
		cout<<"For first:->"<<first;
		cout<<"for second:->"<<second;
}