#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = data;
    }
}

void display()
{
    printf("Now displaying: ");
    int i = top;

    while (i >= 0)
    {
        printf("%d ", stack[i]);
        i--;
    }

    printf("\n");
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("%d was removed", stack[top--]);
    }
}

void peep()
{
    printf("The element at the top of the stack is: %d", stack[top]);
}

int main()
{
    while (1)
    {
        int choice;
        printf("\nEnter choice, 1-Enter, 2-Display, 3-Pop, 4-Peep, 5-Exit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            int data;
            printf("Enter the data: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            peep();
            break;
        case 5:
            break;
        }
    }
    return 0;
}
