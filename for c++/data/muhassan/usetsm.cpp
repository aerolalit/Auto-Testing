/*CH08-320143
a4-p3.cpp
Muhammad Ammar Hassan
mu.hassan@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    set<int> A;
    std::multiset<int> B;

    int a;

    cout << "Enter Integers: \n";

    while (1)
    {
        cin >> a;

        if (a<0)
            break;

        A.insert(a);
        B.insert(a);

    }

    set<int>::iterator iter;

    cout << "Elements of A: ";
    for (iter=A.begin();iter != A.end();iter++)
        cout << *iter << " " ;

    cout << "\n\n";

    cout << "Elements of A: ";
    for (iter=B.begin();iter != B.end();iter++)
        cout << *iter << " " ;

    cout << "\n\n";

    A.erase(5);
    B.erase(5);

    cout << "Elements of A after removing 5s: ";
    for (iter=A.begin();iter != A.end();iter++)
        cout << *iter << " " ;

    cout << "\n\n";

    cout << "Elements of B after removing 5s: ";
    for (iter=B.begin();iter != B.end();iter++)
        cout << *iter << " " ;

    cout << "\n\n";

    A.insert(14);
    A.insert(198);

    std::multiset<int>::iterator iter1;

    std::multiset<int> C;

    set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(C,C.begin()));

    cout << "Union of set A & B: ";
    for (iter1=C.begin();iter1 != C.end() ;iter1++)
        cout << *iter1 << " ";

    set<int> D;


    set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(D,D.begin()));

    cout << "\n" ;

    cout << "Intersection of A & B: ";
    for (iter1=D.begin();iter1 != D.end() ;iter1++)
        cout << *iter1 << " ";

    set<int> E;

    set_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(E,E.begin()));

    cout << "\n" ;

    cout << "The Difference of A & B: ";
    for (iter1=E.begin();iter1 != E.end() ;iter1++)
        cout << *iter1 << " ";

    cout << "\n";

    set<int> F;

    set_symmetric_difference(A.begin(),A.end(),B.begin(),B.end(),inserter(F,F.begin()));

    cout << "The symmetric Difference of A & B: ";
    for (iter1=F.begin();iter1 != F.end() ;iter1++)
        cout << *iter1 << " ";

    cout << "\n";

    return 0;

}
