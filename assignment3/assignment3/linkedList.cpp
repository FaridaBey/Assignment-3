//
//  linkedList.cpp
//  assignment3
//
//  Created by Farida Sherif on 18/10/2022.
//
#include <iostream>
#include "linkedList.h"
#include <vector>
using namespace std;
LinkedLists::LinkedLists()
{
    head = NULL;
}
void LinkedLists::add_node(int v, int n)
{
    if (head == NULL)
    {
        head = new node;
        return;
    }
    else
    {
        node *q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = new node;
        q->value = v;
        q->no_of_occ = n;
    }
}
void LinkedLists::remove_node(int x)
{
    node *p, *q;
    int index = 0;
    p = head;
    if(head == NULL)
    {
        cout << "list is empty" << endl << "no nodes to remove" << endl;
        return;
    }
    while(p->value != x)
    {
        p = p->next;
        index ++;
    }
    q = p-1;
    q->next = p->next;
    p->next = q;
}
void LinkedLists::print_elements()
{
    node *temp = head;
      
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        while (temp != NULL)
        {
            cout << temp->value << " occured " << temp->no_of_occ << " time "<< endl;
            temp = temp->next;
        }
}
LinkedLists LinkedLists::create_list(vector <int>& v)
{
    this->add_node(0, 0);
    for(int i = 0; i < v.size(); i ++)
    {
        int count = 0;
        
            for(int j = 0; j < v.size(); j ++)
            {
                if(v.at(i) == v.at(j))
                    count ++;
            }
        this->add_node(v.at(i), count);
    }
    this->remove_node(0);
    return *this;
}
int LinkedLists::sum_of_list()
{
    int sum = 0;
    node *temp = head;
    if (head == NULL) {
        return sum;
    }

    while (temp != NULL)
    {
        sum = sum + temp->value;
        temp = temp->next;
    }
    return sum;
}
