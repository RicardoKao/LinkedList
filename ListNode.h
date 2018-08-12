//
// Created by ricardogao on 2018/8/11.
//
#ifndef LINKEDLIST_LISTNODE_H
#define LINKEDLIST_LISTNODE_H
#include <cstdlib>
#include <ctime>
class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(){
        srand((unsigned)time(NULL));
        int a = 0;
        int b =100;
        val =(rand() % (b-a+1))+ a ;
        next = nullptr;
    }
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *p) : val(x), next(p) {}
};
#endif //LINKEDLIST_LISTNODE_H
