#include<iostream>
using namespace std;
int main (){
    int age=18;
    if(age<18){
        cout << "Person will not vote " << endl;
    }
    else {
        cout << "Person will eligible to vote \n";
    }

    // using nested if-else condition
    cout << "USING THE NESTED OF ELSE EXAMPLE \n";
    cout << "\n";
    int marks;
    cout << "ENTER THE MARKS \n";
    cin >> marks;
    
    if (marks>=90) {
        cout << "A \n";
    }
    else {
        if (marks>=80){
            cout << "B \n";
        }
        else {
            if (marks>=60){
                cout <<  "C \n";
            }
            else {
                cout << "F \n";
            }
        }
    }
    //USING ELSE-IF CONDINTION FOR THE ABOVE CONDITION
    cout << "USING THE ELSE IF EXAMPLE \n";
    cout << "\n";
    if(marks>=90){
        cout <<"A \n";
    } else if (marks >=80) {
        cout << "B \n";
    } else if ( marks >= 60) {
        cout << "C \n";
    }
    else
    cout << "F \n";

    // practice question
    int bronum;
    cin >> bronum;
    if (bronum ==0){
    cout << "bat ban gayi \n";
}
else {
    cout << "bat bigad gayi \n";
}

}