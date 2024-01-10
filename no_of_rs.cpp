#include<iostream>
using namespace std;

int main(){

	int num,hundred,fifty,twenty,one,counth=0,countf=0,counttw=0,counto=0;

	cin>>num;

	while(num!=0){

		if(num>=100){
			counth=num/100;
			num=num%100;
			cout<<"No of hundred ruppee are:->"<<counth<<endl;
		}
		else if(num>=50){
			countf=num/50;
			num=num%50;
			cout<<"No of fifty ruppee are:->"<<countf<<endl;
		}
		else if(num>=20){
			counttw=num/20;
			num=num%20;
			cout<<"No of Twenty ruppee are:->"<<counttw<<endl;
		}
		else{
			counto=num/1;
			num=num%1;
			cout<<"No of one ruppee are:->"<<counto<<endl;
		}
	}
	return 0;

}


// input: 1330

// output:- 
// No of hundred ruppee are:->13
// No of Twenty ruppee are:->1
// No of one ruppee are:->10
