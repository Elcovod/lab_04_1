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
	
	for (int k = 1; k <= N; k++) { //цикл

		C = pow((2.0 * k + 1.0), 2); //знаменник
		S += 1.0 / C;

	}

	cout << fixed << setprecision(8);
	cout << "Sum for N = " << N << " equals " << S << endl;
	cin.get();
}