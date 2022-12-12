// question 9
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<char> c; 
    c.push('M');
    c.push('y');
    c.push('S');
    c.push('i');
    c.push('r');
    c.push('G');
    while (!c.empty())
    {
        cout<<c.front();
        c.pop();
    }
}