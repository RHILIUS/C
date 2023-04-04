#include <stdio.h>

int main() {

  int table[][3] = {
    {3,1,5},
    {4,6,2}
  };
  int i,j,k,l;
  int temp;
  int row = sizeof(table)/sizeof(table[0]);
  int col = sizeof(table[0])/sizeof(table[0][0]);

  // Render Before
  printf("Before:\n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("%d|", table[i][j]);
    }
    printf("\n");
  }

  // Balloon Sort
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      l = j+1;
      for (k = i; k < row; k++) {
        while (l < col) {
          if (table[i][j] > table[k][l]) {
            temp = table[i][j];
            table[i][j] = table[k][l];
            table[k][l] = temp; 
          }
          l++;
        }
        l = 0;
      }
    }
  }

  // Render After
  printf("\nAfter:\n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("%d|", table[i][j]);
    }
    printf("\n");
  }

  return 0;
}