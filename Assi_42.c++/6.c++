// Question 6
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> d;
    d.push(10);
    d.push(20);
    d.push(30);
    d.push(40);
    d.push(50);
    d.push(60);
    d.push(70);
    cout<<"Size is "<<d.size()<<endl;
    while(!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop();
        
    }
    cout<<"\nBack "<<d.back();
}