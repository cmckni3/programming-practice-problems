#include <iostream>

using namespace std;

unsigned int fib[40000000] = { 0 };

int fibonacci(int n)
{
  if (n == 1 || n == 2)
    return 1;

  if (fib[n] != 0)
    return fib[n];

  fib[n] = fibonacci(n-1) + fibonacci(n-2);
  return fib[n];
}

int main()
{
    fibonacci(100000);
    cout << fib[100000] << endl;
    cout << fib[99999] << endl;
    return 0;
}
