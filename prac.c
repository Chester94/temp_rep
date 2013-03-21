#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main(int argv, char *argc[], char *envp[])
{
  int pid = fork();

  if(pid < 0)
    printf("error\n");
  else if (pid == 0)
    {
      FILE * f1 = fopen("first-one.txt", "wt");
      fprintf(f1, "%d", pid);
      fclose(f1);
      execle("/usr/bin/env", "/usr/bin/env", NULL, envp);
    }
  else
    {
      printf("%d", pid);
    }
}
