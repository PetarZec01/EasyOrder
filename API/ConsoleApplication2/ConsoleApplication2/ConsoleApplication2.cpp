#include <iostream>

using namespace std;

bool isFirstDigitEven(int x) {
	while (x >= 10) { /// 43 43/10 = 4 -> izac iz petlje i vidjeti 4 % 2 == 0 || 545 545/10 = 54 54>10 jeste -> 54/10= 5 5>10 nije -> return x%2==0 -> 5%2==0 nije
		x /= 10;
	}
	return x % 2 == 0;
}

bool isPrime(int x) {
	for (int i = 2; i <= x/2; ++i) {
		if (x % i == 0) return false;
	}
	return true;
}

bool isSortedDesc(int x) {
	int temp = 0;
	if (x < 10) return true;
	// 543%10=3 543/10=54 54%10=4 3<4 54%10 = 4 54/10=5 4<5 true 
	do {
		temp = x % 10;
		x /= 10;
		if (temp > x % 10) return false;
	} while (x > 10);
	return true;
}

void odabirDva() {
	int n = 0;

	while (n < 2) {
		cout << "Unesite n: ";
		cin >> n;

		for (int i = 2; i <= n; i++) {
			if (isPrime(i) && isSortedDesc(i))
				cout << i << endl;
		}
	}


}

void odabirJedan() {
	int m, n;

	while (true) {
		cout << "Unesite m i n: " << endl;
		cin >> m >> n;
		if (m > 0 && n >= m) break;
	}

	for (int i = m; i <= n; i++) {

		if (isFirstDigitEven(i))
			cout << i << endl;
	}

}

int main() {
	int odabir = 0;

	while (odabir < 1 || odabir > 3) {
		cout << "Izaberite opciju 1, 2 ili 3: ";
		cin >> odabir;
		if (odabir == 1) odabirJedan();
		else if (odabir == 2) odabirDva();
		else if (odabir == 3) break;
	}

}