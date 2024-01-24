#include<iostream>
using namespace std;

int main(){
	int num[15];

	
	//(1) if value is not intialised, accessing an array
	// cout<<"Value at index 14"<<num[14];    //garbage vaue


	

	//(2) if try accessing an array greater than total array's size(15), let's say 20
	// cout<<"Value at index 20:-"<<num[20];   	// we can'not access an array's element greater than its total size (error occur)


	


	//(3) in the given eg below, we declared size of an array 15, but we intialized an array from 2 nos 
	// and rest index's nos automatically intialized with 0.

	// int third[15]={2,7};

	// int n=15;
	// 	for(int i=0;i<n;i++){
	// 		cout<<third[i]<<endl;
	// 	}


	

	//(4) in the given eg below, we intialized an array with '0' then the entire array intialized with '0'

	// int fourth[15]={0};

	// int n=15;
	// 	for(int i=0;i<n;i++){
	// 		cout<<fourth[i]<<endl;
	// 	}



	
	// (5) in the given eg below, we want intialized entire array with 'non-zero' then this (not possible) with non-zero
			// we'll use for loop for non-zero

	int fifth[15]={1};

	int n=15;
		for(int i=0;i<n;i++){
			cout<<fifth[i]<<endl;
		}
	return 0;
}	

// size() function is used to evaluate size of an array