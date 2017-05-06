/*
CH08-320143
a4 p3.cpp
Malte Granderath
m.granderath@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    set<int> s_set, inters, diff, symm;
    multiset<int> m_set, uni;
    int temp;

    while(cin >> temp && temp >= 0){
        s_set.insert(temp);
        m_set.insert(temp);
    }

    set<int>::iterator it;
    for(it = s_set.begin(); it != s_set.end(); it++){
        cout << *it << " ";
    }
    cout << endl << endl;
    for(it = m_set.begin(); it != m_set.end(); it++){
        cout << *it << " ";
    }
    cout << endl << endl;
    s_set.erase(5);
    m_set.erase(5);
    for(it = s_set.begin(); it != s_set.end(); it++){
        cout << *it << " ";
    }
    cout << endl << endl;
    for(it = m_set.begin(); it != m_set.end(); it++){
        cout << *it << " ";
    }
    cout << endl << endl;
    s_set.insert(14);
    s_set.insert(198);
    set_union(s_set.begin(), s_set.end(), m_set.begin(), m_set.end(), inserter(uni, uni.begin()));
    for(it = uni.begin(); it != uni.end(); it++){
        cout << *it << " ";
    }
    cout << endl << endl;;
    set_intersection(s_set.begin(), s_set.end(), m_set.begin(), m_set.end(), inserter(inters, inters.begin()));
    for(it = inters.begin(); it != inters.end(); it++){
        cout << *it << " ";
    }
    cout << endl << endl;
    set_difference(s_set.begin(), s_set.end(), m_set.begin(), m_set.end(), inserter(diff, diff.begin()));
    for(it = diff.begin(); it != diff.end(); it++){
        cout << *it << " ";
    }
    cout << endl << endl;
    set_symmetric_difference(s_set.begin(), s_set.end(), m_set.begin(), m_set.end(), inserter(symm, symm.begin()));
    for(it = symm.begin(); it != symm.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

}
