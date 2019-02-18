/*************************************************************************
  > File Name: bubble_sort.c
  > Author: zido
  > Mail: wuhongxu1208@gmail.com 
  > Created Time: Mon 18 Feb 2019 02:33:15 PM CST
  > 冒泡排序(小优化)
 ************************************************************************/

#include <stdio.h>

void bubble_sort(int arr[],int len)
{
  int i,j;
  for(i = 1; i < len; i++)
  {
    int flag = 1;
    for(j = 0; j < len - i; j++) 
    {
      if(arr[j] > arr[j + 1])
      {
        int temp = arr[j];

        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

        flag = 0;
      }
    }
    //如果此次遍历没有进行交换，则表示数组已经有序，排序完成直接退出
    if(flag)
    {
      break;
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
