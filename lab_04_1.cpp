#include <iostream>
#include <cmath>	
#include <iomanip> //для setprecision
using namespace std;

int main()
{
	int N;
	double S;

	double C;

	cout << "N (> 0) = "; cin >> N;

	S = 0;
	int k = 1;
	while ( k <= N)
	{
		C = pow((2.0 * k + 1.0), 2);
		S += 1.0 / C;
		++k;

	}
	cout << S << endl;

	k = 1;
	S = 0;
	do {
		C = pow((2.0 * k + 1.0), 2);
		S += 1.0 / C;
		++k;
	} while (k <= N);
	cout << S << endl;

	S = 0;
	for (int k = 1; k <= N; k++) {

		C = pow((2.0 * k + 1.0), 2);
		S += 1.0 / C;

	}
	cout << S << endl;

	S = 0;
	for (int k = N; k >=1; k--) {

		C = pow((2.0 * k + 1.0), 2);
		S += 1.0 / C;

	}
	cout << S << endl;

	cout << fixed << setprecision(8);
	cin.get();
}