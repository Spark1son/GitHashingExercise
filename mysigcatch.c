#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


void siginthandler(int param){
printf(" SIGINT signal caught!\n");
exit(0);
}


int main() {
signal(SIGINT, siginthandler);
while(1);
return 0;
}


