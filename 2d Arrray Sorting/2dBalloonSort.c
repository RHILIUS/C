#include <stdio.h>

int main() {

  int nums[][4] = {
    {3 ,1 ,5 ,6 },
    {4 ,6 ,2 ,9 },
    {10,11,8 ,7 }
  };

  int i,j,k,l;
  int row = sizeof(nums)/sizeof(nums[0]);
  int col = sizeof(nums[0])/sizeof(nums[0][0]);
  int temp;

  // Balloon Sort
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      for (k = 0; k < row; k++) {
        for (l = 0; l < col; l++) {
          if (i == k && j == l || i > k || i == k && j > l) {
            continue;
          } 
          if (nums[i][j] > nums[k][l]) {
            temp = nums[i][j];
            nums[i][j] = nums[k][l];
            nums[k][l] = temp;
          }
        }
      }
    }
  }

  // Render
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("%2d|", nums[i][j]);
    }
    printf("\n");
  }

  return 0;
}
