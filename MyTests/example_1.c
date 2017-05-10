#include<stdlib.h>
#define INT_MAX 1000
#include "gperftools/profiler.h"



void C() {
  int *arr[INT_MAX];
  for(int i = 0 ; i < INT_MAX; i++) {
    arr[i] = malloc(sizeof(int));
  }

  for(int i = 0 ; i < INT_MAX; i++) {
    free (arr[i]);
  }
}

void B(char* X) {
  if(*X != 0) {
    C();
  }
}
void A(char* X) {
  if(*X != 0) {
    B(X+1);
  }
}



void D(char* X) {
  if(*X != 0) {
    C();
  }
}

int main(int argc, char** argv) {
  ProfilerStart("/home/sdasgup3/Github/gperftools/MyTests/dump.txt");
  for(int i = 0 ; i < 100000; i++) {
    A(argv[0]);
    D(argv[0]);
  }

   ProfilerFlush();
        ProfilerStop();

  return 0;
}
