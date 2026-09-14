#include <iostream>
using namespace std;
int main() {
    double dollars{0.0};
    cout << "welcome to the Euro to USD converter" << endl;
    cout << "Enter the amount in euros: ";
    double euros;
    cin >> euros;
    dollars = euros * 1.19;
    cout << euros << " euros is equal to " << dollars << " dollars" << endl;
    return 0;
}