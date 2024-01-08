#include<iostream>
using namespace std;

int main(){
    int i,j,n,spaces=0;
    cin>>n;
    spaces=n-i;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}