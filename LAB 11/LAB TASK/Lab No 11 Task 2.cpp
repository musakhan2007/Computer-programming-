/*
Name: Muhammad MUSA
Registration No: BF25NWELE0754
Department: Electrical
Section: Power

Program: String Concatenation
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "Muhammad";      // First name string declare aur initialize ki gayi hai

    string lastName = "Huzaifa";      // Last name string declare aur initialize ki gayi hai

    string fullName;      // Full name store karne ke liye string variable

    fullName = firstName + " " + lastName;      // Dono strings concatenate ho rahi hain

    cout << "Full Name: " << fullName << endl;      // Full name display ho raha hai

    return 0;      // Program successful end
}
