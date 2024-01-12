#include<iostream>
using namespace std;
void swap_alternate(int arr[],int n)
{
	int temp=0;
	for(int i=0;i<n;i+2){
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		// return arr[i];
		cout<<arr[i];
		cout<<arr[i+1];
	}

}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	swap_alternate(arr,n);
	// cout<<ans;

}
