#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char * const argv[])
{
  int op;
  cout << "1. Run program" << endl << "2. Exit" << endl;
  cout << "Enter Selection: ";
  cin >> op;
  while (op != 2)
  {
    switch(op)
    {
      case 1:
        // Run code!
        break;
      case 2:
        break;
      default:
        cout << "1. Run program" << endl << "2. Exit" << endl;
        cout << "Invalid selection. Please enter new selection: ";
        cin >> op;
        break;
    }
    cout << "1. Run program" << endl << "2. Exit" << endl;
    cout << "Enter Selection: ";
    cin >> op;
  };
  return 0;
}
