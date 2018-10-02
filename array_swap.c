#include <stdio.h>
#include <time.h>

int main(){
  int p1[10];
  srand(time(NULL));
  int counter=9;
  
  while(counter--){
    p1[counter] = rand();
  }
  p1[9] = 0;
  counter=9;
  while(counter--){
    printf("value number: %d, in ray_one: %d \n", 9-counter, p1[9-counter]);
  }
  printf("\n");
  int p2[10];
  int *p12 = p1;
  int *p22 = p2;
  counter=9;
  while(counter--){
    *(p22 + 9-counter) = *(p12 + counter+1);
  }
  counter=9;
  while(counter--){
    printf("value number: %d, in ray_two: %d \n", 9-counter, p2[9-counter]);
  }
}
