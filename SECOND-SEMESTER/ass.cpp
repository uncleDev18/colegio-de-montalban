#include <iostream>
using namespace std;

int main() {
    char slt;

    cout << "<---Choice System--->" << endl;
    cout << "[A] - Math Operation" << endl;
    cout << "[B] - Days" << endl;
    cout << "[C] - Passed or Failed!" << endl;

    cout << "Enter your Choose : ";
    cin >> slt;

    switch (slt) {
        case 'a': case 'A':
            float num1, num2;
            char oper;

            cout << "<---Math Operation--->" << endl;
            cout << "Enter First Number : ";
            cin >> num1;

            cout << "Enter Operator to use [+, -, *, /] : ";
            cin >> oper;

            cout << "Enter Second Number : ";
            cin >> num2;

            switch (oper) {
                case '+':
                    cout << num1 << " + " << num2 << " = " << num1 + num2;
                    break;

                case '-':
                    cout << num1 << " - " << num2 << " = " << num1 - num2;
                    break;
                
                case '*':
                    cout << num1 << " * " << num2 << " = " << num1 * num2;
                    break;

                case '/':
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                    break;

                default:
                    cout << "Invalid Operator!";
                    break;
            }
            break;
        
        case 'b': case 'B':
            int numDay;

            cout << "<---Days--->" << endl;
            cout << "Enter the Number of Days [1 - 7]: ";
            cin >> numDay;

            switch (numDay) {
                case 1:
                    cout << "Monday";
                    break;
                
                case 2:
                    cout << "Tuesday";
                    break;

                case 3:
                    cout << "Wednesday";
                    break;

                case 4:
                    cout << "Thursday";
                    break;

                case 5:
                    cout << "Friday";
                    break;

                case 6:
                    cout << "Saturday";
                    break;

                case 7:
                    cout << "Sunday";
                    break;
                
                default:
                    cout << "Invalid or out of range!";
                    break;
            }
            break;

        case 'c': case 'C':
            float grade;

            cout << "<---Passed or Failed!--->" << endl;
            cout << "Enter your Grade : ";
            cin >> grade;


            if (grade >= 74.5 && grade <= 100) {
                cout << "Passed!";
            }
            else if (grade > 0 && grade < 74.5) {
                cout << "Failed!";
            }
            else {
                cout << "Invalid Grade!";
            }
            break;

        default:
            cout << "Invalid!";
            break;
    }
    return 0;
    
}
