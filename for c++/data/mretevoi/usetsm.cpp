/*
    CH08-320143
     a4_p3.cpp
     Maria-Alexandra Retevoi
     m.retevoi@jacobs-university.de
*/


#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {
	set<int> A;
	set<int> D;
	multiset<int> B;
	multiset<int> C;
	int elem;
	cin >> elem;
	while (elem > 0) {
		A.insert(elem);
		B.insert(elem);
		cin >> elem;
	}

	set<int>::const_iterator i;
	for (i = A.begin(); i != A.end(); ++i) {
		cout << *i << ' ';
	}
	cout << endl << endl;

	multiset<int>::iterator j;
	for (j = B.begin(); j != B.end(); ++j) {
		cout << *j << ' ';
	}
	cout << endl << endl;

	A.erase(5);
	B.erase(5);

	for (i = A.begin(); i != A.end(); ++i) {
		cout << *i << ' ';
	}
	cout << endl << endl;

	for (j = B.begin(); j != B.end(); ++j) {
		cout << *j << ' ';
	}
	cout << endl << endl;

	A.insert(14);
	A.insert(198);

	set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.begin()));

	for (j = C.begin(); j != C.end(); ++j) {
		cout << *j << ' ';
	}

	cout << endl;

	set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));

	for (i = D.begin(); i != D.end(); ++i) {
		cout << *i << ' ';
	}

    cout << endl;
	D.clear();

	set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));

	for (i = D.begin(); i != D.end(); ++i) {
		cout << *i << ' ';
	}

    cout << endl;
	D.clear();

	set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));

	for (i = D.begin(); i != D.end(); ++i) {
		cout << *i << ' ';
	}

	return 0;
}

