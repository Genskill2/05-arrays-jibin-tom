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


int min(int a[], int s){
  
  int sm = a[0];
  for(int i = 1; i < s; i++){
   if(a[i]<sm){
     sm = a[i];
   }
  }
  return sm;
}

float average(int a[], int s){
  
  float sum = 0;
  
  for (int i = 0; i < s ; i++) {
     
    sum+= a[i]; 
  }
  
  float avg = sum/(float)s; 
  
  return avg;
}
