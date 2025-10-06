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

void countNodes(){
    Node* temp = head;

    int num = 0;
    while(temp!=nullptr){
        num++;
        temp = temp->next;
    }
    num = num;
    cout << "The number of Nodes is " << num << ".";
    cout << endl;

}



int main(){

    int choice, num;
    char exit;
    exit = 'N';
    while (exit == 'N'|| exit == 'n'){

        cout << "Singly Linked List" << endl;
        cout << "1. Add a number" << endl;
        cout << "2. Count nodes" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch(choice){
            case 1:{
                cout << "What number do you want to added from the list? ";
                cin >> num;
                insertNode(num);
            break;}
            case 2:
                countNodes();
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