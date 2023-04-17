#include <stdio.h>


int main(int argc, char *argv[])
{
int i;
  for (int i = 0; i < argc; i++) {
    printf("arg[%d]=%s\n", i, argv[i]);
  }
}

