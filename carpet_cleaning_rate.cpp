 #include <iostream>
 using namespace std;
 int main() {
     cout << "hello, welcome to Frank's Carpet Cleaning Service" << endl;
     int number_of_rooms;
        cout << "\nHow many rooms would you like cleaned? ";
        cin >> number_of_rooms; 
        cout << " \nestimate for carpet cleaning service" << endl << endl;
        cout << "Number of rooms: " << number_of_rooms << endl;
        cout << "Price per room: $25" << endl;
        cout << "Cost: $" << number_of_rooms * 25 << endl;
        cout << "Tax: $" << number_of_rooms * 25 * 0.06 << endl;
        cout << "====================================" << endl;
        cout << "Total estimate: $" << number_of_rooms * 25 * 1.06 << endl;
        cout << "\nThis estimate is valid for 30 days" << endl;
        cout << "Thank you for choosing Frank's Carpet Cleaning Service" << endl;
        return 0;
 }