/*
Deque - Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed. 
Double Ended Queues are basically an implementation of the data structure double-ended queue. A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
*/

/*
List - Lists are sequence containers that allow non-contiguous memory allocation. As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time). Normally, when we say a List, we talk about a doubly linked list.
*/

#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    /*
    We can insert elements from both the ends so these are the functions to do that.
    */

   d.push_back(5);/*To push an element at the end*/
   d.push_back(6);
   d.push_front(4);/*To push an element at the front*/
   d.push_front(3);

   for(int i:d){
    cout<<i<<" ";
   }cout<<endl;

    /*
    We can also delete element from both side. These are the functions used for that purpose.
    */

   d.pop_back();
   d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    /*To print the first and back element*/
    cout<<"Front element : "<<d.front()<<endl;
    cout<<"Back element : "<<d.back()<<endl;

    cout<<"Empty or not :"<<d.empty()<<endl;

    d = {1,2,3,4,5,6,7};
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Erase element from begining to a certain position"<<endl;
    d.erase(d.begin(),d.begin()+2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Erase element from end to a certain position \n";
    d.erase(d.end(),d.end()+2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    /*Size and Capacity of deque*/
    cout<<"Size : "<<d.size();
    cout<<"\nCapacity : "<<d.max_size();

    return 0;
}