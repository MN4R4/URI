#include <bits/stdc++.h>

using namespace std;

int GCDsimp (int num, int den) {
	cout << num << den;
	if (den > 0){
		return GCDsimp (den, num % den);
	}
	return num;
}

int main() {
	int num, den, apostas [100], cont = 0;
	vector<int>apo;
	while (cin >> num >> den) {
		 apo.push_back(__gcd(num,den));
		 if  ( apo.back() > 5)
			cout << "Noel" << endl;
		 else
			cout << "Gnomos" << endl;
	}
	for (int i=apo.size()-1 ; i>=0; i--) {
		cout << apo[i] << " ";
	}
	cout <<endl;
	return 0;
}
