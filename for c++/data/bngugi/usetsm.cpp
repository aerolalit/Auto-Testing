#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

bool compare(int i, int j)  {return (i<j); }

int main() {
    set<int> A;
    multiset<int> B;
    unsigned int x;
    x=1;

    cout<< "Enter integers: " << endl;
    pair<set<int>::iterator, bool> result;
    multiset<int>::iterator it;

    //Read values into the set A and multiset B
    while(x > 0)
    {
        cin >> x;
        result = A.insert(x*1);	// pushes squares into the set:
        it = B.insert(x*1);
        if (!result.second)
            cerr << "Failed to insert " << x << " in set A" << endl;
    }

    cout<<"Set A contains: "<<endl;
    //set<int>::iterator Ater = A.begin();
    copy(A.begin(), A.end(), ostream_iterator<int>(cout, " "));

    cout<<"\n\nMultiset B contains: "<<endl;
    copy(B.begin(), B.end(), ostream_iterator<int>(cout, " "));
    cout <<"\n" <<endl;

    result = A.insert(14*1);
    result = A.insert(198*1);

    cout<<"Set A now contains: "<<endl;
    //set<int>::iterator Ater = A.begin();
    copy(A.begin(), A.end(), ostream_iterator<int>(cout, " "));


    return 0;
}
