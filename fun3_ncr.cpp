#include<iostream>
using namespace std;

int factorial(int num){
	int fact=1;

	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	return fact;
}
int ncr(int n,int r){

	int num = factorial(n);
	int denom = factorial(r) * factorial(n-r);
	int ans = (num/denom);
	return ans;
}

int main(){
	int n,r;
	cin>>n>>r;
	int result=ncr(n,r);
	cout<<result;
}