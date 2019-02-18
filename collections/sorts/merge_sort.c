/*************************************************************************
  > File Name: merge_sort.c
  > Author: zido
  > Mail: wuhongxu1208@gmail.com 
  > Created Time: Mon 18 Feb 2019 11:01:56 PM CST
  > 归并排序
 ************************************************************************/

#include<stdlib.h>
#include<stdio.h>
#include<memory.h>
void merge(int arr[],int start,int mid,int end)
{
  int *tmp = (int*)malloc((end - start + 1) * sizeof(int));
  int i = start;
  int j = mid + 1;
  int k = 0;
  while( i <= mid && j <= end)
  {
    if(arr[i] <= arr[j])
    {
      tmp[k++] = arr[i++];
    }
    else
    {
      tmp[k++] = arr[j++];
    }
  }

  while(i <= mid)
  {
    tmp[k++] = arr[i++];
  }
  while(j <= end)
  {
    tmp[k++] = arr[j++];
  }
  for(i = 0; i < k; i++)
  {
    arr[start + i] = tmp[i];
  }
  free(tmp);
}

void divide(int arr[],int start,int end)
{
  if(start >= end)
  {
    return;
  }
  int mid = (end + start) / 2;
  divide(arr,start,mid);
  divide(arr,mid + 1,end);
  merge(arr,start,mid,end);
}

void merge_sort(int arr[],int len)
{
  divide(arr,0,len - 1);
}

int main()
{
  int arr[] = {4,3,86,54,24,53,99,56,55,88};
  int i;
  int len = sizeof(arr) / sizeof(*arr);
  merge_sort(arr,len);
  printf("len = %d \n",len);
  printf("use bubble sort the arr is: ");
  for(i = 0; i < len; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}
