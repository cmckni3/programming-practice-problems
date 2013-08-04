#include <iostream>

using namespace std;

unsigned int fib[40000000] = { 0 };

int fibonacci(int n)
{
  fib[1] = fib[2] = 1;
  
  for (int i = 3; i <= n; i++)
  {
    if (fib[i] == 0)
      fib[i] = fib[i-1] + fib[i-2];
  }
  return fib[n];
}

int main()
{
    fibonacci(100000);
    cout << fib[100000] << endl;
    cout << fib[99999] << endl;
    return 0;
}
