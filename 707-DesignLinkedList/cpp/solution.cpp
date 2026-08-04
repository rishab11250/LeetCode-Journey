#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};
class MyLinkedList {
    public:
        Node* head;
        MyLinkedList() {
            head = nullptr;
        }
    
    int get(int index) {
        Node* curr = head;
        int count = 0;
        while(curr!=nullptr){
            if(count == index){
                return curr->val;
            }
            curr = curr->next;
            count++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }
    
    void addAtTail(int val) {
        if(head == nullptr){
            head = new Node(val);
            return;
        }
        Node* curr = head;
        while(curr->next != nullptr){
            curr = curr->next;
        }
        Node* NewNode = new Node(val);
        curr->next = NewNode;
    }
    
    void addAtIndex(int index, int val) {
        Node* curr = head;
        if(index == 0){
            addAtHead(val);
            return;
        }
        int count = 0;
        while (curr != nullptr && count < index - 1) { 
            curr = curr->next; 
            count++; 
        }
        if(curr==nullptr) return;
        Node* temp = new Node(val); 
        temp->next = curr->next; 
        curr->next = temp; 
    }
    
    void deleteAtIndex(int index) {
        if (head == nullptr || index < 0) return;
        if (index == 0) { 
            Node* temp = head; 
            head = head->next; 
            delete temp; 
            return; 
        }
        Node* curr = head; 
        int count = 0;
        while (curr != nullptr && count < index - 1) { 
            curr = curr->next; 
            count++; 
        }
        if (curr == nullptr || curr->next == nullptr) return;
        Node* temp = curr->next; 
        curr->next = curr->next->next; 
        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main(){
    
    return 0;
}