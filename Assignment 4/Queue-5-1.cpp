#include <stdio.h>
#define MAX 100

int q1[MAX], q2[MAX];
int f1 = 0, r1 = 0, f2 = 0, r2 = 0;

void push(int x)
{
    q2[r2++] = x;

    while (f1 < r1)
        q2[r2++] = q1[f1++];

    for (int i = 0; i < r2; i++)
        q1[i] = q2[i];

    r1 = r2;
    f1 = 0;
    r2 = f2 = 0;
}

void pop()
{
    if (f1 == r1)
        printf("Stack Underflow\n");
    else
        printf("%d popped\n", q1[f1++]);
}

void display()
{
    if (f1 == r1)
    {
        printf("Stack is empty\n");
        return;
    }

    for (int i = f1; i < r1; i++)
        printf("%d ", q1[i]);

    printf("\n");
}

int main()
{
    int choice, x;

    do
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &x);
                push(x);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
