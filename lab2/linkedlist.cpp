//Problem 5: Linking Lists
//Write a script that uses a Node struct that has an integer value and a pointer to the next node. Your script should create a linked list using these nodes and print out all of the values starting with the head of the node. (Tip: use nullptr when the Node does not have a following node)

#include <iostream>
using namespace std;
#include <vector>
#include <random>

struct Node{
    int value;
    Node* next;
};

class LinkedList{
    public:
        Node* head;
        LinkedList(){
            head = nullptr;
        }
        void append(int val){
            Node* newNode = new Node();
            newNode->value = val;
            newNode->next = nullptr;
            if(head == nullptr){
                head = newNode;
                return;
            }
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
        void printList(){
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};