

#include <iostream>

int main()
{
    int n;
    scanf_s("%d", &n);
    int num = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", num++);
        }
        printf("\n");
        num = 1;
    }
   
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = i - 1; j >= 1; j--)
		{
			printf("%d", num++);
		}
		printf("\n");
		num = 1;
	}
}

