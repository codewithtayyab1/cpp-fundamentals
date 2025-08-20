#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Your Marks:";
    cin >> marks;

    if (marks >= 80)
    {
        cout << "Grade: A+";
    }

    else if (marks >= 70)
    {
        cout << "Grade: A";
    }
    else if (marks >= 60)
    {
        cout << "Grade: B";
    }
    else if (marks >= 50)
    {
        cout << "Grade: C";
    }

    else
    {
        cout << "Grade: Fail";
    }
    return 0;
}