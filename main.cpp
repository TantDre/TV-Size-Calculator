#include <iostream>
#include <cmath>
using namespace std;

// Main
int main(void) 
{  
  // Variables
  double a, b, c_mm, c_inch;
  char redo;

  do 
  {
    // Input
    cout << "\nSize of screen in inches: ";
    cin >> c_inch;

    // Convert units
    c_mm = 25.4 * c_inch;

    // Calculate
    b = sqrt(c^2/(1+(9/16)^2))
    a = sqrt(c^2 - b^2);

    cout << "\nWidth: " << b << " mm" << endl
         << "Height: " << a << "mm" << endl;

    // Read if the user wants to redo
		cout << "Calculate again? (y/n): ";
		cin >> redo;

	}while (redo == 'Y' || redo == 'y');

  return 0;
}
