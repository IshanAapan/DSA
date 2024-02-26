#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int start=0,end=n-1,sum = 0;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(i-start+1==k){
            ans=max(ans,sum);
            sum-=v[start];
            start++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
