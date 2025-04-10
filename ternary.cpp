#include<iostream>
using namespace std;

int main() {

    int a = 13;
    int b = 5;
    int c = 15;

    (a==b && b==c)
        ? cout << "All are same" << endl
        :
            (a>b) 
                ? (a > c) 
                    ? cout << "a is max" << endl 
                    : cout << "c is max" << endl
                : (b > c) 
                    ? cout << "b is max" << endl 
                    : cout << "c is max" << endl;

    return 0;
}