#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter your score ";
    cin >> n;

    //  ternary operator
    string result = (n >= 90) ? "A-" :
                   (n >= 80) ? "B" :
                   (n >= 70) ? "C" :
                   (n >= 60) ? "D" : "F";

   
    cout << result << endl;

   
  //switch-case
    
    switch (n) {
        case 'A':
            cout << 'Excellent Work';
            break;
        case 'B':
            cout << 'Well done!';
            break;
        case 'C':
            cout << 'Good job!';
            break;
        case 'D':
            cout << 'You passed, but you could do better';
            break;
        case 'F':
            cout << 'Sorry, you failed';
            break;
    }

    //eligibility check

    if ( n= 'F') {
        cout << 'Congratulations! You are eligible for the next level';
    } else {
        cout << " Please try again next time.";
    }

    cout << endl;
    return 0;
}
