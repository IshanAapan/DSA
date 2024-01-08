#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
            int k=1;
        for(j=1;j<=n;j++){
            cout<<n-k+1;
            k+=1;
        }
        cout<<endl;
    }
    return 0;
}