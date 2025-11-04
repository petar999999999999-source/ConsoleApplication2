

#include <iostream>

int main()
{
    int n;
    scanf_s("%d", &n);
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d" , num++);
        }
        printf("\n");
        num = 1;
    }

}

