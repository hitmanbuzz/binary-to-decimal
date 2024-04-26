#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    int number;
    cout << "Enter binary number: ";
    cin >> number;
    int _counter = 0;
    string numberString = to_string(number);
    for (char digit : numberString) {
        int intDigit = digit - '0';
        if (intDigit != 0 && intDigit != 1) {
            cout << "Not binary: " << number << endl;
            return 0;
        }
        _counter++;
    }
    cout << '\n';

    int counter = _counter-1;
    int indexCounter = 0;
    int arr[_counter-1] = {};
    int result = 0;

    for (char e : numberString) {
        int powerDigit = pow(2, counter);
        int digit = e - '0';
        result += digit * powerDigit;
        counter -= 1;
    }
    cout << "Binary: " << number << endl;
    cout << "Binary to Decimal Conversion: " << result << endl;
    cout << '\n';
    cout << "Press any key to exit the program..." << endl;
    getch();
    return 0;
}
