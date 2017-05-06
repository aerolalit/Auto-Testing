/*
    320142
    a4_p3.cpp
    Muyun Cui
    m.cui@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

int main(int argc, const char * argv[]) {
    // 1. create sets
    set<int> A;
    multiset<int> B;
    
    // 2. read values
    int input;
    cin >> input;
    while(input >= 0){
        // 3. insert into A
        A.insert(input);
        // 4. insert into B
        B.insert(input);
        cin >> input;
    }
    
    set<int>::iterator i;
    multiset<int>::iterator j;
    
    // 5. print A and B
    for(i = A.begin(); i != A.end(); ++i)
        cout << *i << " ";
    cout << "\n" << endl;
    
    for(j = B.begin(); j != B.end(); ++j)
        cout << *j << " ";
    // 6. print an empty line
    cout << "\n" << endl;
    
    // 7. remove integers 5
    A.erase(5);
    B.erase(5);
    
    // 8. print A and B
    for(i = A.begin(); i != A.end(); i++)
        cout << *i << " ";
    cout << "\n" << endl;
    
    for(j = B.begin(); j != B.end(); j++)
        cout << *j << " ";
    cout << "\n" << endl;
    
    // 9. add values to A
    A.insert(14);
    A.insert(198);
    
    // 10. print union of A and B
    multiset<int> union_set(B);
    union_set.insert(A.begin(), A.end());
    
    for (auto el : union_set) {
        cout << el <<  " ";
    }
    
    // 11. print intersection of A and B
    set<int> intersection_set;
    set_intersection (A.begin(), A.end(), B.begin(), B.end(), inserter(intersection_set, intersection_set.begin()));
    
    for (auto el : intersection_set) {
        cout << el <<  " ";
    }
    
    // 12. print difference between A and B
    set<int> difference_set;
    set_difference (A.begin(), A.end(), B.begin(), B.end(), inserter(difference_set, difference_set.begin()));
    
    for (auto el : difference_set) {
        cout << el <<  " ";
    }
    
    // 13. print symmetric difference between A and B
    set<int> s_difference_set;
    set_symmetric_difference (A.begin(), A.end(), B.begin(), B.end(), inserter(s_difference_set, s_difference_set.begin()));
    
    for (auto el : s_difference_set) {
        cout << el <<  " ";
    }
    
    return 0;
}
