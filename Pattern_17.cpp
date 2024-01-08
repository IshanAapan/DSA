#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    // char ch=65;
    for(i=1;i<=n;i++){
        char start=65+n-i;
        for(j=1;j<=i;j++){
            cout<<start;
            
        start+=1;
        }
        cout<<endl;
    }
    return 0;
}