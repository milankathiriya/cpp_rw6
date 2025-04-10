#include<iostream>
using namespace std;

int main() {

    int size_a, size_b, size_c;

    cout << "Enter array a's size: ";
    cin >> size_a;
   
    cout << "Enter array b's size: ";
    cin >> size_b;

    size_c = size_a + size_b;

    int a[size_a], b[size_b], c[size_c];
    int i, j;

    cout << "Enter Array a's elements: " << endl;
    for(i=0; i<size_a; i++) 
    {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }
   
    cout << "Enter Array b's elements: " << endl;
    for(i=0; i<size_b; i++) 
    {
        cout << "Enter b[" << i << "]: ";
        cin >> b[i];
    }

    cout << "Array a is: " << endl;
    for(i=0; i<size_a; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << "Array b is: " << endl;
    for(i=0; i<size_b; i++)
    {
        cout << b[i] << " ";
    }

    for(i=0; i<size_a; i++)
    {
        c[i] = a[i];
    }

    for(i=0, j=size_a; i<size_b, j<size_c; i++, j++)
    {
        c[j] = b[i];
    }

    cout << "Array c: " << endl;
    for(i=0; i<size_c; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}