#include <iostream>
#include "temperature.h"
using namespace std;

double celsius_to_fah(double cel) {
	double fah = 9.0 / 5 * cel + 32;
	return fah;
}
double fahrenheit_to_cels(double fah) {
	double cel = 5.0 / 9 * (fah - 32);
	return cel;
}
int main() {
	double cel = 40.0, fah = 120.0;
	for (int i = 0; i < 11; i++) {
		cout << "Celsius" << '\t' << "Fahrenheit" << '\t' << "|" << '\t' << "Fahrenheit" << '\t' << "Celsius" << endl;
		cout << cel - i * 1.0 << '\t' << celsius_to_fah(cel - i * 1.0) << '\t' <<'\t' << "|" << '\t' << '\t' << fah - i * 10 << '\t' << fahrenheit_to_cels(fah - i * 10) << endl;
	}
	return 0;
}
