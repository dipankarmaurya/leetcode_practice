#include<stdio.h>
 
int main() {
   int arr[20], i, j, k, size ,t=0;
 
   
   scanf("%d", &size);
 
   
   for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);
 
   
   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < size; k++) {
               arr[k] = arr[k + 1];
            }
            size--;
         } else
            j++;
      }
   }
 t=size-1;
 printf("%d",t);
   
   
 
   return (0);
}

