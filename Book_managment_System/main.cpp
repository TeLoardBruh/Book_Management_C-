//
//  main.cpp
//  Book_managment_System
//
//  Created by sovannmonyreak hing on 12/31/19.
//  Copyright © 2019 sovannmonyreak hing. All rights reserved.
//

#include <iostream>
using namespace std;


struct book{
    char book_num[30];
    char book_name[50];
    char auther_name[20];
    int num_cp;
    
    void get_book_info(){
        cout << "ENTER DETAILS ABOUT BOOK U WANT TO PURCHASE \n";
        cout << "Please enter the number of the book : ";
        cin >> book_num;
        cout << "Please enter the book name : " ;
        cin.ignore();
        cin.getline(book_name, 50);
        
        cout << "Please enter auther name : ";
        cin.ignore();
        cin >> auther_name;
        fflush(stdin);
        cout << "Enter the copies number : ";
        cin >> num_cp;
    }
    void show_book(){
        cout << "Book number : " << book_num << "\n";
        cout << "Book name : " << book_name << "\n";
        cout << "Author name : " << auther_name << "\n";
        cout << "Copies : " << num_cp << "\n";
    }
    void modify_book(){
        
    }
    
};

// function for print out the menu
void greeting(){
    cout << "Press 1 . Buy book \n";
    cout << "Press 2 . Show all books \n";
    cout << "Press 3 . Check availability \n";
    cout << "Press 4 . Modify books \n";
    cout << "Press 5 . Detele \n";
    cout << "Press 6 . Exit \n";
}
//==============================================================================


//int main
int main(int argc, const char * argv[]) {
    // print out manu
    greeting();
//==============================================================================

    // logic for user input
    int userInput = 0;
    cin >> userInput;
    switch (userInput) {
        case 1:
            cout << "buy book \n";
            break;
        case 2:
            cout<< "show all book \n";
            break;
        case 3:
            cout <<" check \n";
            break;
        case 4:
            cout << " modify \n";
            break;
        case 5:
            cout << " Detele \n";
            break;
        case 6:
            cout << "exit \n";
        default:
            break;
    }
    //==============================================================================
    return 0;
}
