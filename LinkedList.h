//
// Created by ricardogao on 2018/8/11.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include "ListNode.h"

class LinkedList{
public:
    LinkedList():head(nullptr),tail(nullptr){};
    LinkedList(int n){
        head = new ListNode();
        ListNode *p = head;
        while((n-2)!=0){
            p->next =  new ListNode();
        }
        p->next = new ListNode();
        tail = p->next;
    }
    ~ LinkedList(){
        delete head;
        delete tail;
    };
    void insertNode(int position, int val);
    void removeNode(int position);              //remove from head
    void removeNodeFE(int position);      //remove from tail
    void modifyNode(int position, int newVal);
    int getPosition(int val);
    int getValue(int position);
    ListNode* reverseList();
    void print();
private:
    ListNode* head;
    ListNode* tail;
    int position;
};
#endif //LINKEDLIST_LINKEDLIST_H
