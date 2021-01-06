#include <iostream>
#include <cmath>
using namespace std;

// Main
int main(void) 
{  
  // Variables
  double a, b, c_mm, c_inch;
  char redo, choice;

  do 
  {
    // Option
    cout << endl << "Calculate from size or width? (s/w): ";
    cin >> choice;

    if (choice == 'S' || choice == 's')
    {
      // Input
      cout << "\nSize of screen in inches: ";
      cin >> c_inch;

      // Convert units
      c_mm = 25.4 * c_inch;

      // Calculate
      b = sqrt((c_mm * c_mm)/(1 + (9.0 / 16.0) * (9.0 / 16.0)));
      a = b * 9.0 / 16.0;

    } else if (choice == 'W' || choice == 'w')
    {
      // Input
      cout << "\nWidth of TV-bench in mm: ";
      cin >> b;

      // Calculate
      a = b * 9.0 / 16.0;
      c_mm = sqrt(a*a + b*b);

      // Convert units
      c_inch = c_mm / 25.4;

    }

    // Print
    cout << "\nSize: " << floor(c_inch) << " inches" << endl
         << "Width: " << round(b) << " mm" << endl
         << "Height: " << round(a) << " mm" << endl;

    // Read if the user wants to redo
		cout << endl << "Calculate again? (y/n): ";
		cin >> redo;

	}while (redo == 'Y' || redo == 'y');

  return 0;
}
