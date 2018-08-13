/*************************************************************************
    > File Name: Mysteriours-function.c
    > Author: zido
    > Mail: wuhongxu1208@gmail.com 
    > Created Time: Fri 10 Aug 2018 09:21:37 AM CST
 ************************************************************************/
int get_num(long a) {
  int result = 0;
  long left = a;
  while(left != 0){
    int mod = left % 10;
    left = left / 10;
    if(mod == 0 || mod == 6 || mod == 9){
      result += 1;
    }else if(mod == 8){
      result += 2;
    }
  }
  return result;
}
