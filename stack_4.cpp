//Reverse a string using stack
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello";
    std::size_t len = str.size();
    stack<char> s;
    for(int i=0;i<len;i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
