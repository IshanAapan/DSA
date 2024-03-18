// Stack using STL Library

#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  cout<<"1st top"<<s.top()<<endl;
  s.pop();
  s.pop();
  cout<<"2nd top"<<s.top()<<endl;
  std::size_t len = s.size();
  cout<<"size"<<" "<<len<<endl;
  
  cout<<"Empty:->"<<s.empty()<<endl;
  
  while(!s.empty()){
    cout<<s.top();
    s.pop();
  }
  cout<<endl<<"Empty:->"<<s.empty()<<endl;
    return 0;
}
