//
// Created by ricardogao on 2018/8/11.
//

#ifndef LINKEDLIST_LISTNODE_H
#define LINKEDLIST_LISTNODE_H
class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *p) : val(x), next(p) {}
};
#endif //LINKEDLIST_LISTNODE_H
