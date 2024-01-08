#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    char ch=65;
    cin>>n;
    for(i=1;i<=n;i++){
       
        for(j=1;j<=n;j++){
            cout<<ch;
            
        }
        ch+=1;
        cout<<endl;
    }
    return 0;
}