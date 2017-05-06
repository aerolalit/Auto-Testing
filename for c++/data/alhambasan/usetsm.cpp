/*
   CH8 - 320142
   a4_p3  .cpp
   Alexandru Hambasan
   a.hambasan@jacobs-university.de
   */

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  set<int> A;
  multiset<int> B;

  while (true) {
    int temp;
    cin >> temp;
    if (temp < 0)
      break;
    A.insert(temp);
    B.insert(temp);
  } 

  cout << "Set A: ";
  for (set<int>::iterator itr = A.begin();
      itr != A.end(); ++itr)
    cout << *itr << " ";
  cout << endl;

  cout << "Multiset B: ";
  for (set<int>::iterator itr = B.begin();
      itr != B.end(); ++itr)
    cout << *itr << " ";
  cout << endl;

  cout << endl;

  A.erase(5);
  B.erase(5);

  cout << "Set A: ";
  for (set<int>::iterator itr = A.begin();
      itr != A.end(); ++itr)
    cout << *itr << " ";
  cout << endl;

  cout << "Multiset B: ";
  for (set<int>::iterator itr = B.begin();
      itr != B.end(); ++itr)
    cout << *itr << " ";
  cout << endl;

  cout << endl;

  A.insert(14);
  A.insert(198);

  multiset<int> abUnion, abDiff, abSymDiff;
  multiset<int>abInter;

  cout << "Union: ";
  set_union(A.begin(), A.end(), B.begin(), B.end(),
      inserter(abUnion, abUnion.begin()));
  for (set<int>::iterator it = abUnion.begin();
      it != abUnion.end(); it++)
    cout << *it << " ";
  cout << endl;

  cout << "Intersection: ";
  set_intersection(A.begin(), A.end(), B.begin(), B.end(),
      inserter(abInter, abInter.begin()));
  for (set<int>::iterator it = abInter.begin();
      it != abInter.end(); it++)
    cout << *it << " ";
  cout << endl;

  cout << "Difference: ";
  set_difference(A.begin(), A.end(), B.begin(), B.end(),
      inserter(abDiff, abDiff.begin()));
  for (set<int>::iterator it = abDiff.begin();
      it != abDiff.end(); it++)
    cout << *it << " ";
  cout << endl;

  cout << "Symmestric difference: ";
  set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(),
      inserter(abSymDiff, abSymDiff.begin()));
  for (set<int>::iterator it = abSymDiff.begin();
      it != abSymDiff.end(); it++)
    cout << *it << " ";
  cout << endl;



}
