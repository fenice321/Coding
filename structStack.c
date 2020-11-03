#if 0
#include <stdio.h>
typedef struct _Stack
{
    char mem[1024];
    int top;
} Stack;
Stack s = { { 0 }, 0 };
int isFull()
{
    return s.top == 1024;
}
int isEmpty()
{
    return s.top == 0;
}
void push(char ch)
{
    s.mem[s.top++] = ch;
}
char pop()
{
    return s.mem[--s.top];
}
int main()
{
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (!isFull())
        {
            push(ch);
        }
    }
    while (!isEmpty())
    {
        putchar(pop());
        putchar(10);
    }
    return 0;
}
#endif
#include <stdio.h>
typedef struct _Stack
{
    char mem[1024];
    int top;
} Stack;
int isFull(Stack* ps)
{
    return ps->top == 1024;
}
int isEmpty(Stack* ps)
{
    return ps->top == 0;
}
void push(Stack* ps, char ch)
{
    ps->mem[ps->top++] = ch;
}
char pop(Stack* ps)
{
    return ps->mem[--ps->top];
}

int main()
{
    Stack s = { { 0 } , 0 };
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (!isFull(&s))
        {
            push(&s, ch);
        }
    }
    while (!isEmpty(&s))
    {
        putchar(pop(&s));
        putchar(10);
    }
    return 0;
}
