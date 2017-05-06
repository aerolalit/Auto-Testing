/*
   CH08-320143
   a4.p2.cpp
   Ali Hamza
   a.hamza@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
    set<int> A, D, E, F;
    multiset<int> B, C;
    int input;
    cout<<"Enter the num..."<<endl;
    while(1){
        cin>>input;
        if(input<0){
            break;
        }
        A.insert(input);
        B.insert(input);
    }
    cout<<"Set A contains.."<<endl;
    set<int>::iterator viter;
    for(viter = A.begin(); viter!=A.end(); viter++){
		cout << *viter << " ";
    }
	cout << endl<< endl;
	 cout<<"Multiset B contains.."<<endl;
    multiset<int>::iterator mviter;
	for(mviter=B.begin(); mviter!=B.end(); mviter++){
        cout<<*mviter<<" ";
	}
	cout << endl<<endl;

    A.erase(5);
	cout<<"Set A after erasing 5.."<<endl;
	for(viter = A.begin(); viter!=A.end(); viter++){
		cout << *viter << " ";
    }
	cout << endl<< endl;

	cout<<"Set B after erasing 5.."<<endl;
	B.erase(5);
	for(mviter=B.begin(); mviter!=B.end(); mviter++){
        cout<<*mviter<<" ";
	}
	cout << endl<<endl;

    A.insert(14);
    A.insert(198);

    set_union(A.begin(),A.end(), B.begin(), B.end(), inserter(C,C.begin()));
    cout<<"Union is....."<<endl;
    for(mviter=C.begin(); mviter!=C.end(); mviter++){
        cout<<*mviter<<" ";
	}
	cout << endl;

    set_intersection(A.begin(),A.end(),B.begin(),B.end(), inserter(D, D.begin()) );
    cout<<"Intersection is....."<<endl;
    for(viter=D.begin(); viter!=D.end(); viter++){
        cout<<*viter<<" ";
	}
	cout << endl;

	set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(E, E.begin()));
	cout<<"Difference is....."<<endl;
    for(viter=E.begin(); viter!=E.end(); viter++){
        cout<<*viter<<" ";
	}
	cout << endl;

    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(F, F.begin()));
    cout<<"Symmetric Difference is....."<<endl;
    for(viter=F.begin(); viter!=F.end(); viter++){
        cout<<*viter<<" ";
	}
	cout << endl;

    return 0;
}
