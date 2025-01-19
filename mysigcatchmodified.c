#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int counter = 0;

void custom_sigint_handler(int param){

printf("User pressed Ctrl+C\n");
counter++;

if (counter == 2){

printf("Caught Sigint 2 times. One more will terminate the programm.\n");
signal(SIGINT, SIG_DFL);
}
}

int main()
{
  signal(SIGINT, custom_sigint_handler);
  while(1);
  return 0;
}

