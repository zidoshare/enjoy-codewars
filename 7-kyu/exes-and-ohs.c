#include <stdbool.h>

bool xo (const char* str)
{
  int x = 0, o = 0  i = 0;
  char chr = *(str + i);
  for(; chr != '\0'; i++){
    if(chr == 'o' || chr == 'O')
      o++;
    else if(chr == 'x' || chr == 'X'){
      x++;
    }
    chr = *(str + i + 1);
  }
  return (bool) (x == o);
}
