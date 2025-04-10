#include<iostream>
using namespace std;

// WAP to display and sum of diagonal elements of 5x5 array

int main()
{
    int row_size, col_size, sum=0;

    cout << "Enter row size: ";
    cin >> row_size;

    cout << "Enter col size: ";
    cin >> col_size;

    int a[row_size][col_size];

    int i, j;

    if(row_size != col_size)
    {
        cout << "Matrix must be a Square matrix" << endl;
    }
    else
    {
        cout << "Enter array a's elements: " << endl;
        for(i=0; i < row_size; i++)
        {
            for(j=0; j < col_size; j++)
            {
                cout << "Enter a[" << i << "][" << j << "]: ";
                cin >> a[i][j];   
            }
        }

        cout << "Array a is: " << endl;
        for(i=0; i < row_size; i++)
        {
            for(j=0; j < col_size; j++)
            {
                cout << a[i][j] << " ";   
            }
            cout << endl;
        }

        cout << "Cross elements are: " << endl;
        for(i=0; i < row_size; i++)
        {
            for(j=0; j < col_size; j++)
            {
                if(i+j == 4 || i==j)
                {
                    cout << a[i][j] << " ";   
                    sum = sum + a[i][j];
                }
                else 
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }

        cout << "Sum is " << sum << endl;

    }

    return 0;
}
