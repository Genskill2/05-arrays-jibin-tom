/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int s){
  
  int l = a[0];
  for(int i = 1; i < s; i++){
   if(a[i]>l){
     l = a[i];
   }
  }
  return l;
}
