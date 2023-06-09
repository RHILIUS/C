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
        curr->next = head;
      } else {
        tail->next = curr;
        tail = curr;
        curr->next = head;
      }
    }
  } while (val != 0);

  curr = head;
  do {
    printf("%3d", curr->value);
    curr = curr->next;
  } while (curr != head);

  return 0;
}
