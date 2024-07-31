#include <iostream>
using namespace std;

int main()
{

    bool my_bool = true;
    int score = 60;
    int grade = 68;

    // bool statement if else
    if (my_bool)
    {
        cout << "my_bool is true" << endl;
    }
    else
    {
        cout << "my_bool is false" << endl;
    }

    // else with nested if else statements
    if (score >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else
    {
        if (score >= 80)
        {
            cout << "Grade: B" << endl;
        }
        else
        {
            if (score >= 70)
            {
                cout << "Grade: C" << endl;
            }
            else
            {
                cout << "Grade: D" << endl;
            }
        }
    }

    // multiple else if statement
    if (grade < 60)
    {
        cout << "Apple" << endl;
    }
    else if (grade < 70)
    {
        cout << "Banana" << endl;
    }
    else if (grade < 80)
    {
        cout << "Cherry" << endl;
    }
    else if (grade < 90)
    {
        cout << "Date" << endl;
    }
    else if (grade <= 100)
    {
        cout << "Elderberry" << endl;
    }

    return 0;
}