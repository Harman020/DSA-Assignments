#include <stdio.h>
#define MAX 100

int main()
{
    int queue[MAX], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter queue elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &queue[i]);

    for (i = 0, j = n / 2; i < n / 2; i++, j++)
    {
        temp = queue[j];

        for (int k = j; k > 2 * i + 1; k--)
            queue[k] = queue[k - 1];

        queue[2 * i + 1] = temp;
    }

    printf("Interleaved queue: ");
    for (i = 0; i < n; i++)
        printf("%d ", queue[i]);

    return 0;
}
