#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
   setuid(0);
   int exitCode = system("/usr/bin/chef-client --once");
   return(WEXITSTATUS(exitCode));
}