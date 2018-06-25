/*Your task is to write a function toLeetSpeak that converts a regular english sentence to Leetspeak.

More about LeetSpeak You can read at wiki -> https://en.wikipedia.org/wiki/Leet

Consider only uppercase letters (no lowercase letters, no numbers) and spaces.

For example:

toLeetSpeak("LEET") returns "1337"
In this kata we use a simple LeetSpeak dialect. Use this alphabet:

{
  A : '@',
  B : '8',
  C : '(',
  D : 'D',
  E : '3',
  F : 'F',
  G : '6',
  H : '#',
  I : '!',
  J : 'J',
  K : 'K',
  L : '1',
  M : 'M',
  N : 'N',
  O : '0',
  P : 'P',
  Q : 'Q',
  R : 'R',
  S : '$',
  T : '7',
  U : 'U',
  V : 'V',
  W : 'W',
  X : 'X',
  Y : 'Y',
  Z : '2'
}
*/
#include <stdio.h>
#include <malloc.h>
char* toLeetSpeak (char *speak){
  int i = 0;
  char chr;
  char table[] = {'@','8','(','D','3','F','6','#','!','J','K','1','M','N','0','P','Q','R','$','7','U','V','W','X','Y','2'};
  int len;
  for(len = 0; speak[len] == '\0'; len++){
  }
  char* result = (char*)malloc(sizeof(char) * len);
  while((chr = *(speak+i++)) != '\0'){
    if(chr == ' '){
      *(result + i - 1) = ' ';
      continue;
    }
    *(result + i - 1) = (char)table[chr - 'A'];
  }
  *(result + i - 1) = '\0';
  return result;
}

int main(){
  printf("%s",toLeetSpeak("CODEWARS"));
}
