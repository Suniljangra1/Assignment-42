// Question 3 
//  Check if a queue is empty or not using queue:: size() function :
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(56);
    q.push(5);
    q.push(6);
    if(q.size()!=0)
    {
        cout<<"Queue is Not Empty : ";
    }
    else 
    cout<<"Queue is Empty : ";
} 