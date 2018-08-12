//
// Created by ricardogao on 2018/8/11.
//
#include "LinkedList.h"

void LinkedList::insertNode( int position, int val){
    ListNode *p = head;
    if(p ==nullptr)
        if(position != 0)
            cout<<"The LinkedList is empty."<<endl;
        else {
            p->val = val;
            p->next = nullptr;
            head = tail = p;
        }
    else{
        int pos = 0;
        while(p!= nullptr && pos!= position){
            p = p->next;
            pos++;
        }
        if(p == nullptr)
            cout <<"The position does not exist. Insert failed."<<endl;
        else{
            ListNode *n = new ListNode(val, p->next);
            p->next = n;
            if(p==tail){
                tail = p->next;
            }
        }
    }
}

void LinkedList::removeNode(int position) {
    ListNode *p = head;
    if(p == nullptr){
        cout <<"The LinkedList is empty. Delete failed."<<endl;
    }else{
        int pos = 0;
        while(p!= nullptr && pos!= position-1){
            p = p->next;
            pos++;
        }
        if(p == nullptr)
            cout <<"Position does not exist."<<endl;
        else {
            if(p->next==tail)
                tail = p;
            p->next = p->next->next;
        }
    }
}
void removeNodeFE(int num){      /* 快慢指针 */
    ListNode* fast = head;
    ListNode* slow = head;
    if(fast == nullptr){
        cout <<"The LinkedList is empty. Delete failed."<<endl;
    }else{
        /*快指针先走num步*/
        while(num >0&&fast != nullptr){
            fast = fast->next;
            position--;
        }
        if(fast == nullptr)
            cout<<"Position does not exist."<<endl;
        else if(fast->next == nullptr){
            head = head->next;
        }
        else{
            while(fast->next != nullptr){
                slow = slow->next;
                fast = fast->next;
            }
            slow->next = slow->next->next;
            if(slow->next == nullptr)
                tail = slow;
        }
    }
}
void LinkedList::modifyNode(int position, int newVal) {
    ListNode *p = head;
    if(p == nullptr){
        cout <<"The LinkedList is empty. Delete failed."<<endl;
    } else{
        int pos =0;
        while(p!= nullptr && pos!=position){
            p = p->next;
            pos++;
        }
        if(p == nullptr)
            cout <<"Position does not exist."<<endl;
        else {
            p->val = newVal;
        }
    }
}
