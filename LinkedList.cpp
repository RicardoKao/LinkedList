//
// Created by ricardogao on 2018/8/11.
//
#include "LinkedList.h"
void LinkedList::insertNode( int position, int val){
    ListNode *p = head;
    if(p ==nullptr)
        cout <<"The LinkedList is empty. Insert failed."<<endl;
    else{
        int pos = 0;
        while(p!= nullptr&&pos!= position){
            p = p->next;
            pos++;
        }
        if(p == nullptr)
            cout <<"The position does not exist. Insert failed."<<endl;
        else{
            ListNode *n = new ListNode(val, p->next);
            p->next = n;
        }
    }
}
