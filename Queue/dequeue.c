// double ended queue

#include <stdio.h>    
#define size 10 

struct queue{

    int deque[size];    
    int f , r ;   
} ;
typedef struct queue QUEUE;
QUEUE s;


//  insert_front function will insert the value from the front    
void insert_front(int x)    
{    
    if((s.f==0 && s.r==size-1) || (s.f==s.r+1))    
    {    
        printf("Overflow");    
    }    
    else if((s.f==-1) && (s.r==-1))    
    {    
        s.f=s.r=0;    
        s.deque[s.f]=x;    
    }    
    else if(s.f==0)    
    {    
        s.f=size-1;    
        s.deque[s.f]=x;    
    }    
    else    
    {    
        s.f=s.f-1;    
        s.deque[s.f]=x;    
    }    
}    
    
// insert_rear function will insert the value from the rear    
void insert_rear(int x)    
{    
    if((s.f==0 && s.r==size-1) || (s.f==s.r+1))    
    {    
        printf("Overflow");    
    }    
    else if((s.f==-1) && (s.r==-1))    
    {    
        s.r=0;    
        s.deque[s.r]=x;    
    }    
    else if(s.r==size-1)    
    {    
        s.r=0;    
        s.deque[s.r]=x;    
    }    
    else    
    {    
        s.r++;    
        s.deque[s.r]=x;    
    }    
    
}    
    
// traverse function prints all the value of s.deque.    
void traverse()    
{     
    printf("\nElements in a deque are: ");    
    int i=s.f;
    while(i!=s.r)    
    {    
        printf("%d ",s.deque[i]);    
        i=(i+1)%size;    
    }    
     printf("%d",s.deque[s.r]);    
}    
    
// getfront function retrieves the first value of the s.deque.    
void getfront()    
{    
    if((s.f==-1) && (s.r==-1))    
    {    
        printf("deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at front is: %d", s.deque[s.f]);    
    }    
        
}    
    
// getrear function retrieves the last value of the s.deque.    
void getrear()    
{    
    if((s.f==-1) && (s.r==-1))    
    {    
        printf("deque is empty");    
    }    
    else    
    {    
        printf("\nThe value of the element at rear is: %d", s.deque[s.r]);    
    }    
        
}    
    
// delete_front() function deletes the element from the front    
void delete_front()    
{    
    if((s.f==-1) && (s.r==-1))    
    {    
        printf("s.deque is empty");    
    }    
    else if(s.f==s.r)    
    {    
        printf("\nThe deleted element is %d", s.deque[s.f]);    
        s.f=-1;    
        s.r=-1;    
            
    }    
     else if(s.f==(size-1))    
     {    
         printf("\nThe deleted element is %d", s.deque[s.f]);    
         s.f=0;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", s.deque[s.f]);    
          s.f=s.f+1;    
     }    
}    
    
// delete_rear() function deletes the element from the rear    
void delete_rear()    
{    
    if((s.f==-1) && (s.r==-1))    
    {    
        printf("deque is empty");    
    }    
    else if(s.f==s.r)    
    {    
        printf("\nThe deleted element is %d", s.deque[s.r]);    
        s.f=-1;    
        s.r=-1;    
            
    }    
     else if(s.r==0)    
     {    
         printf("\nThe deleted element is %d", s.deque[s.r]);    
         s.r=size-1;    
     }    
     else    
     {    
          printf("\nThe deleted element is %d", s.deque[s.r]);    
          s.r=s.r-1;    
     }    
}    
    
int main()    
{    
    s.f=s.r=-1;
    int ch,flag=1,x;
    while (flag)
    {
        printf("\n1.Insert Front Operation\n");
        printf("2.Insert Rear Operation\n");
        printf("3.Delete Front Operation\n");
        printf("4.Delete Rear Operation\n");
        printf("5.Display the Queue\n");
        printf("6.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            printf("Enter element to add :");
            scanf(" %d", &x);
            insert_front(x);
            break;
            case 2:
            printf("Enter element to add :");
            scanf("%d", &x);
            insert_rear(x);
            break;
            case 3:
            delete_front();
            break;
            case 4:
            delete_rear();
            break;
            case 5:
            traverse();
            break;
            case 6:
            flag=0;
            break;
            default:
            printf("Incorrect choice \n");
        } 
    }
    return 0;    
}     