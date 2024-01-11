#include<iostream>
using namespace std;

int main(){
	int num;
	int result=1;
	// cout<<result;
	cin>>num;
	for(int i=1;i<=num;i++){
		 result=result*i;
	}
	cout<<"Factorial of"<<" "<<num<<" "<<"is"<<" "<<result;
	return 0;
}