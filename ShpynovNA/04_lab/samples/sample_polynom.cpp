#include "tpolynomial.h"

int main() {
	try {
		cout << "enter 1st polynomial: \n";
		string s1;
		//cin >> s1;
		s1 = "5x^2*y^3*z^4+11*x^3+7";
		TPolynomial P1 = TPolynomial(s1);
		cout << "got " << P1 << "\n";

		cout << "enter 2nd polynomial: \n";
		//cin >> s1;
		s1 = "3x^2*y^3*z^4";
		TPolynomial P2 = TPolynomial(s1);
		TPolynomial P3 = P2 * P1;
		cout << "got " << P2 << "\n\n";
		cout << "their sum: " << P1+P2 << "\n";
		cout << "their difference: " << P1 - P2 << "\n";
		cout << "their multiplication: " << P3 << "\n";
		cout << "1st DerivariveX:" << P1.DerivativeX() << "\n";
	}
	catch (...) {
		cout << "got error";
		return 1;
	}
	return 0;
}