#include <iostream>
using namespace std;


class Node {
    public:
        int Value;
        Node* Next;
};

void printList(Node* h){
    Node* next = h;
    while(next != NULL)
    {
        cout << next->Value << endl;
        next = next->Next;
    }

}


int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    second->Value = 2;
    third->Value = 3;
    head->Next = second;
    second->Next = third;
    third->Next = NULL;
    printList(head);
    return 0;
}