/*************************************************************************
    > File Name: the-deaf-rats-of-hamelin.c
    > Author: zido
    > Mail: wuhongxu1208@gmail.com 
    > Created Time: Tue 22 Jan 2019 09:04:45 PM CST
    > origin: https://www.codewars.com/kata/598106cb34e205e074000031/train/c
 ************************************************************************/

int countDeafRats(const char *town)
{
  int i = 0, result = 0,flag = 0;
  while(*(town + i) != '\0')
  {
    if((*(town + i) == 'O' && !flag ) || (*(town + i) == '~' && flag))
    {
      result++;
    }else if(*(town + i) == 'P'){
      i++;
      flag = 1;
      continue;
    }else if(*(town + i) == ' '){
      i++;
      continue;
    }
    i+=2;
  }
  return result;
}
