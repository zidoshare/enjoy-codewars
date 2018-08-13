/*You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N. */

#include <stdlib.h>

int find_outlier(const int *values, size_t count){
  int i = 0,odd,even;
  odd = even = -1;
  for(; i < count; i++) {
    if(values[i] % 2 == 0){
      if(even != -1 && odd != -1){
        return values[odd];
      }
      even = i;
    }else{
      if(odd != -1 && even != -1){
        return values[even];
      }
      odd = i;
    }
  }
  return values[count - 1];
}
