/*************************************************************************
  > File Name: Tortoise-reacing.c
  > Author: zido
  > Mail: wuhongxu1208@gmail.com 
  > Created Time: Fri 10 Aug 2018 09:31:29 AM CST
 ************************************************************************/
#include "stdio.h"
#include "malloc.h"
int* race(int v1, int v2, int g) {
  int* result = (int*)malloc(sizeof(int) * 3);
  if(v1 >= v2){
    result[0] = -1;
    result[1] = -1;
    result[2] = -1;
    return result;
  }
  int time = 3600 * g / (v2 - v1);
  result[0] = time / 3600;
  time -= 3600 * result[0];
  int min = time/60;
  result[1] = min;
  result[2] = time - 60 * result[1];
  return result;
}
int main(){
  int* result = race(720,850,70);
  printf("[%d,%d,%d]",result[0],result[1],result[2]);
  free(result);
  return 0;
}
