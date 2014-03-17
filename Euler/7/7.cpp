/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define TRUE  (1 == 1)
#define FALSE (1 != 1)

#define DEBUG if (FALSE)

using namespace std;

int number;
int end;

int isprime(int thenumber)
{
  int isitprime = 1, loop;
  for(loop = 3; (isitprime) && (loop <(sqrt((double)thenumber)+1)); loop+=2)
    isitprime = thenumber%loop;
  return isitprime;
}

int main(int argc, char *argv[])
{
  int numbering = 1;
  int option;
  cout<<"1. Find prime numbers between a certain range"<<endl;
  cout<<"2. Find nth prime number"<<endl;
  cout<<"Select an option from the menu above: ";
  cin>>option;
  switch(option)
  {
    case 1:
    cout<<"Which number do you wish to start the test with? ";
    cin>>number;
    cout<<"Which number do you wish to stop at? ";
    cin>>end;
    cout<<"I'm starting with number "<<number<<endl;
    if (number <= 1)
    {
      number = 2;
    }
    if (number <= 2)
    {
      cout<<numbering<<". 2"<<endl;
      numbering++;
    }
    if(!(number%2))
    {
      number++;
    }
    if (number == 1)
    {
      number = 3;
    }
    do
    {
      if(isprime(number))
      {
        cout<<numbering<<". ";
        cout<<number<<endl;
        numbering++;
      }
      number+=2;
    } while(number < end);
    break;
    case 2:
    number = 1;
    cout<<"Which nth prime number do you wish to find? ";
    cin>>end;
    cout<<"I'm finding prime number #"<<end<<endl;
    if (number <= 1)
    {
      number = 2;
    }
    if (number <= 2)
    {
      numbering++;
    }
    if(!(number%2))
    {
      number++;
    }
    if (number == 1)
    {
      number = 3;
    }
    do
    {
      if(isprime(number))
      {
        numbering++;
      }
      if (numbering - 1 != end)
      {
        number+=2;
      }
    } while(numbering - 1 < end);
    cout<<"The "<<numbering - 1<<" prime number is ";
    cout<<number<<endl;
    break;
  }
  return 0;
}
