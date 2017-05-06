/*
  CH08-320143
  a4_p3.cpp
  Syeda Alizae Fatima
  s.fatima@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <set>
#include <algorithm>

using namespace std;

int main(){

    int n;
    set <int> A;
    multiset <int> B;
    multiset <int> uni;
    set <int> intersection;
    set <int> difference;
    set <int> symmetric;

    set<int>::iterator si;
    multiset<int>::iterator mi;

    cin >> n;
    while(1)
        {
        if(n<0)
            break;

        A.insert(n);
        B.insert(n);
        cin >> n;
    }

    cout << endl << "A: ";
    for(si = A.begin(); si != A.end(); si++)
        cout << *si << " ";
    cout << endl << endl;

    cout << "B: ";
    for(mi = B.begin(); mi != B.end(); mi++)
        cout << *mi << " ";
    cout << endl;

    A.erase(5);
    B.erase(5);

    cout << endl << "A: ";
    for(si = A.begin(); si != A.end(); si++)
        cout << *si << " ";
    cout << endl << endl;

    cout << "B: ";
    for(mi = B.begin(); mi != B.end(); mi++)
        cout << *mi << " ";
    cout << endl;

    A.insert(14);
    A.insert(198);


    set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(uni,uni.begin()));
    cout << endl << "Union:";
    for(mi = uni.begin(); mi != uni.end(); mi++)
        cout << *mi << " ";
    cout << endl;


    set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(intersection,intersection.begin()));
    cout << endl << "Intersection:";
    for(si = intersection.begin(); si != intersection.end(); si++)
        cout << *si << " ";
    cout << endl;



    set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(difference,difference.begin()));
    cout << endl << "Difference:";
    for(si = difference.begin(); si != difference.end(); si++)
        cout << *si << " ";
    cout << endl;

    set_symmetric_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(symmetric,symmetric.begin()));
    cout << endl << "Symmetric difference:";
    for(si = symmetric.begin(); si != symmetric.end(); si++)
        cout << *si << " ";
    cout << endl;

	return 0;
}
