/*
CH08-320143
a4_p3.cpp
Oana Miron
o.miron@jacobs-university.de
*/
#include <iostream>
#include <set>
#include <algorithm>


using namespace std;

int main()
{
    set<int> A;
    multiset<int> B;
    int a;
    cin>>a;
    while(a>=0)
    {
        A.insert(a);
        B.insert(a);
        cin>>a;
    }
    set<int>::const_iterator pos;
    for(pos=A.begin();pos!=A.end();++pos)
    {
        cout<<*pos<<" ";
    }
    cout<<endl<<endl;
    multiset<int>::const_iterator pos2;
    for(pos2=B.begin();pos2!=B.end();++pos2)
    {
        cout<<*pos2<<" ";
    }
    cout<<endl<<endl;
    A.erase(5);
    B.erase(5);
    for(pos=A.begin();pos!=A.end();++pos)
    {
        cout<<*pos<<" ";
    }
    cout<<endl<<endl;
    for(pos2=B.begin();pos2!=B.end();++pos2)
    {
        cout<<*pos2<<" ";
    }
    cout<<endl<<endl;
    A.insert(14);
    A.insert(198);
    multiset<int> C;
    set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(C,C. begin()));
    for(pos2=C.begin();pos2!=C.end();++pos2)
    {
        cout<<*pos2<<" ";
    }
    cout<<endl;
    set<int> D;
    set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(D,D.begin()));
    for(pos=D.begin();pos!=D.end();++pos)
    {
        cout<<*pos<<" ";
    }
    cout<<endl;
    D.clear();
    set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(D,D.begin()));
    for(pos=D.begin();pos!=D.end();++pos)
    {
        cout<<*pos<<" ";
    }
    cout<<endl;
    D.clear();
    set_symmetric_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(D,D.begin()));
    for(pos=D.begin();pos!=D.end();++pos)
    {
        cout<<*pos<<" ";
    }
    cout<<endl;
    return 0;
}
