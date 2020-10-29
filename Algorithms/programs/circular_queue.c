
#include<stdio.h>
#include<stdlib.h>
#define Max 20
#define TRUE 1
#define FALSE 0
struct queue
{
    char item[Max];
    int rear;
    int front;

};
struct queue q;
void initialsise()
{
    q.rear=-1;
    q.front=0;
}
void enqueue(char x)
{
    if(q.rear==Max-1)
    {
        printf("\nQueue Overflows");
        exit(1);
    }
    else
    {
        q.rear++;
        q.item[q.rear]=x;
    }
}
int empty()
{
    if(q.rear-q.front+1==0)
    {
        return TRUE;
    }
    else
        return FALSE;
}
char dequeue()
{
    char x;
    if(empty())
    {
        printf("\nQueue Underflows");
        exit(1);
    }
    else
    {
        x=q.item[q.front];
        q.front++;
        return x;
    }

}
void main()
{
    char x;
    initialsise();
    enqueue('a');
    enqueue('b');
    enqueue('c');
    enqueue('d');
    enqueue('e');
    x=dequeue();
    printf("\ndeleted element is : %c",x);
    x=dequeue();
    printf("\ndeleted element is : %c",x);
    x=dequeue();
    printf("\ndeleted element is : %c",x);
    x=dequeue();
    printf("\ndeleted element is : %c",x);
    x=dequeue();
    printf("\ndeleted element is : %c",x);
    x=dequeue();
    printf("deleted element is : %c",x);


}
