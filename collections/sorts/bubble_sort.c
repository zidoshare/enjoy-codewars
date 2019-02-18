/*************************************************************************
  > File Name: bubble_sort.c
  > Author: zido
  > Mail: wuhongxu1208@gmail.com 
  > Created Time: Mon 18 Feb 2019 02:33:15 PM CST
  > 冒泡排序
 ************************************************************************/

#include <stdio.h>

void bubble_sort(int arr[],int len)
{
  int i,j;
  for(i = 0; i < len - 1; i++)
  {
    for(j = 0; j < len - 1; j++) 
    {
      if(arr[j] > arr[j + 1])
      {
        int temp;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int arr[] = {4,3,86,54,24,53,99,56,55,88};
  int i;
  int len = sizeof(arr) / sizeof(*arr);
  bubble_sort(arr,len);
  printf("len = %d \n",len);
  printf("use bubble sort the arr is: ");
  for(i = 0; i < len; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
