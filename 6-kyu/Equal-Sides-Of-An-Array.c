/*************************************************************************
    > File Name: Equal-Sides-Of-An-Array.c
    > Author: zido
    > Mail: wuhongxu1208@gmail.com 
    > Created Time: Fri Aug 10 00:42:07 2018
 ************************************************************************/

int find_even_index(const int *values, int length) {
	int index = 0;
	int sum = 0,leftSum = 0;
	int i;
	for(i = 0; i < length; i++){
		sum += *(values + i);
	}
	for(;index < length; index++){
		int left = sum - *(values + index);
		if(!(left & 1)&&leftSum == (left >> 1)){
			return index;
		}
		leftSum += *(values + index);
	}
  return -1;
}
