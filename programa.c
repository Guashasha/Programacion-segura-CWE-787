#include <stdio.h>

int main(int argc, char *argv[]) {
  int cookie;
  char buf[4];

  printf("buf: %08p cookie %08p\n", &buf, &cookie);

  gets(buf);

  if (cookie == 0x41424344) {
    printf("\nGanaste :D\n");
  } else {

    printf("\nPerdiste D:\n");
  }

  return 0;
}
