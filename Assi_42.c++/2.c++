//  Question 2
// Create a railways ticket counter and allot ticket to first come first take using c++ STL 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>  q1;    // create a queue string for enter name
    q1.push("Prateek sir");   // push function is using insert value
    q1.push("MySirG");      // push function is using insert value
    q1.push("Sarubh Sir");  // push function us using insert value
    while(!q1.empty())    // if queue is empty  , empty function return the true  if queue is not empty  function return false 
    {
        cout<<q1.front()<<" your ticket is allocited \n";   // front function print the first element of the queue 
        q1.pop();   // delete first element of the queue 
    }
}
