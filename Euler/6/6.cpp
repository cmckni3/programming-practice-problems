#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    cout<<"Let's find the sum of the first 100 natural numbers";
    cout<<" and square it.\n";
    cout<<"Then let's find the sum of the squares of the first 100 natural ";
    cout<<"numbers\n";
    cout<<"Finally let's take the difference of the two.\n";
    int sum = 0;
    int sum2 = 0;
    for (int index = 1; index <= 100; index++)
    {
        sum += index;
    }
    cout<<"Sum: "<<sum<<"\n";
    sum = sum*sum;
    cout<<"Sum Squared: "<<sum<<"\n";
    for (int index = 1; index <= 100; index++)
    {
        sum2 += index*index;
    }
    cout<<"Sum of squares: "<<sum2<<"\n";
    cout<<"Difference: "<<sum - sum2<<"\n";
    return 0;
}
