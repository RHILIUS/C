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
        curr->prev = head;
        curr->next = head;
      } else {
        tail->next = curr;
        curr->prev = tail;
        tail = curr;
        curr->next = head;
        head->prev = curr;
      }
    }
  } while (val != 0);

  //Display values
  curr = tail;
  do {
    printf("%3d", curr->val);
    curr = curr->prev;
  } while (curr != tail);

  return 0;
}
