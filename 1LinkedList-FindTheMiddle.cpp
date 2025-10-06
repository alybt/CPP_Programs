#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;

};

struct Node *head = NULL;

void insertNode (int n){
    struct Node *new_node = new Node();
    new_node->data = n;
    new_node->next = head;
    head=new_node;

}

int findTheMiddle(Node *head){
    if (!head){
        cout << "There's no nodes" << endl;
        return 0;
    }
    int c = 0;
    Node *temp = head;
    while (head){
        if (c%2!=0){
            temp = temp->next;
        }
        c++;
        head = head->next;
    }
    return temp->data;

}



int main(){

    int choice, num;
    char exit;
    exit = 'N';
    while (exit == 'N'|| exit == 'n'){

        cout << "Singly Linked List" << endl;
        cout << "1. Add a number" << endl;
        cout << "2. Find the Middle" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch(choice){
            case 1:{
                cout << "What number do you want to added from the list? ";
                cin >> num;
                insertNode(num);
            break;}
            case 2:{
                cout << "The middle is " << findTheMiddle(head);
                cout << endl;
            break;}
            case 3:{
                cout << "Do you want to exit the Program? [Y/N]: ";
                cin >> exit;
            break;}
            default:
            break;
        }
    }



    return 0;
}