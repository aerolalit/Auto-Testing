/*
	problem4_3.cpp
	Lennart Meyer
	l.meyer@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main() {
  set<int> A;
  multiset<int> B;
  vector<int> C;
  set<int> D;
  multiset<int> E;
  set<int> F;
  set<int> G;
  int x;
  int run = 1;
  while(run) {
    cin >> x;
    if (x >= 0) {
      C.push_back(x);
    }
    else {
      run = 0;
    }
  }
  for(unsigned int y= 0; y < C.size(); y++) {
    int temp = C[y];
    A.insert(temp);
    B.insert(temp);
  }
  for(set<int>::const_iterator i =A.begin(); i !=A.end();++i) {
    cout << *i<< " ";
  }
  cout << endl;
  for(set<int>::const_iterator i=B.begin(); i !=B.end();++i) {
    cout << *i<< " ";
  }
  cout << endl;
  A.erase(5);
  B.erase(5);
  for(set<int>::const_iterator i=A.begin(); i!=A.end();++i) {
    cout << *i<< " ";
  }
  cout << endl;
  for(set<int>::const_iterator i=B.begin(); i!=B.end();++i) {
    cout << *i<< " ";
  }
  cout << endl;
  A.insert(14);
  A.insert(198);
  //union
  for(set<int>::const_iterator i=A.begin(); i!=A.end();++i) {
    E.insert(*i);
  }
  for(set<int>::const_iterator i=B.begin(); i!=B.end();++i) {
    E.insert(*i);
  }
  //intersection
  for(set<int>::const_iterator i=A.begin(); i!=A.end();++i) {
    if (B.find(*i) != B.end()) {
      D.insert(*i);
    }
  }
  for(set<int>::const_iterator i=B.begin(); i!=B.end();++i) {
    if (A.find(*i) != A.end()) {
      D.insert(*i);
    }
  }
  //printing both
  for(set<int>::const_iterator i=E.begin(); i!=E.end();++i) {
    cout << *i<< " ";
  }
  cout << endl;
  for(set<int>::const_iterator i=D.begin(); i!=D.end();++i) {
    cout << *i<< " ";
  }
  //difference
  for(set<int>::const_iterator i=A.begin(); i!=A.end();++i) {
    if (B.find(*i) == B.end()) {
      F.insert(*i);
    }
  }
  //symmetric difference
  for(set<int>::const_iterator i=A.begin(); i!=A.end();++i) {
    if (B.find(*i) == B.end()) {
      G.insert(*i);
    }
  }
  for(set<int>::const_iterator i=B.begin(); i!=B.end();++i) {
    if (A.find(*i) == A.end()) {
      G.insert(*i);
    }
  }
  cout << endl;
  //printing
  for(set<int>::const_iterator i=F.begin(); i!=F.end();++i) {
    cout << *i<< " ";
  }
  cout << endl;
  for(set<int>::const_iterator i=G.begin(); i!=G.end();++i) {
    cout << *i<< " ";
  }
  cout << endl;

	return 0;
}
