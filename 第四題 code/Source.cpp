#include<iostream>
using namespace std;
	int a, n;
	int x;
	int A1, A2 , A3;
    int B1, B2 , B3;
void Extended() {
	
	int Q;
	int T1, T2, T3;
	int X = n % a;
	(A1, A2, A3) = (1, 0, n);
	(B1, B2, B3) = (0, 1, a);
	while ((B3 != 0) && (B3 != 1)) {		
		Q = A3 / B3;
		T1 = A1 - Q * B1, T2 = A2 - Q * B2, T3 = A3 - Q * B3;
		(A1, A2, A3) = (B1, B2, B3);
		(B1, B2, B3) = (T1, T2, T3);
		printf("顯示經過 Extended Euclid's Algorithm 的 Q 變化 ==>");
		cout << Q << endl;
	}
	
	if (B3 = 1) {
		printf("餘數==>");
		cout << X << endl;
		printf("\n！！提醒：最後的 Q 值為 1 時，即為 inverse！！\n\n");		
		
		if (X != 0) {
			printf("最後 Q 值為 1，即判斷為 inverse\n");
		}
		else
		{
			printf("最後 Q 值不為 1，即判斷為 no inverse\n");
		}
			
	}
}
int main()
{
	do {
		printf("輸入 a (mod n) 的 inverse，即求解是否為 inverse \n");
		printf("n 的數值必須比 a 大");
		printf("\n如有輸入錯誤，請您重新輸入！！\n");	
		printf("輸入a=>");
		cin >> a;
		printf("輸入n=>");
		cin >> n;
		}while (a > n);
		int A;
		A = n % a;
		Extended();
		system("pause");
}