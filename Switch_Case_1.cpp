#include<iostream>
using namespace std;

int main(){

	int num,a,b;
	int sum,sub,mul,div;
	
	cin>>a;
	cin>>b;
	cin>>num;

	switch(num){
		case 1: sum = a+b;
				cout<<"Sum is:->"<<sum;
				break;

		case 2: sub = a-b;
				cout<<"Subtract is:->"<<sub;
				break;

		case 3: mul = (a*b);
				cout<<"Product is:->"<<mul;
				break;

		case 4: div = (a/b);
				cout<<"Divide is:->"<<div;
				break;

		default:cout<<"Invalid number...Pls Try again!!";
	}
	return 0;
}



// input:-
// 15 7 3
// output:-
// Product is:->105