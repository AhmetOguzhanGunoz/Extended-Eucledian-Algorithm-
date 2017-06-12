#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 

using namespace std;

int main(void)
{
	int inputA, inputB, a0, b0, q, r, temp;

	int  t0 = 0,
		t = 1,
		s0 = 1,
		s = 0;

	cout << "Enter 1st number to find index:";

	cin >> inputA;

	cout << "Enter 2nd number to find index:";

	cin >> inputB;

	cout << "\n";

	a0 = inputA;

	b0 = inputB;

	q = inputA / inputB;

	r = a0 - q * b0;


	do
	{

		temp = t0 - q*t;
		t0 = t;
		t = temp;
		temp = s0 - q*s;
		s0 = s;
		s = temp;
		a0 = b0;
		b0 = r;
		q = a0 / b0;
		r = a0 - q*b0;
	} while (r > 0);

	cout << b0 << " = gcd(" << inputA << " , " << inputB << ") and " << s << " . " << inputA << " + " << t << " . " << inputB << " = " << b0 << "\n\n";

	//r = 0 çıktığı için yazdırmada bir önceki r yi yani b0 ı yazdırıyoruz.
	
	system("pause");



	return 0;
}