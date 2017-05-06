/*
CH08-320143
a4_p3_m2.cpp
Matius Chairani
m.chairani@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  set<int> A, in, di, sd;
  multiset<int> B, un;
  int input;

  cout << "Enter input: ";
  cin >> input;

  while(input >= 0) {
    A.insert(input);
    B.insert(input);
    cout << "Enter input: ";
    cin >> input;
  }

  for(set<int>::iterator pos = A.begin(); pos != A.end(); pos++) {
    cout << *pos << " ";
  }

  cout << endl;
  cout << endl; // empty line

  for(multiset<int>::iterator pos = B.begin(); pos != B.end(); pos++) {
    cout << *pos << " ";
  }

  cout << endl;
  cout << endl; // empty line

  A.erase(5);
  B.erase(5);

  for(set<int>::iterator pos = A.begin(); pos != A.end(); pos++) {
    cout << *pos << " ";
  }

  cout << endl;
  cout << endl; // empty line

  for(multiset<int>::iterator pos = B.begin(); pos != B.end(); pos++) {
    cout << *pos << " ";
  }

  cout << endl;
  cout << endl;

  // INSERT FUNCTION
  A.insert(14);
  A.insert(198);

  // UNION FUNCTION
  set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(un, un.begin()));

  cout << "Union                : ";

  for(multiset<int>::iterator pos = un.begin(); pos != un.end(); pos++) {
    cout << *pos << " ";
  }

  cout << endl;


  // INTERSECTION FUNCTION
  set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(in, in.begin()));

  cout << "Intersection         : ";

  for(set<int>::iterator pos = in.begin(); pos != in.end(); pos++) {
    cout << *pos << " ";
  }

  cout << endl;

  // DIFFERENCE FUNCTION
  set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(di, di.begin()));

  cout << "Difference           : ";

  for(set<int>::iterator pos = di.begin(); pos != di.end(); pos++) {
    cout << *pos << " ";
  }

  cout << endl;

  // SYMMETRIC DIFFERENCE FUNCTION
  set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(sd, sd.begin()));

  cout << "Symmetric difference : ";

  for(set<int>::iterator pos = sd.begin(); pos != sd.end(); pos++) {
    cout << *pos << " ";
  }

  cout << endl;

  return 0;
}
