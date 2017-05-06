/*
	CH08-320143
	a4_p3.cpp
	Seongjin Bien
	s.bien@jacobs-university.de
*/
//#include "stdafx.h"
#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

void print_set(set<int> s, char sep) {
	set<int>::iterator it, help;
	for (it = s.begin(); it != s.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
}

void print_set(multiset<int> s, char sep) {
	multiset<int>::iterator it, help;
	for (it = s.begin(); it != s.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
}

int main()
{
	set<int> A;
	multiset<int> B;
	int input = 1;

	while (input > 0) {
		cin >> input;
		if (input > 0) {
			A.insert(input);
			B.insert(input);
		}
	}

	cout << "A: ";
	print_set(A, ' ');
	cout << endl; //the empty line

	cout << "B: ";
	print_set(B, ' ');
	cout << endl; //the empty line

	A.erase(5);
	B.erase(5);

	cout << "A w/o 5: ";
	print_set(A, ' '); 
	cout << endl; //the empty line

	cout << "B w/o 5: ";
	print_set(B, ' ');
	cout << endl; //the empty line

	A.insert(14);
	A.insert(198);
	
	//Union 

	multiset<int> fun_u;
	set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(fun_u, fun_u.begin()));
	cout << "Union: ";
	print_set(fun_u, ' ');
	cout << endl; //the empty line
	
	//Intersection, 
	set<int> fun_in;
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(fun_in, fun_in.begin()));
	cout << "Intersection: ";
	print_set(fun_in, ' ');
	cout << endl;

	
	//Difference A/B
	set<int> fun_d;
	set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(fun_d, fun_d.begin()));
	cout << "Difference: ";
	print_set(fun_d, ' ');
	cout << endl; //the empty line

	//Symmetric difference 
	set<int> fun_s; //first copy the union set into the diff set
	set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(fun_s, fun_s.begin()));
	cout << "Symmetric difference: ";
	print_set(fun_s, ' ');

    return 0;
}