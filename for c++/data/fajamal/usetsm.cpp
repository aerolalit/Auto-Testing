/*CH-320142
a4_p3.cpp
Faraz Jamal
fa.jamal@jacobs-university.de
*/
#include <iostream>
#include <set>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){

int i;
set<int> A;
multiset<int> B;
multiset<int> u;
set<int> intersect;
set<int> diff_set;
set<int> symmetric;
set<int>::iterator itr;
multiset<int>::iterator mitr;

cin >> i;
while(1){
    if(i<0){
    break;
}
A.insert(i);
B.insert(i);
cin>>i;
}

    cout<<"A: ";
for(itr=A.begin(); itr!=A.end(); itr++){
        cout<<*itr<< " ";
}
    cout<<"\n";

cout<<endl<<"B: ";
for(mitr=B.begin(); mitr!=B.end(); mitr++){
    cout<<*mitr<< " ";
}
    cout<<"\n";
A.erase(5);
B.erase(5);
cout<<endl<<"A: ";
for(itr=A.begin(); itr!= A.end(); itr++){
    cout<<*itr<<" ";
}
    cout<<"\n";

cout<<endl<<"B: ";
for(mitr=B.begin(); mitr!= B.end(); mitr++){
    cout<<*mitr<<" ";
}
    cout<<"\n";
A.insert(14);
A.insert(198);
set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(intersect,intersect.begin()));
cout<<"Intersection:\n";
for(itr=intersect.begin(); itr!=intersect.end(); itr++){
    cout<<*itr<<" ";
}
    cout<<"\n";

set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(diff_set,diff_set.begin()));
cout<<"Diff:\n";
for(itr=diff_set.begin(); itr!=diff_set.end(); itr++){
    cout<<*itr<<" ";
}
    cout<<"\n";

set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(u,u.begin()));
cout<<"Union:\n";
for(mitr=u.begin(); mitr!=u.end(); mitr++){
    cout<<*mitr<<" ";
}
    cout<<"\n";

set_symmetric_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(symmetric,symmetric.begin()));
cout<<"Symmetric difference:\n";
for(itr=symmetric.begin(); itr!=symmetric.end(); itr++){
    cout<<*itr<<" ";
}
    cout<<"\n";
return 0;
}
