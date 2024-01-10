#include<iostream>
#include<string>
using namespace std;

string EvenOdd(){
	int num;
	cin>>num;
	if(num%2==0){
		return "Even";
	}
	else{
		return "Odd";
	}
}
int main(){
	string str=EvenOdd();
	cout<<"No is"<<" "<<str;
}