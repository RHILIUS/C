#include <stdio.h>
#include <stdlib.h>

int getMaxNum(int rows, int cols, int arr[rows][cols]) {
  int max = arr[0][0];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (arr[i][j] > max) {
        max = arr[i][j];
      }
    }
  }
  return max;
}

int getNumOfDigit(int num) {
  int count = 0;
  if (num < 0) {
    count++;
  }
  num = abs(num);
  do {
    count++;
    num /= 10;
  } while (num > 0);

  return count;
}

int displayTable(int rows, int cols, int arr[rows][cols]) {
  int max = getMaxNum(rows,cols,arr);
  int maxNumOfDigit = getNumOfDigit(max);
  int currentNumLength;
  int centerIndex = (maxNumOfDigit-1)/2;
  int positionIndex;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      currentNumLength = getNumOfDigit(arr[i][j]);
      positionIndex = centerIndex - (currentNumLength/2);
      for (int k = 0; k < maxNumOfDigit; k++) {
        if (k == positionIndex) {
          printf("%d", arr[i][j]);
          k = k + (currentNumLength-1);
        } else {
          printf(" ");
        }
      }
      printf("|");
    }
    printf("\n");
  }
}

int main() {

  int arr[][5] = {
    {1,2,3,4,5},
    {5,2,10,9,1},
    {5,2,655,5,1},
    {10,10,12,13,11},
    {1,2,99,4,12335}
  };
  int rows = sizeof(arr)/sizeof(arr[0]);
  int cols = sizeof(arr[0])/sizeof(arr[0][0]);
  printf("%d\n", getMaxNum(rows,cols,arr));
  displayTable(rows,cols,arr);
  return 0;
}
