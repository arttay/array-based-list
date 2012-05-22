//***************************************************
//      Program: array based list
//      Programmer: Art Taylor
//      last updated: 5/18/2102
//      function: add or delete members into/out of 
//      an array
//*************************************************





#include <cstdlib>
#include <iostream>
#include "class.h"

using namespace std;

int main(int argc, char *argv[])
{
    char choice;
    int position;
    int value;
    CArList myList(10);
//*************************************
//  char choice: gets what the user inputed 
//  for the case selection belowe
//  int position: used in function del, which is
//  part of the class, it is the position in 
//  which the user wants to delete an item(in the array)
//  int value: is a number entered by the user to add
//  into the array based list
//  CArList myList(10): an object of type CArList
//  allocates an array with the value 10
//******************************************
    
    cout << "ARRAY-BASED LIST ADT" << endl;
    cout << "please select one of the following" << endl;
    cout << "(A)dd, (D)elete, (P)rint, (Q)uit" <<endl;
    cin >> choice;
//*************************
//  ouputs variuos text and then
//  gets choice, which is brought
//  down into the switch statement
//************************
    
    while(toupper(choice) != 'Q')
    {
        switch(toupper(choice))
        {
        case 'A':
            cout << "please enter a value" << endl;
            cin >> value;
            myList.add(value);
            break;
        case 'D':
            cout << "please enter a position" << endl;
            cin >>position;
            myList.del(position);
            break;
        case 'P':
                cout<< myList;
                break;
        case 'Q':
                 system("PAUSE");
                  return EXIT_SUCCESS;
}
//************************************************
//  starts with a while loop, toupper brings the var 
//  choice to an upper case letter if not already
//  then while it is not Q goes through
//  start switch statement, agian brings choice to an 
//  upper case letter if not already.
//  case A ahs the user enter a value (var value)
//  and uses the function add of object myList to 
//  add the value entered by the user to the array based
//  list(then breaks)
//  case D has the user enter a position to be deleted.
//  it uses var position to grab the position and uses
//  the function del of object myList to delete the item from
//  the array based list
//  case P outputs object myList 
//  case Q stops the program
//***************************************************
    cout << "please select one of the following" << endl;
    cout << "(A)dd, (D)elete, (P)rint, (Q)uit" <<endl;
    cin >> choice;
//************************************
//  outputs selections for switch statement 
//  and gets choice
//****************************
        
    }
    
    

    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
