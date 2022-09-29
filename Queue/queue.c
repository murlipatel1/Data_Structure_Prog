#include<stdio.h>

# define SIZE 10
struct queue
{
    int inp_arr[SIZE];
    int Rear ;
    int Front ;
};
typedef struct queue QUEUE;
QUEUE q;




void enqueue()
{
    int insert_item;
    if (q.Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (q.Front == - 1) q.Front = 0;

        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        q.Rear = q.Rear + 1;
        q.inp_arr[q.Rear] = insert_item;
    }
} 
 
void dequeue()
{
    if (q.Front == - 1 || q.Front > q.Rear)
    {
        printf("Empty \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d \n", q.inp_arr[q.Front]);
        q.Front = q.Front + 1;
    }
} 
 
void traverse()
{
    
    if (q.Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = q.Front; i <= q.Rear; i++)
            printf("%d ", q.inp_arr[i]);
        printf("\n");
    }
}

void peek(){
    printf("Front element is %d", q.inp_arr[q.Front] );
}


int main(){
    q.Rear=-1;
    q.Front= -1;

    int ch, flag=1;
    while (flag)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Display the Queue\n");
        printf("5.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            traverse();
            break;
            case 4:
            peek();
            break;
            case 5:
            flag =0;
            break;
            default:
            printf("Incorrect choice \n");
        } 
    }

}
