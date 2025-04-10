#include<iostream>
using namespace std;

/*
    Syntax:

    switch(value) {
        case value1: 
            body
            break;
        case value2:
            body
            break;
        case value3:
            body
            break;
        case valueN:
            body
            break;
        default:
            body
            break;   
    }
*/


int main() {

    int n;
    int choice;

    cout << "Press 1 for Sandwich" << endl;
    cout << "Press 2 for Pizza" << endl;
    cout << "Press 3 for Burger" << endl;

    cout << "Enter any number: ";
    cin >> n; 

    switch(n) 
    {
        case 1:
            cout << "You ordered a Sandwich" << endl;
            break;
        case 2: 
            cout << "Press 1 for Fresh Dough Pizza" << endl;
            cout << "Press 2 for Thin Crust Pizza" << endl;    
            cout << "Press 3 for Cheese Burst Pizza" << endl;

            cout << "Enter your choice: ";
            cin >> choice; 

            switch(choice) 
            {
                case 1:
                    cout << "You ordered a Fresh Dough Piiza" << endl;
                    break;
                case 2:
                    cout << "You ordered a Thin Crust Piiza" << endl;
                    break;
                case 3:
                    cout << "You ordered a Cheese Burst Piiza" << endl;
                    break;
                default: 
                    cout << "This type of pizza is not available" << endl;
            }

            break;
        case 3: 
            cout << "You ordered a Burger" << endl;
            break;
        default:
            cout << "Invalid choice..." << endl;
    }    

    return 0;
}