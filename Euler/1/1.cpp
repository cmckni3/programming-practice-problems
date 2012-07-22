#include <iostream>
#include <math.h>

using namespace std;

//Function to check if number is multiple of 3 or 5
bool isMultiple(int num)
{
    bool ismultiple = true;
    if (((num%3) != 0) && ((num%5) != 0))
    {
        ismultiple = false;
    }
    return ismultiple;
}

int main(int argc, char *argv[])
{
    cout << "Add together the natural numbers below 1000 that are multiples ";
    cout << "of 3 or 5.\n" << endl;
    int sum = 0;
    for (int index = 1; index < 1000; index++)
    {
        if (isMultiple(index))
        {
            sum = sum + index;
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
