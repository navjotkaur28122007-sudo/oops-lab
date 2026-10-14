
#include <stdio.h>
#define MAX 10

//command to run c code 
//gcc filename.c -o filename.exe
//then
//.\filename.exe

int arr[MAX];
int top1 = -1;
int top2 = MAX;

// Push into Stack 1
void push1(int value)
{
    if (top1 + 1 == top2)
    {
        printf("Stack Overflow\n");
        return;
    }

    arr[++top1] = value;
}

// Push into Stack 2
void push2(int value)
{
    if (top1 + 1 == top2)
    {
        printf("Stack Overflow\n");
        return;
    }

    arr[--top2] = value;
}

// Pop from Stack 1
void pop1()
{
    if (top1 == -1)
    {
        printf("Stack 1 Underflow\n");
        return;
    }

    printf("Popped from Stack 1: %d\n", arr[top1--]);
}

// Pop from Stack 2
void pop2()
{
    if (top2 == MAX)
    {
        printf("Stack 2 Underflow\n");
        return;
    }

    printf("Popped from Stack 2: %d\n", arr[top2++]);
}

// Display Stack 1
void display1()
{
    printf("Stack 1: ");
    for (int i = top1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

// Display Stack 2
void display2()
{
    printf("Stack 2: ");
    for (int i = top2; i < MAX; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    push1(10);
    push1(20);
    push1(30);

    push2(100);
    push2(200);
    push2(300);

    display1();
    display2();

    pop1();
    pop2();

    display1();
    display2();

    return 0;
}
