#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int val;
  struct Node *prev;
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
      curr->val = val;
      
      if (head == NULL) {
        head = curr;
        tail = curr;
        curr->prev = NULL;
        curr->next = NULL;
      } else {
        tail->next = curr;
        curr->prev = tail;
        tail = curr;
        curr->next = NULL;
      }
    }
  } while (val != 0);

  curr = tail;
  do {
    printf("%3d", curr->val);
    curr = curr->prev;
  } while (curr != NULL);

  return 0;
}
