//
//  main.cpp
//  assignment3
//
//  Created by Farida Sherif on 16/10/2022.
//

#include <iostream>
#include <vector>
#include "linkedList.h"
using namespace std;

void insertAfter(vector<int>&v, int firstValue, int secondValue);

int main()
{
    int size, n, f, s;
    vector <int> num;
    cout << "How many integers do you want to add ?" << endl;
    cin >> size;
    
    cout << "Please enter the " << size << " numbers: " << endl;
    
    for(int i = 0; i < size; i ++)
    {
        cin >> n;
        num.push_back(n);
    }
    
    cout << "to insert a value after another"<<endl
    <<"please enter the first value and second value respectively: " << endl;
    
    cin >> f >> s;
    insertAfter(num, f, s);
    
    cout << endl;
    cout << endl;
    cout <<"linked list of vector elements "<< endl;
    
    LinkedLists l1;
    l1.create_list(num);
    l1.print_elements();




    return 0;
}
void insertAfter(vector<int>&v, int firstValue, int secondValue)
{
    vector <int>::iterator iter;
    for(iter = v.begin(); iter!= v.end(); iter++)
    {
        if(*iter == firstValue)
        {
            v.insert((iter+1),secondValue);
            
        }
        
    }
    
}

