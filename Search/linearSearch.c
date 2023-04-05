#include <stdio.h>

int search(int arr[], int n);
int main() {
  
  //Declaration
  int arr[] = {3,1,5,4,2,8,6,10,9,7};
  int n = sizeof(arr)/sizeof(arr[0]);

  search(arr,n);

  return 0;
}

int search(int arr[], int n) {
  // Linear search process
  int found = 0;
  int num;
  char answer;
  printf("--------------------------------------\n");
  printf("Enter number to search for:\n");
  scanf("%d", &num);

  for (int i = 0; i < n; i++) {
    if (num == arr[i]) {
      printf("Good news, %d is in the list!\n", num);
      found = 1;
    }    
  }
  if (!found) {
    printf("Sorry, %d is not in the list\n", num);
  }

  printf("Do you want to search again, Y or N:\n");
  scanf(" %c", &answer);

  if (answer == 'y' || answer == 'Y') {
    search(arr,n);
  } else {
    printf("End of program!\n");
    return 0;
  }

}
