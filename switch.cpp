#include <iostream>
using namespace std;
int main() {
    char letter_grade;
    cout << "Enter your letter grade you expect on exam "<< endl;
    cin >> letter_grade;
    switch (letter_grade) {
        case 'a':
        case 'A':
            cout << "You need 90 or above to get an A" << endl;
            break;
            case 'b':
            case 'B':
            cout << "You need 80 - 89 to get a B" << endl;
            break;
            case 'c':
            case 'C':
            cout << "You need 70 - 79 to get a C" << endl;
            break;
            case 'd':
            case 'D':
            cout << "You need 60 - 69 to get a D" << endl;
            break;
    }
    return 0;
}