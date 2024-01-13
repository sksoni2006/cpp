#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l={1,2,3,4,5};
    l.push_back(6);

    cout<<endl;
    list<int>::iterator itr;
    for(itr=l.begin();itr!=l.end();itr++)
    cout<<++*itr;
cout<<endl;
    for(int x:l)
    cout<<x;
}