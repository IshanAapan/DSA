#include<bits/stdc++.h>
using namespace std;

int basicStrong(char ch[]){
	int count=0;
	for(int i=0;ch[i]!='\0';i++){
		count+=1;
	}
	return count;
}

int main(){
	int n;
	cin>>n;
	char ch[n];
	cin>>ch;
	int ans=basicStrong(ch);
	cout<<ans;
}