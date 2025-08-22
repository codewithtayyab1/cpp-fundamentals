#include <iostream>
using namespace std;

int main()
{
    // Example of for loop:
    for (int i = 0; i <= 5; i++)
    {
        cout << i << endl;
    }
    cout << endl
         << endl;

    // Example of while loop:
    int i = 9;
    while (i > 5)
    {
        cout << i << endl;
        i--;
    }
    cout << endl
         << endl;
    // Example of do-while loop:
    do
    {
        cout << i << endl;
        i++;
    } while (i < 9);
    cout << endl
         << endl;
    return 0;
}