#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    int k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
    return 0;
}