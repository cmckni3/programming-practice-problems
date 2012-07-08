/*
* Problem: Quick Change
* File:   main.cpp
* Author: Chris McKnight
*
* Created on October 27, 2010, 5:46 PM
*/

#include <iostream>

#define DEBUG if (false)

using namespace std;

void fast(int c, int &q, int &d, int &ni, int &p)
{
}

int main(int argc, char** argv)
{
    int n = 0, cents = 0, count = 0, r = 0;
    cin >> n;
    DEBUG cout << "n = " << n << endl;
    while (count < n)
    {
        cin >> cents;
        DEBUG cout << "cents = " << cents << endl;
        int q, d, ni, p;
		fast(cents, q, d, ni, p);
        r = cents % 25;
        // num quarters
        q = (int)(cents / 25);
        DEBUG cout << "quarters = " << q << endl;
        // num dimes
        d = (int)(r / 10);
        DEBUG cout << "dimes = " << d << endl;
        r = r % 10;
        // num nickels
        ni = (int)(r / 5);
        DEBUG cout << "nickels = " << ni << endl;
        p = r % 5;
        // num pennies
        DEBUG cout << "pennies = " << p << endl;
		
        DEBUG cout << "q = " << q << endl;
		
		
        count++;
        cout << count << " " << q << " QUARTER(S), ";
        cout << d << " DIME(S), " << ni << " NICKEL(S), ";
        cout << p << " PENNY(S)" << endl;
    }
    return 0;
}

