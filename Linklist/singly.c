#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *next;
} Node;

int main() {
  Node *head = NULL;
  Node *tail;
  Node *curr;

  int val;
  do {
    printf("Enter value: ");
    scanf("%d", &val);
    
    if (val != 0) {
      curr = (Node*)malloc(sizeof(Node));
      curr->value = val;
      if (head == NULL) {
        head = curr;
        tail = curr;
        curr->next = NULL;
      } else {
        tail->next = curr;
        tail = curr;
        curr->next = NULL;
      }
    }
  } while (val != 0);

  // Display linkedlist
  curr = head;
  do {
    printf("%3d", curr->value);
    curr = curr->next;
  } while (curr != NULL);

}
