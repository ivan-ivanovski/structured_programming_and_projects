#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	int arr[1000];
	float artSred = 0;
	float sumArr = 0;
	printf("N: \n");
	scanf("%d", &n);
	arr[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	printf("Vnesena niza: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");
	printf("Aritmeticka sredina na niza: \n");
	for (int i = 0; i < n; ++i)
	{
		sumArr += arr[i];
	}
	artSred = (float)sumArr/n;
	printf("%.2f\n", artSred);
	
	return 0;
}
