#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isEmpty()
{
    return (front == -1 || front > rear);
}

int isFull()
{
    return (rear == MAX - 1);
}

void enqueue()
{
    int value;

    if (isFull())
    {
        printf("Queue Overflow!\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &value);

    if (front == -1)
        front = 0;

    queue[++rear] = value;
    printf("%d inserted.\n", value);
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue Underflow!\n");
        return;
    }

    printf("%d deleted.\n", queue[front++]);

    if (front > rear)
        front = rear = -1;
}

void peek()
{
    if (isEmpty())
        printf("Queue is empty.\n");
    else
        printf("Front element: %d\n", queue[front]);
}

void display()
{
    int i;

    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");

    for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Is Empty\n");
        printf("4. Is Full\n");
        printf("5. Peek\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                printf(isEmpty() ? "Queue is empty.\n" : "Queue is not empty.\n");
                break;

            case 4:
                printf(isFull() ? "Queue is full.\n" : "Queue is not full.\n");
                break;

            case 5:
                peek();
                break;

            case 6:
                display();
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}
