/*************************************************************************
  > File Name: selection_sort.c
  > Author: zido
  > Mail: wuhongxu1208@gmail.com 
  > Created Time: Mon 18 Feb 2019 02:51:52 PM CST
 ************************************************************************/

#include<stdio.h>

void selection_sort(int arr[],int len)
{
  int i,j;
  for(i = 0 ; i < len - 1; i++)
  {
    int index = i;
    for(j = i + 1; j < len; j++)
    {
      if(arr[index] > arr[j])
      {
        index = j;
      }
    }
    if(index != i)
    {
      int temp = arr[index];
      arr[index] = arr[i];
      arr[i] = temp;
    }
  }
}
int main()
{
  int arr[] = {4,3,86,54,24,53,99,56,55,88};
  int i;
  int len = sizeof(arr) / sizeof(*arr);
  selection_sort(arr,len);
  printf("len = %d \n",len);
  printf("use selection sort the arr is: ");
  for(i = 0; i < len; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
