#include<iostream>
using namespace std;

int main()
{
    int choice, size, i, pos, elem;

    cout << "Enter array size: ";
    cin >> size;  // 5

    int arr[size];  // int arr[5];

    cout << "Enter array elements: " << endl;
    for(i=0; i<size; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> arr[i];
    }

    do {
        cout << "Press 1 for Insert Element" << endl;
        cout << "Press 2 for Update Element" << endl;
        cout << "Press 3 for Delete Element" << endl;
        cout << "Press 4 for Fetch all Elements" << endl;
        cout << "Press 0 for Exit" << endl;

        cout << "Enter your chocie: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter position: ";
                cin >> pos;
                
                cout << "Enter new element: ";
                cin >> elem;

                for(i=size-1; i >= pos; i--)
                {
                    arr[i+1] = arr[i];
                }

                arr[pos] = elem;
                size++;

                cout << "Insert operation successfully..." << endl;
                break;
            case 2:
                cout << "Enter position: ";
                cin >> pos;
                
                cout << "Enter new element: ";
                cin >> elem;

                arr[pos] = elem;

                cout << "Update operation successfully..." << endl;
                break;
            case 3:
                cout << "Enter position: ";
                cin >> pos;

                for(i=pos+1; i <= size-1; i++)
                {
                    arr[i-1] = arr[i];
                }

                size--;

                cout << "Deletion successfully..." << endl;
                break;
            case 4:
                cout << "Array is: ";
                for(i=0; i<size; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 0:
                break;
            default: 
                cout << "Invalid choice..." << endl;
        }
    } while(choice != 0);

    return 0;
}