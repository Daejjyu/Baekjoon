#include<iostream>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = N; i >= 1; i--)
	{
		int temp = N - i;
		while (temp) {
			printf(" ");
			temp--;
		}
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}