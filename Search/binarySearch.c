#include<stdio.h>
#include<conio.h>

int i,j, first, last, mid, n, num,temp;
int arr[20];
char ans = 'Y';
int main() { 

 printf("How many array integer values to be entered? ");
 scanf("%d", &n);
 printf("Enter array values ....\n");
 for (i=0; i<n; i++) {
  scanf("%d", &arr[i]);
 }

 // Sort array values in ascending order using Balloon sort
 for(i=0; i<n-1; i++) {
  for (j = i+1; j<n; j++) {
    if (arr[i] > arr[j]) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
 }

 // Print sorted values
 printf ("Sorted values\n");
 for (i=0; i<n; i++) {
  printf("%3d", arr[i]);
  printf ("\n");
 }

 // Binary search process
 while (ans == 'Y' || ans == 'y') { 
  printf("Enter a number to be searched: ");    
  scanf("%d", &num);                            
  first = 0;                                    
  last = n-1;                                   
  mid = (first+last)/2;                         
  while (first <= last) {
    if (arr[mid] < num) {     
      first = mid +1;
    } else if ( arr[mid] == num) { 
      printf("%d is in the list!\n", num);
      break;
    } else {
      last = mid- 1;
    }
    mid = (first+last)/2;
  }
  if (first > last) {    
    printf("Not found!\n");
    printf("\nWould you like to search another number? ");
    scanf("\n");
    scanf("%c", &ans);
  }


}
 printf("End of program!");

 return 0; 
}
