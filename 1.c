/*
배열을 선언하고 배열의 순서대로 값을 출력해주는 프로그램을 만드세요
알고리즘 정의: 배열을 사용하세요
입력: 4 5 2 5 3 8 2 5 3 7
출력: 4->5->2->5->3->8->2->5->3->7
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_INDEX 100

int main(void)
{
  int size;
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
        printf("%d", numPtr[j]);
        break;
    }
  }

  free(numPtr);
  return 0;
}
