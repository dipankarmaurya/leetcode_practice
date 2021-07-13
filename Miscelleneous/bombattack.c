#include <stdio.h>

int r,c,n;
int i;
int main() {
	printf("enter the value of row and column");
	scanf("%d %d",&r,&c);
  printf("Hello Admin Please Enter the  Items:\n");

  char items[r][100];

  for ( i = 0; i < r; ++i) {
    scanf("%99s", items[i]);

  }

  for (i = 0; i < r; ++i) {
    printf("%s ", items[i]);
    printf("\n");
  }

  return 0;
}
