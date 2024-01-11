#include<iostream>
using namespace std;

void fibonacciSeries(int num){
	int a=0,b=1;
	cout<<a<<" "<<b<<" ";
	int ans=0;
	for(int i=3;i<=num;i++){
		ans=a+b;
		a=b;
		b=ans;
		cout<<ans<<" ";
	}
	// return ans;
}
int main(){
	int n;
	cin>>n;
	fibonacciSeries(n);
}