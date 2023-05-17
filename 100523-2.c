//wap to convert decimal to binary using user defined function
#include <stdio.h>
int dectobin(int n)
{
	int b[50];
	int i = 0;
	while (n > 0) {
		b[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%d", b[j]);
}
int main()
{
	int n;
    printf("Enter the number:");
    scanf("%d",&n);
	dectobin(n);
	return 0;
}
