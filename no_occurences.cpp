// Using BINARY SEARCH

#include<iostream>
using namespace std;

int leftnoOccurence(int arr[],int n,int key){
	int start=0,end=n-1,ans;
	while(start<=end){

		int mid=start+(end-start)/2;

		if(arr[mid]==key){
			ans=mid;
			end=mid-1;
		}
		else if(arr[mid]>key){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return ans;

}

int rightnoOccurence(int arr[],int n,int key){
	int start=0,end=n-1,ans;
	while(start<=end){

		int mid=start+(end-start)/2;

		if(arr[mid]==key){
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]>key){
			end=mid-1;
		}
		else{
			start=mid+1;
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
		int first=leftnoOccurence(arr,n,key);
		int second=rightnoOccurence(arr,n,key);
		int total=(second-first)+1;
		cout<<"total n ocscurences are:->"<<total;
}
		