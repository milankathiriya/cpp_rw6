/*
    datatype &alias_name = variable_name;
*/

#include<iostream>
using namespace std;

int main() {

    int imran = 5;
    int &ali = imran;

    cout << imran << endl;
    cout << ali << endl;

    ali = 10;

    cout << imran << endl;
    cout << ali << endl;

    return 0;
}