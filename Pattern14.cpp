#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    char ch=65;
    for(i=1;i<=n;i++){
       
        for(j=1;j<=n;j++){
            cout<<ch;
            ch+=1;
            
        }
        cout<<endl;
    }
    return 0;
}