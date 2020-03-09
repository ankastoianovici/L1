#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n, i, x, v[100], ok;
	printf("n=");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("v[i]=");
		scanf("%d", &v[i]);
	}
	printf("x=");
	scanf("%d", &x);
	ok = 0;
	for (i = 0; i < n; i++)
	{
		if (v[i] == x)
			ok = 1;
	}
	if (ok == 1)
		printf("gasit\n");
	else
		printf("nu exista\n");
	system("pause");
	return 0;
}