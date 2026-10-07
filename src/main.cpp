/*
* main.cpp
 * Temperature Conversion Program
 */

 #include <iostream>
using namespace std; 
int main() 
{
        int choice; 
        cout << "1: Celsius to Fahrenheit 2: Fahrenheit to Celsius" << endl;
        cout << "Choice: ";
        cin >> choice;
        int C;
        int F; 

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                if (cin >> C) {
                    F = (C * 9/5) + 32;
                    cout << "Fahrenheit: " << F << endl;
                } else {
                    cout << "Invalid input" << endl;
                    return 0;
             }
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                if (cin >> F) {
                    C = (F - 32) * 5/9;
                    cout << "Celsius: " << C << endl;
                } else {
                    cout << "Invalid input" << endl;
                    return 0;
                }
                break;
            default:
                cout << "Invalid Choice" << endl;
        }

    }