/*
 * Names: Riya Virajpet & Chloe McCarrick
 * Date: 10/2/2026
 * Description: Temperature Conversion Program
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
                cin >> C;
                F = (C * 9/5) + 32;
                cout << "Fahrenheit: " << F << endl;
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> F;
                C = (F - 32) * 5/9;
                cout << "Celsius: " << C << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
        }

    }