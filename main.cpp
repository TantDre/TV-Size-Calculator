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
    cout << endl << "Size of screen in inches: ";
    cin >> c_inch;

    // Convert units
    c_mm = 25.4 * c_inch;

    // Calculate
    b = sqrt((c_mm * c_mm)/(1 + (9.0 / 16.0) * (9.0 / 16.0)));
    a = b * 9.0 / 16.0;

    cout << "Width: " << round(b) << " mm" << endl
         << "Height: " << round(a) << " mm" << endl;

    // Read if the user wants to redo
		cout << endl << "Calculate again? (y/n): ";
		cin >> redo;

	}while (redo == 'Y' || redo == 'y');

  return 0;
}
