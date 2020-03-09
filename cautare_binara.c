#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i, st, dr, mij, n, x, v[100];
	printf("n=");
	scanf("%d", &n);
	printf("Dati elementele\n");
	for (i = 0; i < n; i++)
		scanf("%d", v[i]);
	printf("x=");
	scanf("%d", &x);
	st = 0;
	dr = n - 1;
	mij = (st + dr) / 2;
	while (st <= dr)
	{
		if (v[mij] < x)
			st = mij + 1;
		else
			if (v[mij] == x)
			{
				printf("%d gasit pe pozitia %d\n", x, mij + 1);
				break;
			}
			else
				dr = mij - 1;
		mij = (st + dr) / 2;
	}
	if (st > dr)
		printf("nu exista %d in lista \n", x);
	system("pause");
	return 0;
}
