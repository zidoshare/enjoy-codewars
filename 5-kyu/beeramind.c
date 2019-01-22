/*************************************************************************
    > File Name: beeramind.c
    > Author: zido
    > Mail: wuhongxu1208@gmail.com 
    > Created Time: Tue 22 Jan 2019 09:45:03 PM CST
    > origin: https://www.codewars.com/kata/beeramid/train/c
 ************************************************************************/

// Returns number of complete beeramid levels
int beeramid(double bonus, double price) {
  int level = 0;
  do{
    level++;
    bonus -= level * level * price;
  }while(bonus >= 0);
  return level - 1;
}
