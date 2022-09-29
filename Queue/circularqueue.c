#include<stdio.h>

# define SIZE 5

struct queue
{
    int inp_arr[SIZE];
    int Rear ;
    int Front ;
};
typedef struct queue QUEUE;
QUEUE q;


int isFull() {
  if ((q.Front == q.Rear + 1) || (q.Front == 0 && q.Rear == SIZE - 1)) return 1;
  return 0;
}


int isEmpty() {
  if (q.Front == -1) return 1;
  return 0;
}

void enqueue()
{
    int insert_item;
    if (q.Rear == SIZE - 1)
       printf("Full  \n");
    else
    {
        if (q.Front == - 1) q.Front = 0;

        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        q.Rear = (q.Rear + 1)% SIZE ;
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
        if(q.Front == q.Rear){
            q.Front =-1;
            q.Rear = -1;
        }else{
            q.Front = (q.Front + 1) % SIZE ;

        }

        printf("Element deleted from the Queue: %d \n", q.inp_arr[q.Front]);
    }
} 
 
void traverse()
{
    
    if (q.Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        if(q.Front<=q.Rear)
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

    int ch,flag=1;
    while (flag)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.First element the Queue\n");
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
            flag=0;
            break;
            default:
            printf("Incorrect choice \n");
        } 
    }

}