//
//  linkedList.h
//  assignment3
//
//  Created by Farida Sherif on 18/10/2022.
//

#ifndef linkedList_h
#define linkedList_h
#include <iostream>
using namespace std;

struct node
{
public:
    int value;
    int no_of_occ;
    node * next;
    node()
    {
        value =0;
        no_of_occ = 1;
        next = NULL;
    }
    node(int v)
    {
        this->value = v;
        this->no_of_occ = 1;
        this->next = NULL;
    }
};
class LinkedLists
{
private:
    node *head;
public:
    LinkedLists();
    void add_node(int v, int n);
    void remove_node(int x); 
    void print_elements();
    LinkedLists create_list(vector <int>& v);
    int sum_of_list();
};

#endif /* linkedList_h */
