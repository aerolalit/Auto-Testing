/*
CH08-320142
a4 p3.cpp
Majorka Thanasi
m.thanasi@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    set<int> A;
    multiset<int> B;

    int value;

    while(1)
    {
        cin>>value;

        if(value>=0)
        {
            A.insert(value);
            B.insert(value);
        }
        else
        {
            break;
        }
    }

    set<int>::iterator iterA=A.begin();

    while(iterA!=A.end())
    {
        cout<<*iterA<<" ";
        iterA++;
    }

    cout<<endl;

    multiset<int>::iterator iterB=B.begin();

    while(iterB!=B.end())
    {
        cout<<*iterB<<" ";
        iterB++;
    }
    cout<<endl;

    A.erase(5);


    iterA=A.begin();

    while(iterA!=A.end())
    {
        cout<<*iterA<<" ";
        iterA++;
    }

    cout<<endl;

    B.erase(5);

    iterB=B.begin();
    while(iterB!=B.end())
    {
        cout<<*iterB<<" ";
        iterB++;
    }

    cout<<endl;

    A.insert(14);
    A.insert(198);

    multiset<int> UnionMulti;

    iterA=A.begin();
    iterB=B.begin();

    while(iterA!=A.end())
    {
        UnionMulti.insert(*iterA);
        iterA++;
    }

    while(iterB!=B.end())
    {
        UnionMulti.insert(*iterB);
        iterB++;
    }

    multiset<int>::iterator iterUnion=UnionMulti.begin();

    while(iterUnion!=UnionMulti.end())
    {
        cout<<*iterUnion<<" ";
        iterUnion++;
    }

    cout<<endl;

    set<int> Inter_set;
    vector<int> Inter;

    set_intersection(A.begin(),A.end(),B.begin(),B.end(),back_inserter(Inter));

    vector<int>::iterator iterI=Inter.begin();

    while(iterI!=Inter.end())
    {
        Inter_set.insert(*iterI);
        iterI++;
    }

    set<int>::iterator iterInter_set=Inter_set.begin();

    while(iterInter_set!=Inter_set.end())
    {
        cout<<*iterInter_set<<" ";
        iterInter_set++;
    }

    cout<<endl;

    set<int> Diff_set;
    vector<int> Diff;

    set_difference(A.begin(),A.end(),B.begin(),B.end(),back_inserter(Diff));

    vector<int>::iterator iterD=Diff.begin();

    while(iterD!=Diff.end())
    {
        Diff_set.insert(*iterD);
        iterD++;
    }

    set<int>::iterator iterDiff_set=Diff_set.begin();

    while(iterDiff_set!=Diff_set.end())
    {
        cout<<*iterDiff_set<<" ";
        iterDiff_set++;
    }

    cout<<endl;

    set<int> Sym_set;
    vector<int> Sym;

    set_symmetric_difference(A.begin(),A.end(),B.begin(),B.end(),back_inserter(Sym));

    vector<int>::iterator iterS=Sym.begin();

    while(iterS!=Sym.end())
    {
        Sym_set.insert(*iterS);
        iterS++;
    }

    set<int>::iterator iterSym_set=Sym_set.begin();

    while(iterSym_set!=Sym_set.end())
    {
        cout<<*iterSym_set<<" ";
        iterSym_set++;
    }

    cout<<endl;




    return 0;
}
