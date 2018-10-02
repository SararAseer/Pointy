#include <stdio.h>
#include <time.h>

int main(){
  int p1[10];
  srand(time(NULL));
  int counter=0;
  
  while(counter--){
    p1[counter] = rand();
  }
  p1[9] = 0;
  counter+=9;
  while(counter--){
    printf("value number: %d, in ray_one: %d \n", 9-counter, p1[9-counter]);
  }
  printf("\n");
  int p2[10];
  int *p12 = ray_one;
  int *p22 = ray_two;
  counter=9;
  while(counter--){
    *(p22 + counter) = *(p12 + 9 - counter);
  }
  counter=9;
  while(counter--){
    printf("value number: %d, in ray_two: %d \n", 9-counter, p2[9-counter]);
  }
}
