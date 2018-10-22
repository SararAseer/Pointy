#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

 
int Sieve(int n){
  if(n==1){
    return 2;
  }
  int s=(int)(n*log(n)*1.5);
  int c=1;
  char *a = malloc(s);
  for(int i=3; i <s; i+=2){
    if(a[i]!='h'){
      c++;
      for(int x=i*3; x < s; x+=i*2){
	a[x]='h';
      }
    }
    if(c==n){
      return i;
    }
  }
  return 0;
}



int main(){
  //Sieve7 best Sieve
  // printf("%d \n",(int)(10*log(10)*1.5));
   printf("%i \n",Sieve(1000000));
  // printf("Size of test2 is %lu bytes\n", sizeof(Sieve8(100))); 
  
  return 0;

}
