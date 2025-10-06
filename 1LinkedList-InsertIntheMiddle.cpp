#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;

};

int sizes = 0;
struct Node *head = NULL;

void insertNode (int n){
    struct Node *new_node = new Node();
    new_node->data = n;
    new_node->next = head;
    head=new_node;
    sizes++;
}

void insertAtTheMiddle(int value){
    Node* newData = new Node ();
    newData->data = value;

    if(head == nullptr) {
        newData->data = value;
        newData->next = head;
        head = newData;
        sizes++;
        return;
    }

    Node* temp = head;

    int mid = (sizes % 2 == 0) ? (sizes / 2) : (sizes + 1) / 2;
    while (--mid){
        temp = temp->next;
    }
    newData->next =temp->next;
    temp->next = newData;
    sizes++;

}



int main(){

    int choice, num;
    char exit;
    exit = 'N';
    while (exit == 'N'|| exit == 'n'){

        cout << "Singly Linked List" << endl;
        cout << "1. Add a number" << endl;
        cout << "2. Middle" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch(choice){
            case 1:{
                cout << "What number do you want to added from the list? ";
                cin >> num;
                insertNode(num);
            break;}
            case 2:
                cout << "What number do you want to added from the list? ";
                cin >> num;
                insertAtTheMiddle(num);
            break;
            case 3:
                cout << "Do you want to exit the Program? [Y/N]: ";
                cin >> exit;
            break;
            default:
            break;
        }
    }



    return 0;
}