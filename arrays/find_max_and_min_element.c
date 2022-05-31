#include<stdio.h>

int main(){
  int array[1000]; //declation of array with size of 1000 elements
  int n, i;//declaration of variables, n for number of elements that array will contain, and i is like index, etc, indexing element
  printf("Array Max and Min Number");
  printf("Enter a number of elements for array [n] => ");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("Entering element in array with index [ %d ]: ", i);
    scanf("%d", &array[i]);
  }
  printf("Printing array: \n");
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}
