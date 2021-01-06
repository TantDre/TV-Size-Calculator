#include <iostream>
#include <cmath>
using namespace std;


int main(void) {
  double RH, Ptot, Pv, Rho, mv;
  int T;
  int V = 1;
  char redo;

  do 
  {
    // Input
    cout << "\nTemperatur i hela grader (0-50): ";
    cin >> T;
    cout << "Fuktighet i hela procent (0-100): ";
    cin >> RH;
    cout << "Lufttryck i hela kPa (~101): ";
    cin >> Ptot;
  
    // Fixa enheter och avrunda
    Ptot = Ptot * 1000;
    T = 5 * round(T/5.0);
    RH = 5 * round(RH/5.0)/100;

    // Beräkning
    mv = 0.622 * Rho * V * (RH * Pv)/(Ptot - (RH * Pv));

    cout << "\nDetta motsvarar: " << mv*1000 << " gram vatten per kubikmeter." << endl;

    // Read if the user wants to redo
		cout << "Beräkna igen? (j/n): ";
		cin >> redo;

	}while (redo == 'J' || redo == 'j');

  return 0;
}
