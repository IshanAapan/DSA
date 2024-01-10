#include<iostream>
using namespace std;

int main(){

	int num,hundred,fifty,twenty,one,counth=0,countf=0,counttw=0,counto=0;

	cin>>num;

	while(num!=0){

		if(num>=100){
			counth+=1;
			num=num-100;
			cout<<"No of hundred ruppee are:->"<<counth<<endl;
		}
		else if(num>=50){
			countf+=1;
			num=num-50;
			cout<<"No of fifty ruppee are:->"<<countf<<endl;
		}
		else if(num>=20){
			counttw+=1;
			num=num-20;
			cout<<"No of Twenty ruppee are:->"<<counttw<<endl;
		}
		else{
			counto+=1;
			num=num-1;
			cout<<"No of one ruppee are:->"<<counto<<endl;
		}
	}
	return 0;

}


// input: 1330

// output:- 
// No of hundred ruppee are:->1
// No of hundred ruppee are:->2
// No of hundred ruppee are:->3
// No of hundred ruppee are:->4
// No of hundred ruppee are:->5
// No of hundred ruppee are:->6
// No of hundred ruppee are:->7
// No of hundred ruppee are:->8
// No of hundred ruppee are:->9
// No of hundred ruppee are:->10
// No of hundred ruppee are:->11
// No of hundred ruppee are:->12
// No of hundred ruppee are:->13
// No of Twenty ruppee are:->1
// No of one ruppee are:->1
// No of one ruppee are:->2
// No of one ruppee are:->3
// No of one ruppee are:->4
// No of one ruppee are:->5
// No of one ruppee are:->6
// No of one ruppee are:->7
// No of one ruppee are:->8
// No of one ruppee are:->9
// No of one ruppee are:->10
