#include <stdio.h>

/* this is a bianary search function for an array that is pre sorted
*/
int bianarysearch(int array[], int min, int max, int x){
  if(max>= min){
    int mid = min + (max - min)/2;
    if(array[mid] == x){
      return mid;
    }
    if(array[mid]> x){
      return(bianarysearch(array, min, mid -1, x));
    }
    return(bianarysearch(array, mid+1, max, x));
  }
  return -1;
}
int main(){
  int arr[100];
  for(int i = 0; i<99;i++){
    arr[i] = i;
  }
  int result = bianarysearch(arr,0, 99, 20);
  if (result == -1){
    printf("Number is not in array");
}
  printf("%d", result);
  return result;
}
