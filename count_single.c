#include <stdio.h>

int count = 0;

int count_single(int n)
{	
	if(n / 2)
	{
		count += n % 2;
		count_single(n / 2);
	}
	else
	{
		count += n % 2;
		return count;
	}
};

int main()
{
int n;

	scanf("%d", &n);
	printf("%d\n", count_single(n));
	return 0;
}
