#include <iostream>
#include <list>
using namespace std;
int main()
{
    // List -> internal implementation is doubly linkedlist
    list<int> l;
    l.push_back(34);
    l.push_back(54);
    l.push_front(11);
    l.push_front(22);
    l.push_back(674);
    
    l.emplace_back(111);
    l.emplace_front(222);
    
    for(int i:l){   cout<<i<<"  ";} cout<<endl;
    
    // to check the size of the list
    cout<<"size : "<<l.size()<<endl;
    // erase(), clear(), begin(), end(), rbegin(), rend(), insert(), front(), back()
    // pop_back() and pop_front()
    return 0;
}
