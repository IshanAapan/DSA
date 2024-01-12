#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
		// cout<<"Another";
	}
}

int main(){
	
	int third[15]={2,7};
	int n=15;
	printArray(third,n);

	
	int fourth[15]={0};
	n=15;
	printArray(fourth,n);


	int fifth[15]={1};
	n=15;
	printArray(fifth,n);

	return 0;
}	