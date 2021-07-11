#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define SHELL "/bin/sh"

int my_system(const char*command);

int main(int argc, char ** argv){
  if(argc == 2){
    my_system(argv[1]);
    return EXIT_SUCCESS;
  }
  else{
    printf("Za malo argumentow");
    return EXIT_FAILURE;
  }
}
int my_system (const char *command)
{
  char path [20]= "/usr/bin/";
  strcat(path, command);
  pid_t pid;
  // umask(0);
  do{
    pid = fork();
    if(pid > 0){
      execl(SHELL,SHELL, path, NULL);
      _exit (EXIT_FAILURE);
    }
    else if (pid < 0)
      exit(EXIT_FAILURE);
    sleep(20);
  }while(1);
  return 0;
}

