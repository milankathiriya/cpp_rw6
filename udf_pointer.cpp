#include<iostream>
using namespace std;

// Function define
void addition(int *a, int *b) { 
    cout << "Addition is " << *a + *b << endl;
}


int main() {

    int x = 10;
    int y = 20;

    addition(&x, &y);  // Function call by reference

}