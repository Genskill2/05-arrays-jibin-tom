/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>

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


int mode(int a[], int s){
    
  int max_element = max(a,s);
  int arr[max_element+1];
  
  for(int i=0; i<= max_element; i++){
    arr[i]=0;
    for(int j = 0; j < s; j++){
         if(a[j] == i){
            arr[i]++;
    }
    }
  }
  
  int l = arr[0], pos=0;
  for(int i = 1; i <= max_element; i++){
   if(arr[i]>l){
     l = arr[i];
     pos=i;
   }

  }
  return pos;
}

int factors(int n,int ret[]){
  int ct=-1;
  while (n%2 == 0)
    {   ct++;
        ret[ct]=2;
        n = n/2;
        
    }
for (int i = 3; i <= sqrt(n); i = i+2)
    {
        
        while (n%i == 0)
        {   ct++;
            ret[ct] = i;
            
            n = n/i;
        }
    }
  if (n > 2)
  {  ct++;
     ret[ct]=n;
  }
  
  return (ct+1);
}
