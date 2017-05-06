#include <set>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

int main(){

     set<int> A;
     multiset<int> B;
     int x;
     cin >> x;
     while(x>= 0){
          A.insert(x);
          B.insert(x);
          cin>>x;
     }
     for(set<int>::iterator it=A.begin(); it!=A.end(); it++){
          cout << *it <<' ';
     }
     cout <<"\n\n";
     for(multiset<int>::iterator it=B.begin(); it!=B.end(); it++){
          cout << *it <<' ';
     }
     cout <<"\n\n";
     A.erase(5);
     B.erase(5);
     for(set<int>::iterator it=A.begin(); it!=A.end(); it++){
          cout << *it <<' ';
     }
     cout <<"\n\n";
     for(multiset<int>::iterator it=B.begin(); it!=B.end(); it++){
          cout<<*it<<' ';
     }
     cout <<"\n\n";
     A.insert(14);
     A.insert(198);
     multiset<int> uni;
     set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(uni, uni.begin()));
     for(multiset<int>::iterator it=uni.begin(); it!=uni.end(); it++){
          cout << *it <<' ';
     }
     cout <<"\n";
     multiset<int>inter;
     set_intersection( A.begin(), A.end(), B.begin(), B.end(), inserter(inter, inter.begin()));
     for(multiset<int>::iterator it=inter.begin(); it!=inter.end(); ++it){
          cout << *it <<' ';
     }
     cout <<"\n";
     set<int> dif;
     set_difference( A.begin(), A.end(), B.begin(), B.end(), inserter(dif, dif.begin()));
     for(set<int>::iterator it=dif.begin(); it!=dif.end();it++){
          cout << *it <<' ';
     }
     cout <<"\n\n";
     set<int>simdif;
     set_symmetric_difference( A.begin(), A.end(), B.begin(), B.end(), inserter(simdif, simdif.begin()));
     for(set<int>::iterator it=simdif.begin(); it!=simdif.end();it++){
          cout << *it <<' ';
     }
     cout <<"\n\n";
     return 0;
}
