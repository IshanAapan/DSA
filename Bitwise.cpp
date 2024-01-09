#include<iostream>
using namespace std;

int main(){

	int a,b;
	cin>>a>>b;

	cout<<"And"<<" "<<(a&b)<<endl;
	cout<<"OR"<<" "<<(a|b)<<endl;
	cout<<"NOT"<<" "<<(~a)<<endl;
	cout<<"XOR"<<" "<<(a^b)<<endl;

	cout<<"Left"<<" "<<(a<<b)<<endl;
	cout<<"Right"<<" "<<(a>>b)<<endl;

}


// input:-
// 2 4

// output:-

// And 0
// OR 6
// NOT -3
// XOR 6
// Left 32
// Right 0
