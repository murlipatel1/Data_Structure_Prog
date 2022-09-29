
#include<stdio.h>


int main()
{
    int size;

    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr[i]);
    }
    
    int element, pos, i;

    printf("Enter position and element\n");
    scanf("%d%d",&pos,&element);

    if(pos <= size && pos >= 0)
    {
        //shift all the elements from the last index to pos by 1 position to right
        for(i = size; i > pos; i--)
            arr[i] = arr[i-1];

        //insert element at the given position
        arr[pos] = element;

        /*
         * print the new array
         * the new array size will be size+1(actual size+new element)
         * so, use i <= size in for loop
         */
        for(i = 0; i <= size; i++)
            printf("%d ", arr[i]);
    }
    else
        printf("Invalid Position\n");

    return 0;
  }
