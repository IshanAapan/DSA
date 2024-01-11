#include<iostream>
using namespace std;

int airthmeticProgression(int num){
	int ap = (3*num+7);
	return ap;
}
int main(){
	int n;
	cin>>n;
	int result = airthmeticProgression(n);
	cout<<"Result is:->"<<" "<<result;
}