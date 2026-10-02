#include <iostream>
using namespace std;

int add_numbers(int,int);

int main()
{
    int result{0};
    result = add_numbers(10,5);
    cout << "The sum of 10 and 5 is: " << result << endl;
    return 0;
}
int add_numbers(int a, int b)
{
    return a + b;
}