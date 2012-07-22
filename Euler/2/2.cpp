/*
Requirement: Find the sum of the even valued terms of
fibonacci sequence whose value is less than 4 million
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int Fib(int i);

bool IsEven(int number);

int main(int argc, char *argv[])
{
  int even[100000];
  int count = 0;
  int sum = 0;
  int thenumber;
  for (int n = 0; thenumber < 4e6; n++)
  {
      if (IsEven(thenumber))
      {
          even[count] = thenumber;
          count++;
	cout<<"Current: "<<thenumber<<endl;
      }
	thenumber = Fib(n);
  }
  for (int n = 0; n < count; n++)
  {
      sum = sum + even[n];
  }
  cout<<"Sum is: "<<sum<<endl;
  return 0;
}

int Fib(int i)
{
    if (i <= 0)
    {
        return 0;
    }
    else
    if (i == 1)
    {
        return 1;
    }
    else
    {
        return Fib(i - 1) + Fib(i - 2);
    }            
}

bool IsEven(int number)
{
    bool even = false;
    if (number % 2 == 0)
    {
        even = true;
    }
    return even;
}        
