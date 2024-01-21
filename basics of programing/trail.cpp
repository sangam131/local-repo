#include<iostream>
using namespace std;
int main () {
    int sum=0;
    for (int i=1; i<100; i=i+2) {
        cout << i << endl;
        sum+=i;
        cout << sum << endl;
    }
}