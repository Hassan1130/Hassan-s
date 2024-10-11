#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int first=0, second=1, fibo, i;

    i=0;
    while (i < n)
    {
        if (i <= 1)
            fibo = i;
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        printf("%d  ", fibo);
        i++;
    }
    return 0;
}

