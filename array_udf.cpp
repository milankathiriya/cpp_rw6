#include<iostream>
using namespace std;

void my_function(int n[]) {

    int sum = 0; 

    for(int i=0; i<=4; i++) {
        sum = sum + n[i]; 
    }

    cout << sum << endl;

}

int main() {

    int a[5] = {23, 67, 45, 90, 11};

    my_function(a);

}