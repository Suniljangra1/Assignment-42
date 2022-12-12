// question 8
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> s;
    s.push(45);
    s.push(5);
    s.push(55);
    s.push(145);
  while (!s.empty())
  {
    cout<<s.front()<<" ";
    s.pop();
  }
  
}