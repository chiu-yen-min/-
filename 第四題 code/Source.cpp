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
		printf("��ܸg�L Extended Euclid's Algorithm �� Q �ܤ� ==>");
		cout << Q << endl;
	}
	
	if (B3 = 1) {
		printf("�l��==>");
		cout << X << endl;
		printf("\n�I�I�����G�̫᪺ Q �Ȭ� 1 �ɡA�Y�� inverse�I�I\n\n");		
		
		if (X != 0) {
			printf("�̫� Q �Ȭ� 1�A�Y�P�_�� inverse\n");
		}
		else
		{
			printf("�̫� Q �Ȥ��� 1�A�Y�P�_�� no inverse\n");
		}
			
	}
}
int main()
{
	do {
		printf("��J a (mod n) �� inverse�A�Y�D�ѬO�_�� inverse \n");
		printf("n ���ƭȥ����� a �j");
		printf("\n�p����J���~�A�бz���s��J�I�I\n");	
		printf("��Ja=>");
		cin >> a;
		printf("��Jn=>");
		cin >> n;
		}while (a > n);
		int A;
		A = n % a;
		Extended();
		system("pause");
}