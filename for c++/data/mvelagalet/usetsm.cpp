//
//  main.cpp
//  Sets_Multisets_New
//
//  Created by Mahitha on 02.05.17.
//  Copyright © 2017 Mahitha. All rights reserved.
//
/*
 CH08-320143
 a4 p3.cpp
 Mahitha Velagaleti
 mvelagaleti@jacobs-university.de
 */

#include<iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <set>
#include <list>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    set<int> a;
    multiset<int> b;
    multiset<int> c;
    set<int> d;
    int n;
    do{
        cout << "Enter number: ";
        cin >> n;
        if(n < 0){
            break;
        }
        else{
            a.insert(n);
            b.insert(n);
        }
    }while(1);
    
    set<int>::iterator it;
    cout << endl << "The elements in set A are: " << endl;
    for(it = a.begin(); it != a.end(); it++){
        cout << *it << " ";
    }
    
    multiset<int>::iterator mit;
    cout << endl << endl << "The elements in multiset B are: " << endl;
    for(mit = b.begin(); mit != b.end(); mit++){
        cout << *mit << " ";
    }
    
    cout << endl;
    a.erase(5);
    b.erase(5);
    cout << "The elements in set A after deleting 5 are: " << endl;
    for(it = a.begin(); it != a.end(); it++){
        cout << *it << " ";
    }
    
    cout << endl << "The elements in multiset B after deleting 5 are: " << endl;
    
    for(mit = b.begin(); mit != b.end(); mit++){
        cout << *mit << " ";
    }
    
    a.insert(14);
    a.insert(198);
    
    
    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(c, c.begin()));
    set<int>::iterator cit;
    cout << endl << "After Union: " <<endl;
    
    for(cit = c.begin(); cit != c.end(); cit++){
        cout << *cit << " ";
    }
    
    c.clear();
   
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(c, c.begin()));
    
    cout << endl << "After Intersection: "\
    << endl;
    
    for(cit = c. begin(); cit != c.end(); cit++){
        cout << *cit << " ";
    }
    c.clear();

    set<int>::iterator dit;
    set_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(d, d.begin()));
    cout << endl << "Difference: " << endl;
    for(dit = d.begin(); dit != d.end(); dit++){
        cout << *dit << " ";
    }
    d.clear();
    cout << endl;
    
    set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), inserter(d, d.begin()));
    cout << "Symmetric Difference: " << endl;
    for(dit = d.begin(); dit != d.end(); dit++){
        cout << *dit << " ";
    }
    cout << endl;
    d.clear();
    return 0;
}
    
    
    
    
    
