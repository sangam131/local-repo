#include<iostream>
using namespace std;
int main () {
    // outer loop for the row
    for (int row=0; row<3; row=row+1) {
        // Inner loop for the col
        for ( int col = 0; col<5; col=col+1){
            cout << " * " ;
        }
        cout << endl;
    }
}