/*************************************************************************
    > File Name: steps-in-primes.c
    > Author: zido
    > Mail: wuhongxu1208@gmail.com 
    > Created Time: Mon 13 Aug 2018 09:15:13 AM CST
 ************************************************************************/
#include "malloc.h"
int isPrime(long long x){
  long long i = 2;
  for(;i <= sqrt(x) ; i++){
    if(x % i == 0){
      return 0;
    }
  }
  return 1;
}
long long* step(int g, long long m, long long n) {
  long long* result = (long long*)malloc(sizeof(long long) * 2);
  int lastPrime = 0;
  while(m <= n && m + g <= n){
    if(isPrime(m + g)){
      lastPrime = m + g;
    }
    int mPrime = (m == lastPrime?1:isPrime(m));
    if( mPrime && lastPrime == m + g){
      result[0] = m;
      result[1] = m + g;
      return result;
    }
    m++;
  }
  result[0] = 0;
  result[1] = 0;
  return result;
}
