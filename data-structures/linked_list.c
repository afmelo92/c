#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} Node;

Node *create_node(int data) {
  Node *tmp = malloc(sizeof(Node));

  tmp->data = data;
  tmp->next = NULL;

  return tmp;
}

Node *insert_at_head(Node **head, Node *node_to_insert) {
  node_to_insert->next = *head;
  *head = node_to_insert;
  return node_to_insert;
}

Node *find_node(Node *head, int data) {
  Node *tmp = head;
  while(tmp != NULL) {
    if(tmp->data == data) return tmp;
    tmp = tmp->next;
  }

  return NULL;
}

void *insert_after_node(Node *node_to_insert_after, Node *newnode) {
  newnode->next = node_to_insert_after->next;
  node_to_insert_after->next = newnode;
}

void print_linked_list(Node *head) {
  Node *tmp = head;

  while(tmp != NULL) {
    printf("%d", tmp->data);
    tmp = tmp->next;
    if(tmp != NULL) {
      printf(" - ");
    }
  };

  printf("\n");
}

void main(void) {

  Node *head = NULL;
  Node *tmp;

  for (int i = 0; i < 25; i++)
  {
    tmp = create_node(i);
    insert_at_head(&head, tmp);
  }
  
  tmp = find_node(head, 13);
  insert_after_node(tmp, create_node(75));
  
  
  print_linked_list(head);
}