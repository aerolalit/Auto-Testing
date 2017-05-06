/*
   CH08-320143
   a4_p3.cpp
   Milen Vitanov
   m.vitanov@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    set<int> A;
    multiset<int> B, C;
    int el;

    while(1)
    {
        cin >> el;
        if(el < 0)
            break;
        A.insert(el);
        B.insert(el);
    }

    set<int>::iterator itA;
    multiset<int>::iterator itB;

    cout << endl;
    cout << "Set A: ";
    for(itA = A.begin(); itA != A.end(); itA++)
        cout << *itA << " ";
    cout<< endl;
    cout << "\nMultiset B: ";
    for(itB = B.begin(); itB != B.end(); itB++)
        cout << *itB << " ";
    cout << endl;

    A.erase(5);
    B.erase(5);

    cout << endl;
    cout << "Set A: ";
    for(itA = A.begin(); itA != A.end(); itA++)
        cout << *itA << " ";
    cout << "\n" << endl;
    cout << "Multiset B: ";
    for(itB = B.begin(); itB != B.end(); itB++)
        cout << *itB << " ";
    cout << endl;

    A.insert(14);
    A.insert(198);

    // inserter converts an input iterator to an output one
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));
    cout << endl;
    cout << "Union of A and B: ";
    for(itB = C.begin(); itB != C.end(); itB++)
        cout << *itB << " ";
    cout << endl;

    C.clear();
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));
    cout << "Intersection of A and B: ";
    for(itB = C.begin(); itB != C.end(); itB++)
        cout << *itB << " ";
    cout << endl;

    C.clear();
    set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));
    cout << "Difference A\\B: ";
    for(itB = C.begin(); itB != C.end(); itB++)
        cout << *itB << " ";
    cout << endl;

    C.clear();
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));
    cout << "Symmetric Difference A\\B: ";
    for(itB = C.begin(); itB != C.end(); itB++)
        cout << *itB << " ";
    cout << endl;

    return 0;
}
