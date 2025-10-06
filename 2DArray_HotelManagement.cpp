#include <iostream>


using namespace std;

void viewRoomHotel(int arr[], int sizes){
    int floor = 4;
    int x = 0;
    cout << "ROOM | 1 | 2 | 3 | 4 | 5 |" << endl;
    for (int i = 0; i < floor; i++){
        cout << "FR " << i+1 << " |";
        for (int j = 0; j < 5; j++ ){
            if (arr[x] == 0){
                cout << " 0 |";
            } else if (arr[x] == 1) {
                cout << " X |";
            } else if (arr[x] == 2)  {
                cout << " C |";
            }
            x++;
        }
        cout << endl;

    }

}

int checkIn(int arr[], int sizes){
    int floor, room;

    while (floor <=0 || floor > 5){
        cout << "What floor do you want? ";
        cin >> floor;

        if (floor <= 0 || floor > 5){
            cout << "Please enter 1 to 5" << endl;
        }
    }

    while (room <=0 || room > 5){
        cout << "What room do you want? ";
        cin >> room;

        if (room <= 0 || room > 5){
            cout << "Please enter 1 to 5" << endl;
        }
    }
    
    int x = 0;
    for (int i=0; i< floor; i++){
        for (int j=0; j < room-1; j++){
            x++;
        }
    }

    if (arr[x] == 2){
        cout << "The room is still on cleaning" << endl;
    } else if (arr[x] == 1){
        cout << "The room is occupied " << endl;
    } else if (arr[x] == 0){
        cout << "Successfully check-in." << endl;
        arr[x] = 1;
    }

    // for (int i=0; i< 4; i++){
    //     for (int j=0; j < 5; j++){
    //         if (arr[i] == 2){
    //             arr[i] = 0;
    //         }
    //     }
    // }
    
    arr[sizes] = arr[sizes];

    return arr[sizes];
}

int checkOut (int arr[], int sizes){
     int floor, room;

    cout << "Check Out " << endl;
    while (floor <=0 || floor > 5){
        cout << "What floor do you want? ";
        cin >> floor;

        if (floor <= 0 || floor > 5){
            cout << "Please enter 1 to 5" << endl;
        }
    }

    while (room <=0 || room > 5){
        cout << "What room do you want? ";
        cin >> room;

        if (room <= 0 || room > 5){
            cout << "Please enter 1 to 5" << endl;
        }
    }
    
    int x = 0;
    for (int i=0; i< floor; i++){
        for (int j=0; j < room-1; j++){
            x++;
        }
    }

    if (arr[x] == 2){
        cout << "The room is still on cleaning" << endl;
    } else if (arr[x] == 1){
        cout << "Successfully check-in." << endl;
        arr[x] = 0;
    } else if (arr[x] == 0){
        cout << "The room is not occupied" << endl;
    }

    for (int i=0; i< 4; i++){
        for (int j=0; j < 5; j++){
            if (arr[i] == 2){
                arr[i] = 0;
            }
        }
    }
    
    arr[sizes] = arr[sizes];

    return arr[sizes];

}


char exitProgram(){
    char exit;
    cout << "Do you want to exit program? [Y/N] ";
    cin >> exit;

    return toupper(exit);
}

int main(){

    int choice, sizes= 20;
    char exit;
    int rooms[sizes] = {0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    exit = 'Y';
    while (exit == 'Y' || exit == 'y'){
        cout << "Hotel Managment" << endl;
        cout << "1. View Floors" << endl;
        cout << "2. Check-in" << endl;
        cout << "3. Check-out" << endl;
        cout << "4. Exit Program" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;

        switch (choice){
        case 1:{
            viewRoomHotel(rooms, sizes);
            cout << endl;
        
        break;}
        case 2:{
            checkIn(rooms,sizes);
            cout << endl;
        break;
        }
        case 3:{
            checkOut(rooms,sizes);
            cout << endl;
        break;
        }
        case 4:{
            exit = exitProgram();
        break;
        }
        default:{
            cout << "Invalid Input" << endl;
            cout << endl;
            break;}
        }
    }
    

    return 0;
}