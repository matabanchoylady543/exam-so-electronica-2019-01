#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


int main (int argc, char** argv) {
  pid_t pid,pid2;
  int status;

  pid = fork();
  if (pid != 0) {
   pid2 = wait(&status);
   printf("Soy el padre de mi id es %d y el de mi hijo es %d\n",getpid(),pid);
 } else {
   wait (2);                                                                     
   printf("soy el hijo con id %d y mi variable pid es %d\n",getpid(),pid); 
  }
  return 0;

}
