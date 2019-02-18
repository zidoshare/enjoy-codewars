/*************************************************************************
  > File Name: shell_sort.c
  > Author: zido
  > Mail: wuhongxu1208@gmail.com 
  > Created Time: Mon 18 Feb 2019 03:24:00 PM CST
 ************************************************************************/

#include<stdio.h>

void shell_sort(int arr[],int len)
{
  int i,j,gap = len;
  while(1)
  {
    gap = gap / 3 + 1;
    for(i = gap; i < len; i++)
    {
      int current = arr[i];
      for(j = i; j >= gap && current < arr[j - gap]; j -= gap)
      {
        arr[j] = arr[j - gap];
      }
      if(j != i)
      {
        arr[j] = current;
      }
    }
    int k;
    printf("gap = %d:",gap);
    for(k = 0; k < len; k++)
    {
      printf("%d ",arr[k]);
    }
    printf("\n");
    if(gap == 1)
    {
      break;
    }
  }
}
int main()
{
  int arr[] = {4,3,86,2,0,53,99,56,55,88};
  int i;
  int len = sizeof(arr) / sizeof(*arr);
  shell_sort(arr,len);
  printf("len = %d \n",len);
  printf("use insert sort the arr is: ");
  for(i = 0; i < len; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
