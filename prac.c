#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
  
  int pid = fork();
  
  FILE * f1;
 
  f1 = fopen("temp.txt", "wb");
  fprintf(f1, "%d", pid);
  fclose(f1);
  
  pid = fork();
  printf("%d", pid);
}