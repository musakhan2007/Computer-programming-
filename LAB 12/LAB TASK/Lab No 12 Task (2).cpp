/*
----------------------------------------------------
Name: Muhammad MUSA
Registration No: BF25NWELE0754
Department: Electrical Engineering
Section: Power
PROGRAM: Pointer Arithmetic in Array
----------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};     // array banaya gaya hai values ke sath

    int *ptr = numbers;                       // pointer ko array ke first element par point kiya gaya hai

    cout << "Array elements using pointer arithmetic:\n";   // heading display ho rahi hai

    for (int i = 0; i < 5; i++)              // loop array ke elements ke liye
    {
        cout << *(ptr + i) << endl;          // pointer arithmetic se values access ho rahi hain
    }

    return 0;                                // program end
}
