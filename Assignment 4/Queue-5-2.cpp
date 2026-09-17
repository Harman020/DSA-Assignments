#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = 0, rear = 0;

void push(int x)
{
    int i, temp;

    queue[rear++] = x;

    for (i = front; i < rear - 1; i++)
    {
        temp = queue[i];

        for (int j = i; j < rear - 1; j++)
            queue[j] = queue[j + 1];

        queue[rear - 1] = temp;
    }
}

void pop()
{
    if (front == rear)
        printf("Stack Underflow\n");
    else
        printf("%d popped\n", queue[front++]);
}

void display()
{
    if (front == rear)
    {
        printf("Stack is empty\n");
        return;
    }

    for (int i = front; i < rear; i++)
        printf("%d ", queue[i]);

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
