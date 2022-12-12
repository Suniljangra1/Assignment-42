// Question 1 :
// Print all the element  of a queue using STL
#include<bits/stdc++.h>   // all rounder header file 
using namespace std;  // using for nameconflict issue
int main()    // Excution always start main
{ 
    queue<int> q;   // create a queue 
    q.push(5);    // use of push function to insert the element in queue 
    q.push(15);   // inserting 
    q.push(20);  // inserting
    q.push(25);   // inserting 
    while(!q.empty())    // empty function return the value if queue is empty and not empty 
    {
        cout<<q.front();    // front function is use to print the first element of the queue 
        q.pop();     // pop function in queue is use to delete last element in the queue 
    }
}