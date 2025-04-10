#include<iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Enter value of a: ";  cin >> a;
    cout << "Enter value of b: ";  cin >> b;
    cout << "Enter value of c: ";  cin >> c;

    if(a==b && b==c) 
        cout << "All are same..." << endl;
    else
    {
        if(a == b)
            cout << "a and b are same..." << endl;
        else if(b == c)
            cout << "b and c are same..." << endl;
        else if(a == c)
            cout << "a and c are same..." << endl;
        else 
        {
            if(a > b)
            {
                if(a > c)
                    cout << "a is max" << endl;
                else
                    cout << "c is max" << endl;
            }
            else 
            {
                if(b > c)
                    cout << "b is max" << endl;
                else
                    cout << "c is max" << endl;
            }
        }
    }

    return 0;
}