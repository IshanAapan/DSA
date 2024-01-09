#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		if(i==4){
			continue;
		}
		cout<<"iteration"<<i<<endl;
	}
	return 0;
}


// input:-5

// output:-
// iteration1
// iteration2
// iteration3
// iteration5
