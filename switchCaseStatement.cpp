#include <iostream>
using namespace std;

int main () {
    int grade = 62;
    int letterGrade = grade / 10;
    int dayOfWeek = 3;

    switch (dayOfWeek) {
        case 1: cout << "Sunday" << endl; // only prints if dayOfWeek == 1
                break;
        case 2: cout << "Monday" << endl; // only prints if dayOfWeek == 2
                break;
        case 3: cout << "Tuesday" << endl; // only prints if dayOfWeek == 3
                break;
        case 4: cout << "Wednesday" << endl; // only prints if dayOfWeek == 4
                break;
        case 5: cout << "Thursday" << endl; // only prints if dayOfWeek == 5
                break;
        case 6: cout << "Friday" << endl; // only prints if dayOfWeek == 6
                break;
        case 7: cout << "Saturday" << endl; // only prints if dayOfWeek == 7
                break;
        default: cout << "Invalid" << endl; // only prints if none of the above are true
    }

    switch (letterGrade) {
        case 10: case 9:                    // For grades 90 and above (including 100)
            cout << "A" << endl;            // Print 'A'
            break;                          // Exit the switch statement

        case 8:                             // For grades in the 80s
            cout << "B" << endl;            // Print 'B'
            break;                          // Exit the switch statement

        case 7:                             // For grades in the 70s
            cout << "C" << endl;            // Print 'C'
            break;                          // Exit the switch statement

        case 6:                             // For grades in the 60s
            cout << "D" << endl;            // Print 'D'
            break;                          // Exit the switch statement

        default:                            // For all other cases (grades below 60)
            cout << "F" << endl;            // Print 'F'
    }

    return 0;
}
