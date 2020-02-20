#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char ** argv){
  char * str = (char *) malloc(sizeof(char)*3);
  char * name = (char *) malloc(sizeof(char)*3);
  strcpy(name,"Benjamin");
  strcpy(str,argv[1]);

  printf("\nname : %s\n",name);
}
