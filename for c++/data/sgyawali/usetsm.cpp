/*
CH08-320143
a4 p1.cpp
Sandeep Gyawli
s.gyawali@jacobs-university.de
*/
#include <iostream>
#include <set>//set
#include <algorithm>//set operations
using namespace std;

int main()
{
    std::set<int> SetA;
    std::multiset<int> MSetB;
    int Input;
    while(1){

        cin>>Input;
        if(Input<0){
            break;
        }
        else
        {
            SetA.insert(Input);
            MSetB.insert(Input);
        }


    }
    std::set<int>::iterator sit=SetA.begin();
    std::multiset<int>::iterator mit=MSetB.begin();

    while(sit!=SetA.end()){
        cout<<*sit<<" ";
        sit++;
    }
    cout<<endl;
    while(mit!=MSetB.end()){
        cout<<*mit<<" ";
        mit++;
    }
    cout<<endl;
    SetA.erase(5);
    MSetB.erase(5);
    sit=SetA.begin();
    mit=MSetB.begin();
    while(sit!=SetA.end()){
        cout<<*sit<<" ";
        sit++;
    }
    cout<<endl;
    while(mit!=MSetB.end()){
        cout<<*mit<<" ";
        mit++;
    }
    cout<<endl;
    SetA.insert(14);
    MSetB.insert(198);

    std::set<int> Difference;
    std::multiset<int> Union;
    std::set<int> SymmetricDiff;
    std::set<int> Intersection;
    set_union(SetA.begin(),SetA.end(),MSetB.begin(),MSetB.end(),inserter(Union,Union.begin()));
    set_difference(SetA.begin(),SetA.end(),MSetB.begin(),MSetB.end(),inserter(Difference,Difference.begin()));
    set_intersection(SetA.begin(),SetA.end(),MSetB.begin(),MSetB.end(),inserter(Intersection,Intersection.begin()));
    set_symmetric_difference(SetA.begin(),SetA.end(),MSetB.begin(),MSetB.end(),inserter(SymmetricDiff,SymmetricDiff.begin()));

    mit=Union.begin();
    while(mit!=Union.end()){
        cout<<*mit<<" ";
        mit++;
    }
cout<<endl;
    sit=Intersection.begin();
    while(sit!=Intersection.end()){
        cout<<*sit<<" ";
        sit++;
    }
cout<<endl;
    sit=Difference.begin();
    while(sit!=Difference.end()){
        cout<<*sit<<" ";
        sit++;
    }
cout<<endl;
    sit=SymmetricDiff.begin();
    while(sit!=SymmetricDiff.end()){
        cout<<*sit<<" ";
        sit++;
    }

    return 0;
}
