//
// Created by ricardogao on 2018/8/11.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include "ListNode.h"

class LinkedList{
public:
    LinkedList:head(nullptr),tail(nullptr){
    }
    ~List(){
        delete head;
        delete tail;
    };
    void insertNode(int position, int val);
    void deleteNode(int position);
    void modifyNode(int position, int newVal);
    int getPosition(int val);
    int getValue(int position);
    LinkedList inverseList();
    void print();
private:
    ListNode *head;
    ListNode *tail;
    int position;

};
#endif //LINKEDLIST_LINKEDLIST_H
