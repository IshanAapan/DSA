#include<iostream>
using namespace std;

bool isPrime(int num){
	int flag=1;
	for(int i=2;i<=num-1;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;	
}

int main(){
	int n;
	cin>>n;
	int ans=isPrime(n);
	cout<<"Answer is:->"<<ans;
}