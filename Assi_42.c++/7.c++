// Question 7
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>d,t;
    d.push(23);
    d.push(24);
    d.push(25);
    d.push(26);
    t.push(30);
    t.push(40);
    t.push(50);
    t.push(60);
    t.push(32);
    d.swap(t);
    deque<int>::iterator i;
    while(!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop();
    }
}