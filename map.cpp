#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"hi"));
    m.insert(pair<int,string>(2,"shubham"));
    m.insert(pair<int,string>(3,"soni"));
     map<int,string>::iterator itr;
     for(itr=m.begin();itr!=m.end();itr++)
     cout<<itr->first<<" "<<itr->second<<endl;
     map<int,string>::iterator itr1;
    itr1=m.find(2);
     cout<<itr1->first<<" "<<itr1->second<<endl;
}