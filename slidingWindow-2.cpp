// find the count of max sum

#include <bits/stdc++.h>
using namespace std;

void maxSum_of_subArray(vector <int>&v,int n,int k){
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

void frequecnyofMaxSum(vector <int>&v,int n,int k){
    int sum = 0,start = 0,count=0,prevSum=-1;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if((i-start+1)==k){
            if(prevSum<sum){
                count=1;
                prevSum=sum;
            }
            else if(prevSum==sum){
                count+=1;
            }
            sum-=v[start];
            start++;
        }
    }
    cout<<"count"<<count;
}

int main() {
    int n,k;
    // int sum = 0,start = 0;
    // int ans = INT_MIN;
    // int sum2 = 0,s2 = 0,ans2 = INT_MIN,count = 0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    maxSum_of_subArray(v,n, k);
    frequecnyofMaxSum(v, n,k);
    return 0;
}
