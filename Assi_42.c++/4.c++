// Question 4
//  Manage a queue for mutiple input and store in ascending order of his first character
#include<bits/stdc++.h>
using namespace std;
int main()
{
   priority_queue<int,vector<int>,greater<int>>  q;
   q.push(10);
   q.push(5);
   q.push(3);
   q.push(15);
   q.push(50);
  
     while(!q.empty())
   {
     cout<<q.top()<<endl;
     q.pop();
   }

}