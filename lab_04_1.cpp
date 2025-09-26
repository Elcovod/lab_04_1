#include <iostream>
#include <cmath>	
#include <iomanip> //для setprecision
using namespace std;

int main()
{
	int N;
	double S; //сума

	do {
		cout << "N ( > 0 ) = "; cin >> N;
	} while (N <= 0);


	{
		S = 0;
		int k = 1;
		while (k <= N)
		{
			S += 1.0 / pow((2.0 * k + 1.0), 2);
			++k;

		}
		cout << S << endl;
	}

	{
		S = 0;
		int k = 1;
		do {
			S += 1.0 / pow((2.0 * k + 1.0), 2);
			++k;
		} while (k <= N);
		cout << S << endl;
	}

	S = 0;
	for (int k = 1; k <= N; k++) {

		S += 1.0 / pow((2.0 * k + 1.0), 2);
	}
	cout << S << endl;

	S = 0;
	for (int k = N; k >=1; k--) {

		S += 1.0 / pow((2.0 * k + 1.0), 2);

	}
	cout << S << endl;

	cout << fixed << setprecision(8);
	cin.get();
}