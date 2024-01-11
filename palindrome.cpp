#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int num2=num;
	int rev=0;
	while(num!=0){
		int rem=num%10;
		rev=rev*10+rem;
		num=num/10;

	}
	if(num2==rev){
		cout<<"Palindrome";
	}
	else{
		cout<<"No Palindrome";
	}
}