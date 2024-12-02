#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vectors are the dynamic array
    vector <int> v2={45,65};
    vector <int> v3(v2);
    vector <int> v4(3,-1);  // defines the vector with 3 size initialted with -1 name(size,initiated value)
    vector <int> v1;  // must include the library ?? working of vector
    // to check the size
    cout<<v1.size()<<endl;
    
    // to push the elements 
    v1.push_back(23);
    v1.push_back(33);
    v1.emplace_back(45);
    
    // to know the capacity 
    cout<<v1.capacity()<<endl;
    
    // to pop the element from the end 
    v1.pop_back();
    
    // to iternate using for loop
    for(auto i:v1){
        cout<<i<<"  ";
    }
    
    // to access the element
    cout<<"index : "<<v1.at(0)<<endl;
    cout<<"index : "<<v1[1]<<endl;
    
    
    // erarse and insert are the costly operations like O(n) , clear and empty are O(1)
    v1.erase(v1.begin()+1);
    v1.erase(v1.begin(),v1.begin()+1);
    // v1.end() -> which will point to the last's next position like size+1 position
    v1.insert(v1.begin()+1, 1011);   // (pos,value)
    
    cout<<"----------"<<endl;
    for(auto i:v1){
        cout<<i<<"  ";
    }
    // to clear all the values from the vector
    v1.clear();
    
    // to check if the vector is empty or not
    cout<<"is empty : "<<v1.empty()<<endl;
    
    // iterators in vectors
    vector<int>::iterator it;     // forward iterator
    for(it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<endl;
    }
    
    vector<int>::reverse_iterator rit; // reverse iterator
    for(rit=v1.rbegin();rit!=v1.rend();rit++){
        cout<<*(rit)<<endl;
    }
    
    return 0;
}
