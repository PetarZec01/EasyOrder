#include <iostream>

using namespace std;

bool isValid(int x, int base) {
	
	// 5 0 1 2 3 4
	// 456 4 5 6
	// 456%10 6 -> provereiti je li u bazi ako jeste nastavi dalje ako nije nemoj
	// 456/10 -> 45, 6 -> 45
	// 45%10 5 -> provereiti je li u bazi ako jeste nastavi dalje ako nije nemoj
	// 45/10 -> 4, 5 -> 4
	// 4%10 4 -> provereiti je li u bazi ako jeste nastavi dalje ako nije nemoj
	// 4/10 -> 0, 4 -> 0
	// dok ne bude 0 raditi
	int temp = x;
	while (temp != 0) {
		if (temp % 10 >= 0 && temp % 10 < base)
			temp = temp / 10;
		else return false;
	}
	return true;
}

int toDecimal(int x, int base) {

	// 101001101010
	//      ...8421 

	// 323232323232 -> 32323232323 -> .. -> 32323 -> -> ... -> 0
    //     256 16 4 1 
	// 2*1 + 3*4 * 2*16 + 3*256 + ...
	// 0

	if (x == 0) return 0;
	int temp_base = 1, temp_num = x, sum=0; 
	int cifra = 0;

	while (temp_num != 0) 
	{
		cifra = temp_num % 10;

		sum += temp_base * cifra;

		temp_num /= 10;
		temp_base = temp_base * base;
	}

	return sum;
}


int main() {

	int baza = 0;
	while (baza < 2 || baza>10)
	{
		cout << "Unesite bazu brojnog sistema: " << endl;
		cin >> baza;
	}
	
	int broj = 0;
	cout << "Unesite neki broj u bazi " << baza << endl;
	cin >> broj;
	cout << toDecimal(broj, baza) << endl;
}

