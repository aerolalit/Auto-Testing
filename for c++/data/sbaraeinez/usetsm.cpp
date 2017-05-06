/*
CH08-320143
a4-p3.cpp
Shahrzad Baraeinezhad
s.baraeinezhad@jacobs-university.de
*/
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
set<int>A,iresult,dresult,sdresult;
multiset<int>B,uresult;
int value;
while (value>0){
    cin>>value;
    if (value<0){
        break;
    }
    A.insert(value);
    B.insert(value);
     }
     set<int>::iterator it;
     for (it=A.begin(); it!=A.end(); it++ ){
        cout<<*it<< ' ';
     }
     cout<<endl;
     multiset<int>::iterator mit;
     for (mit=B.begin(); mit!=B.end(); mit++ ){
        cout<<*mit<< ' ';
     }
     cout<<endl;
     A.erase(5);
     B.erase(5);
     for (it=A.begin(); it!=A.end(); it++ ){
        cout<<*it<< ' ';
     }
     cout<<endl;
     for ( mit=B.begin(); mit!=B.end(); mit++ ){
        cout<<*mit<< ' ';
     }
     cout<<endl;
    A.insert(24);
    A.insert(198);
    set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(uresult,uresult.begin()));

    for (mit=uresult.begin(); mit!=uresult.end(); mit++ ){
        cout<<*mit<< ' ';
     }
    cout<<endl;
    set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(iresult,iresult.begin()));
    for (it=iresult.begin(); it!=iresult.end(); it++ ){
        cout<<*it<< ' ';
     }
     cout<<endl;
     set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(dresult,dresult.begin()));
     for (it=dresult.begin(); it!=dresult.end(); it++ ){
        cout<<*it<<' ';
     }
     cout<<endl;
     set_symmetric_difference(B.begin(),B.end(),A.begin(),A.end(),inserter(sdresult,sdresult.begin()));
     for (it=sdresult.begin(); it!=sdresult.end(); it++ ){
        cout<<*it<<' ';
     }
return 0;
}
