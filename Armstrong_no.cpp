#include<iostream>
using namespace std;

int 
armStrong(int num){
	int prod,sum=0;
	int num2=num;
	while(num!=0){
		prod=1;
		int rem=num%10;
		for(int i=1;i<=3;i++){
			prod=prod*rem;
		}
		sum=sum+prod;
		num=num/10;

	}
	if(sum==num2){
		return 1;
	}
	else{
		return 0;
	}

}

int main(){

	int num;
	cin>>num;
	int ans=armStrong(num);
	cout<<ans;
}


// output:- 370
// input:-1