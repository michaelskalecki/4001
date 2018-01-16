#include <stdio.h>
int main(int argc, char* argv[])
{
  printf("%s %s %s\n", *argv, (*(argv+1)) + 2, *(argv+2));
  return 0;
}
