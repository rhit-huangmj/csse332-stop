#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char **argv)
{
  /* TODO: Insert your code here. */
  if(argc == 1){
	  printf("FAILED: expects input in form of 'sleep XX'\n");
	  exit(0);
  }
  char * arg = argv[1];
  int timer = atoi(arg);
  printf("sleeping for %d seconds\n",timer);
  sleep(timer*10);
  exit(0);
}
