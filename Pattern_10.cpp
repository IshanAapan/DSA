#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        int k=i;
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            // break;
            k+=1;
        }
        cout<<endl;
    }
    return 0;
}