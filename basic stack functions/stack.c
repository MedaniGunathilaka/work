#include<stdio.h>
#define MAXSIZE 10
    int stack[MAXSIZE], topA=-1, topB=MAXSIZE;
int isFull(int val)
{
    if(topA==topB-1)
       {
          printf("\n STACK IS FULL\n");
       }

    else{
         printf("\n There is space in the Stack.\n");
         int i;
        for(i=topA;i>=0;i--)
            printf("\n %d",stack[i]);
    printf("\n");
    }
}

int isEmpty(int val)
{
    if(topA==-1)
    {
        printf("\n STACK IS EMPTY\n");
        val =-MAXSIZE;
    }
    else{
        printf("\n There are elements in the Stack\n");
        int i;
        for(i=topA;i>=0;i--)
            printf("\n %d",stack[i]);
    printf("\n");
        return(val);
    }
}

int peek(int stack[])
{
    if (topA==-1)
    {
        printf("\n STACK UNDERFLOW\n");
        return -1;
    }
    else
    {
        return(stack[topA]);
    }
}

int pop(int stack[])
{
    int val;
    if(topA == -1)
    {
        printf("\n STACK UNDERFLOW\n");
        return -1;
    }
    else
    {
            val = stack[topA];
            topA--;
    return val;
    }
}

void push(int stack[], int val)
{
    if(topA == topB-1)
    {
        printf("\n STACK OVERFLOW\n");
    }
    else
    {
        topA++;
    stack[topA] = val;
    }
}

void outPut(int stack[])
{
    int i;
    if(topA == -1)
        printf("\n STACK IS EMPTY\n");
    else
    {
        for(i=topA;i>=0;i--)
            printf("\n %d",stack[i]);
    printf("\n");
    }
}


int main()
{
    int val, option;
    do
{
    printf("\n *****MAIN MENU*****");
    printf("\n 1. PUSH");
    printf("\n 2. POP");
    printf("\n 3. PEEK");
    printf("\n 4. DISPLAY");
    printf("\n 5. CHECK IF FULL");
    printf("\n 6. CHECK IF EMPTY");
    printf("\n 7. EXIT");
    printf("\n Enter your option: ");
    scanf("%d", &option);
    switch(option)
    {
    case 1:
        printf("\n Enter the number to be pushed on stack: ");
        scanf("%d", &val);
        push(stack, val);
        break;
    case 2:
        val = pop(stack);
        if(val != -1)
        printf("\n The value deleted from stack is: %d\n", val);
        break;
    case 3:
        val = peek(stack);
            if(val != -1)
                printf("\n The value stored at top of stack is: %d\n", val);
        break;
    case 4:
        outPut(stack);
        break;
    case 5:
        isFull(stack);
        break;
    case 6:
        isEmpty(stack);
        break;
    }
}
    while(option != 7);
    return 0;
}
