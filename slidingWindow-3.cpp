// find the range of max sum from an subArray

#include <bits/stdc++.h>
using namespace std;

void maxSum_of_subArray(vector <int>v,int n,int k){
     int sum = 0,start = 0, ans = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if((i-start+1)==k){
            ans = max(ans,sum);
            sum-=v[start];
            start++;
        }
    }
    cout<<"Max:->"<<ans;
}

void range_maxSum_subArray(vector <int>v,int n,int k){
    int sum = 0,start  = 0,prevSum=-1;
    pair<int,int>p;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if((i-start+1)==k){
            if(prevSum<=sum){
                prevSum=sum;
                p.first=start,p.second=i;
            }
            sum-=v[start];
            start++;
        }
    }
    cout<<"count"<<p.first<<"\t"<<p.second;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    maxSum_of_subArray(v,n, k);
    range_maxSum_subArray(v, n,k);
    return 0;
}
