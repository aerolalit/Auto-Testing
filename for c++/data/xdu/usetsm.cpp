/*
   CH08-320143
   a4-p3.cpp
   Xuchong Du
   x.du@jacobs-university.de
*/
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
set<int> A;
multiset<int> B;
set<int>::iterator itA;
multiset<int>::iterator itB;
set<int> Set;
multiset<int> MultiSet;
int num;
cin>>num;
while(num>=0)
{
 A.insert(num);
 B.insert(num);
 cin>>num;
}
for(itA=A.begin();itA!=A.end();itA++)
    cout<<*itA<<" ";
cout<<endl;
cout<<endl;

for(itB=B.begin();itB!=B.end();itB++)
    cout<<*itB<<" ";
cout<<endl;
cout<<endl;

A.erase(5);
B.erase(5);

for(itA=A.begin();itA!=A.end();itA++)
    cout<<*itA<<" ";
cout<<endl;
cout<<endl;

for(itB=B.begin();itB!=B.end();itB++)
    cout<<*itB<<" ";
cout<<endl;
cout<<endl;

A.insert(14);
A.insert(198);

MultiSet.clear();
set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(MultiSet,itB=MultiSet.begin()));
cout<<"union:";
for(itB=MultiSet.begin();itB!=MultiSet.end();itB++)
    cout<<*itB<<" ";
cout<<endl;

Set.clear();
set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(Set,itA=Set.begin()));
cout<<"intersection:";
for(itA=Set.begin();itA!=Set.end();itA++)
    cout<<*itA<<" ";
cout<<endl;

Set.clear();
set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(Set,itA=Set.begin()));
cout<<"difference:";
for(itA=Set.begin();itA!=Set.end();itA++)
    cout<<*itA<<" ";
cout<<endl;

Set.clear();
set_symmetric_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(Set,itA=Set.begin()));
cout<<"symmetric difference:";
for(itA=Set.begin();itA!=Set.end();itA++)
    cout<<*itA<<" ";
cout<<endl;

}
