#include <stdio.h>
#include <stdlib.h>
#define MAX_INDEX 100

int size;

int insert_value(int arr[], int idx)
{
  int input;
  printf("Which number you want to insert in %d?\n", idx);
  scanf("%d", &input);
  int tmp, tmp2;

  for(int i = 0; i < size; i++)
  {
    if(i == idx-1)
    {
      for(int j = idx - 1; j <size+1; j++)
      {
        if(j == idx - 1)
        {
          tmp = arr[j+1];
          arr[j+1] = arr[j];
        } else {
          tmp2 = arr[j+1];
          arr[j+1] = tmp;
          tmp = tmp2;
        }
      }
      arr[i] = input;
    }
  }
  for(int j = 0; j < size+1; j++)
  {
    if(j != size)
      printf("%d->", arr[j]);
    else if(j == size) {
        printf("%d\n", arr[j]);
        break;
    }
  }
}

int main(void)
{

  printf("Input Array Size\n");
  scanf("%d", &size);
  int *numPtr = malloc(sizeof(int)*size);

  for(int i = 0; i<size; i++)
  {
    int input = 0;
    scanf("%d", &input);
    numPtr[i] = input;
  }

  for(int j = 0; j < size; j++)
  {
    if(j != size-1)
      printf("%d->", numPtr[j]);
    else if(j == size-1) {
        printf("%d\n", numPtr[j]);
        break;
    }
  }

  int idx;
  printf("Select index where you want to insert new number.\n");
  scanf("%d", &idx);
  insert_value(numPtr, idx);

  free(numPtr);
  return 0;
}
