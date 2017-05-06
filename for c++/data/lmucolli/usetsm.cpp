/*
CH08-320143
a4_p3.cpp
Lorik Mucolli
l.mucolli@jacobs-university.de
*/
#include <iostream>
#include <vector>
#include <set>
#include <ctime>
#include <deque>
#include <algorithm>
#include <list>

using namespace std;

void print(set<int> A){
    for(set<int>::iterator  it = A.begin(); it != A.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}
void printM(multiset<int> A){
    for(multiset<int>::iterator  it = A.begin(); it != A.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    set<int> A, intersection, difference;
    multiset<int> B, both;
    set<int>::iterator temp;
    multiset<int>::iterator tempM;
    int number;
    while (number > 0){
        cin >> number;
        A.insert(number);
        B.insert(number);
    }
    cout << "Set A: ";
    print(A);
    cout << "Multiset B: ";
    printM(B);
    cout << endl;
    temp = A.find(5);
    A.erase(temp);
    cout << "Edited set A: ";
    print(A);
    tempM = B.find(5);
    B.erase(tempM);
    cout << "Edited multiset B: ";
    printM(B);
    A.insert(14);
    A.insert(198);
    for (set<int>::iterator it = A.begin(); it != A.end(); ++it){
        both.insert(*it);
    }
    for (multiset<int>::iterator tem = B.begin(); tem != B.end(); ++tem){
        both.insert(*tem);
    }
    cout << "Union is: ";
    printM(both);
    for (set<int>::iterator it = A.begin(); it != A.end(); ++it){
        for (multiset<int>::iterator tem = B.begin(); tem != B.end(); ++tem){
            if (*it == *tem){
                intersection.insert(*it);
                intersection.insert(*tem);
            }
        }
    }
    cout << "Intersection is: ";
    print(intersection);
    for (set<int>::iterator it = A.begin(); it != A.end(); ++it){
        for (multiset<int>::iterator tem = B.begin(); tem != B.end(); ++tem){
            if (*it == *tem){
                difference.insert(*it);
                difference.insert(*tem);
            }
        }
    }
    set<int> result;
    set_difference(A.begin(), A.end(), difference.begin(), difference.end(), inserter(result, result.end()));
    cout << "Difference is: ";
    print(result);

    set<int> temporary;
    for (set<int>::iterator it = A.begin(); it != A.end(); ++it){
        for (multiset<int>::iterator tem = B.begin(); tem != B.end(); ++tem){
            if (*it == *tem){
                temporary.insert(*it);
                temporary.insert(*tem);
            }
        }
    }
    set<int> symmetric;
    set_symmetric_difference(A.begin(), A.end(), temporary.begin(), temporary.end(), inserter(symmetric, symmetric.end()));
    cout << "The symmetric difference is: ";
    print(symmetric);

    return 0;
}




