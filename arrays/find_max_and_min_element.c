#include<stdio.h>
#include<limits.h>
int main(){
  int array[1000]; //declation of array with size of 1000 elements
  int n, i;//declaration of variables, n for number of elements that array will contain, and i is like index, etc, indexing element
  int max = INT_MAX, positionMax=0, min = INT_MIN, positionMin = 0;
  printf("Array Max and Min Number\n");
  printf("Enter a number of elements for array [n] => ");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("Entering element in array with index [ %d ]: ", i);
    scanf("%d", &array[i]);
  }
  printf("Printing array: \n");
  for(i = 0; i < n; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
  for(i = 0; i < n; i++){
      if(array[i] < max){
        max = array[i];
        positionMax=i;
      }
      if(array[i] > min){
        min = array[i];
        positionMin=i;
      }
  }
  printf("Min and max element in array is: min[%d] on position %d, max[%d] on position %d. \n",max,positionMax,min,positionMin);
  return 0;
  
}
