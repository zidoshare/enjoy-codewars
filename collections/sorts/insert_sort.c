/*************************************************************************
    > File Name: insert_sort.c
    > Author: zido
    > Mail: wuhongxu1208@gmail.com 
    > Created Time: Mon 18 Feb 2019 03:00:48 PM CST
    > 插入排序
 ************************************************************************/

#include<stdio.h>

void insert_sort(int arr[],int len)
{
  int i,j;
  for(i = 1; i < len; i++)
  {
    int current = arr[i];
    j = i;
    while(j > 0 && current < arr[j - 1])
    {
      arr[j] = arr[j - 1];
      j--;
    }
    if(j != i)
    {
      arr[j] = current;
    }
  }
}
int main()
{
  int arr[] = {4,3,86,54,24,53,99,56,55,88};
  int i;
  int len = sizeof(arr) / sizeof(*arr);
  insert_sort(arr,len);
  printf("len = %d \n",len);
  printf("use insert sort the arr is: ");
  for(i = 0; i < len; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
