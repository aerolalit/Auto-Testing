/*
    CH08-320143
    a4_p3.cpp
    Mihail Tarigradschi
    m.tarigradschi@jacobs-university.de
 */

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    set<int> a;
    multiset<int> b;

    while (1)
    {
        int x;
        cin>>x;
        if (x<0) break;
        a.insert(x);
        b.insert(x);
    }

    for (set<int>::iterator i=a.begin(); i!=a.end(); i++)
        cout<<*i<<' ';
    cout<<'\n';

    for (multiset<int>::iterator i=b.begin(); i!=b.end(); i++)
        cout<<*i<<' ';
    cout<<'\n';

    a.erase(5);
    b.erase(5);

    for (set<int>::iterator i=a.begin(); i!=a.end(); i++)
        cout<<*i<<' ';
    cout<<'\n';

    for (multiset<int>::iterator i=b.begin(); i!=b.end(); i++)
        cout<<*i<<' ';
    cout<<'\n';

    a.insert(14);
    a.insert(198);

    multiset<int> c;
    set_union(a.begin(), a.end(),b.begin(),b.end(),inserter(c,c.begin()));
    for (multiset<int>::iterator i=c.begin(); i!=c.end(); i++)
        cout<<*i<<' ';
    cout<<'\n';

    set<int> d;
    set_intersection(a.begin(), a.end(),b.begin(),b.end(),inserter(d,d.begin()));
    for (set<int>::iterator i=d.begin(); i!=d.end(); i++)
        cout<<*i<<' ';
    cout<<'\n';

    d.clear();
    set_difference(a.begin(), a.end(),b.begin(),b.end(),inserter(d,d.begin()));
    for (set<int>::iterator i=d.begin(); i!=d.end(); i++)
        cout<<*i<<' ';
    cout<<'\n';

    d.clear();
    set_symmetric_difference(a.begin(), a.end(),b.begin(),b.end(),inserter(d,d.begin()));
    for (set<int>::iterator i=d.begin(); i!=d.end(); i++)
        cout<<*i<<' ';
    cout<<'\n';



    return 0;
}
