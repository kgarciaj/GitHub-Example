#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declarations
    string name, car;

    // Output and input
    cout << "Hello, what is your name? ";
    cin >> name;

    cout << "What is your favorite car? ";
    cin >> car;

    cout << endl;
    cout << "So can I call you " << car << " " << name << "?" << endl;

    return 0;
}
