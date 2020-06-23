#include <iostream>

using namespace std;


int D, A, E, n, j, ans;

int* Bit = nullptr;

void D_to_B() {
	for (int i = 15; i >= 0; i--) {
		Bit[i] = E % 2;
		E = E >> 1;
	}
}

int cal(int A, int Bits[], int n) {
	j = 0;
	D = 1;
	for (int i = 0; i <= 15; i++) {
		j = j << 1;
		D = (D * D) % n;
		if (Bits[i] == 1) {
			j++;
			D = (D * A) % n;
		}
	}
	return D;
}

int main()
{
	do {
		printf("M^e (mod n)的算術法，藉由算出答案 C：\n");
		cout << "M ==>" << endl;
		cin >> A;
		cout << "public key e ==> " << endl;
		cin >> E;
		cout << "n ==> " << endl;
		cin >> n;

		Bit = new int[16];
		for (int i = 0; i < 16; i++)
			Bit[i] = 0;

		D_to_B();

		D = cal(A, Bit, n);
		cout << "答案：C ==> " << D << endl;

		delete[] Bit;

		cout << " 繼續請按 0, 停止請按 1 =====> ";
		cin >> ans;

	} while (ans== 0);

	system("pause");

}