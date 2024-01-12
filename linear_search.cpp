#include<iostream>
using namespace std;
bool linear_search(int arr[],int n,int num)
{
	for(int i=0;i<n;i++){
		if(arr[i]==num){
			return 1;
			break;
		}
	}
	return 0;

}

int main(){
	int n,num;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>num;
	bool ans=linear_search(arr,n,num);
	cout<<ans;

}
