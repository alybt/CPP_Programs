#include <iostream>

using namespace std;

int main (){
    int sizes;
    char choice;

    do {
        cout << "How many number do you want (at least 4): ";
        cin >> sizes;

        if (sizes < 4){
            cout << "Please enter a number at least 4" << endl;
        } else {
            int number[sizes];
            cout << "Input numbers: " << endl;
            for (int i = 0; i < sizes; i++){
                int num;
                cout << "Numbers [" << i+1 << "]: ";
                cin >> num;
                number[i] = num; 
            } 

            cout << "Printing.." << endl;
            for (int i = 0; i < sizes; i++){
                cout << number[i] << " ";
            }
            cout << endl;
        }

            cout << "Do you want to continue? [Y/N]: ";
            cin >> choice;
        


    } while (choice == 'Y' || choice == 'y');



    return 0;
}