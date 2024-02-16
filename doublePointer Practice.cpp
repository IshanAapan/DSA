#include <iostream>
using namespace std;

int main() {
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    
    
// print value of i
    
    // cout<<"Value of i is:->"<<i<<"\t"<<*ptr<<"\t"<<**ptr2<<endl;
    
// increement of values:-

    // **ptr2=**ptr2+1;
    // cout<<"Increement is:->"<<**ptr2<<endl;
    
// increement of addresses:-
    cout<<"Before:->"<<ptr2<<endl;
    ptr2 = ptr2+1;
    cout<<"After increement:->"<<ptr2<<endl;

// print addresses
    // cout<<"Address of i is:->"<<&i<<"\t"<<ptr<<"\t"<<*ptr2<<endl;
    // cout<<"Address of ptr is:->"<<&ptr<<"\t"<<ptr2;
    return 0;
}
