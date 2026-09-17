#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char str[MAX], queue[MAX];
    int freq[256] = {0};
    int front = 0, rear = -1;
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
        queue[++rear] = str[i];

        while (front <= rear && freq[(unsigned char)queue[front]] > 1)
            front++;

        if (front <= rear)
            printf("%c ", queue[front]);
        else
            printf("-1 ");
    }

    return 0;
}
