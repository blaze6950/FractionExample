#include "Header.h"

int main()
{
	fraction fr1(1, 2);
	cout << fr1.toString() << endl;

	cout << (++fr1).toString() << endl; //fr1.operator++() => operator++(&fr1)
	cout << fr1++.toString() << endl;
	cout << fr1.toString() << endl;

	fraction fr2(2, 5);
	cout << fr2.toString() << endl;
		
	if (fr1 == fr2)
		cout << "fr == fr2" << endl;
	else
		cout << "fr != fr2" << endl;
	
	/*
	fraction fr3 = fr1.multiply(fr2);
	cout << fr3.toString() << endl;

	fr3 = fr1 * fr2;
	cout << fr3.toString() << endl;

	fr3 = fr1 * 2;
	cout << fr3.toString() << endl;

	fr3 = 2 * fr2;
	cout << fr3.toString() << endl;

	fr3 = -fr2; //fr2.operator-()
	cout << fr3.toString() << endl;

	fr3 = fr1 / fr2; //fr1.operator/ (fr2)
	cout << fr3.toString() << endl;

	fr3 = fr1.operator/ (fr2);
	cout << fr3.toString() << endl;

	fr3 = operator* (fr1, fr2);*/
}