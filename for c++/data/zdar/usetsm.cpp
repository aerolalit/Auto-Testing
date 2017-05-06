/*
CH08-320143
a4_p3.cpp
Zain Dar
z.dar@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <set>
#include <algorithm>

using namespace std;

int main(){

    int i;
    set<int> A;
    multiset<int> B;
    multiset<int> x;
    set<int> y;
    set<int> z;
    set<int> w;

    set<int>::iterator it;
    multiset<int>::iterator mit;

    cout<<"Enter numbers: ";
    cin >> i;
    while(1){
        if(i<0)
            break;

        A.insert(i);
        B.insert(i);
        cin >> i;
    }

    cout << endl << "A: ";
    for(it = A.begin(); it != A.end(); it++)
        cout << *it << " ";
    cout << endl << endl;

    cout << "B: ";
    for(mit = B.begin(); mit != B.end(); mit++)
        cout << *mit << " ";
    cout << endl;

    A.erase(*it);
    A.erase(5);
    B.erase(*mit);
    B.erase(5);

    cout << endl << "A: ";
    for(it = A.begin(); it != A.end(); it++)
        cout << *it << " ";
    cout << endl << endl;

    cout << "B: ";
    for(mit = B.begin(); mit != B.end(); mit++)
        cout << *mit << " ";
    cout << endl;

    A.insert(14);
    A.insert(198);

    set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(x,x.begin()));
    cout << endl << "Union of the sets: ";
    for(mit = x.begin(); mit != x.end(); mit++)
        cout << *mit << " ";
    cout << endl;

    set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(y,y.begin()));
    cout << endl << "Intersection of the sets: ";
    for(it = y.begin(); it != y.end(); it++)
        cout << *it << " ";
    cout << endl;

    set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(z,z.begin()));
    cout << endl << "Difference of the sets: ";
    for(it = z.begin(); it != z.end(); it++)
        cout << *it << " ";
    cout << endl;

    set_symmetric_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(w,w.begin()));
    cout << endl << "Symmetric difference between the sets: ";
    for(it = w.begin(); it != w.end(); it++)
        cout << *it << " ";
    cout << endl;

	return 5;
}
