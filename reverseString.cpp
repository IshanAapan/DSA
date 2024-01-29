#include<bits/stdc++.h>
using namespace std;

void revString(char ch[]){
	int s=0,e=strlen(ch)-1;
	char ch2[e+1];
	 for(int i=0;ch[i]!='\0';i++){
            ch2[i]=ch[i];
            cout<<"ch2:-"<<ch2[i];
        }

	while(s<e){
		int temp=ch[s];
		ch[s]=ch[e];
		ch[e]=temp;
		s+=1;
		e-=1;
	} 
}

int getLength(char ch[]){
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
	// int len=getLength(ch);
	// revString(ch,len);
	revString(ch);
	// cout<<ch;
}	