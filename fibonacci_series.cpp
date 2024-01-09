#include<iostream>
using namespace std;

int main(){

	int i,num,sum;
	int first=0,sec=1;
	cin>>num;
	cout<<first<<" "<<sec<<" ";
    for(i=3;i<=num;i++){
    	sum=first+sec;
    	first=sec;
    	sec=sum;

    	cout<<sum<<" ";
    	// first=first+i;
    }
    return 0;
}


// input:-5

// output:- 0 1 1 2 3