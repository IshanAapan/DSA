// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void heapArray(int *arr,int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    heapArray(arr,n);
    return 0;
}
