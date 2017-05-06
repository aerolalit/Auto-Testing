/*
    CH08-320143
    a4.p3.cpp
    Colin Rothgang
    c.rothgang@jacobs-university.de
*/

//Using C++11 standard

#include <iostream>
#include <set>
//#include <algorithm>
using namespace std;

void print(const set<unsigned int> &v, string term) {
  cout<<"(";
  for (auto it=v.begin(); it!=v.end();) {
    cout<<*it;
    if (++it!=v.end()) {
      cout<<" ";
    }
    else {
      cout<<")"<<term;
    }
  }
}
void print(const multiset<unsigned int> &v, string term) {
  cout<<"(";
  for (auto it=v.begin(); it!=v.end();) {
    cout<<*it;
    if (++it!=v.end()) {
      cout<<" ";
    }
    else {
      cout<<")"<<term;
    }
  }
}

int main() {
  set<unsigned int> A=set<unsigned int>();
  multiset<unsigned int> B=multiset<unsigned int>();
  string input;
  int inp;
  while (true) {
    getline(cin, input, '\n');
    inp=stoi(input);
    if(inp<=0) {
      break;
    }
    A.insert((unsigned)inp);
    B.insert((unsigned)inp);
  }
  print(A, "\n");
  print(B, "\n");
  
  cout<<endl;

  A.erase(5);
  B.erase(5);

  print(A,"\n");
  print(B,"\n");

  A.insert(14);
  A.insert(198);

  multiset<unsigned int> uni=multiset<unsigned int>(B);
  uni.insert(A.begin(), A.end());
  cout<<"The union: "<<endl;
  print(uni, "\n");

  set<unsigned int> inters=set<unsigned int>(A);
  inters.insert(B.begin(), B.end());
  cout<<"The intersection: "<<endl;
  print(inters, "");

  set<unsigned int> diff=set<unsigned int>(A);
  for (auto it=B.begin(); it!=B.end(); it++) {
    diff.erase(*it);
  }
  cout<<endl<<"The difference: "<<endl;
  print(diff, "");

  set<unsigned int> symdiff=set<unsigned int>(uni.begin(),uni.end());
  for (auto it=B.begin(); it!=B.end(); it++) {
    symdiff.erase(*it);
  }
  cout<<endl<<"The symmetrical difference:"<<endl;
  print(symdiff, "\n");
  return 0;
}

