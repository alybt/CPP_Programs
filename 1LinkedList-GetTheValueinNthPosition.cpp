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

int getNthValue(int value){
    Node *temp = head;
    int length = 0;

    while(temp != nullptr){
        if(length == value){
            return (temp->data);
        }
        length++;
        temp=temp->next;

    }
    cout << "Out of bounds";
    return -1;

}



int main(){

    int choice, num;
    char exit;
    exit = 'N';
    while (exit == 'N'|| exit == 'n'){

        cout << "Singly Linked List" << endl;
        cout << "1. Add a number" << endl;
        cout << "2. Position" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch(choice){
            case 1:{
                cout << "What number do you want to added from the list? ";
                cin >> num;
                insertNode(num);
            break;}
            case 2:{
                cout << "Position? ";
                cin >> num;
                cout << "The value of the given position is " << getNthValue(num-1);
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