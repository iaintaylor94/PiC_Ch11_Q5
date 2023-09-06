// Program to create and print a doubly linked list

#include <stdio.h>

// Define Structures
struct dll {
struct dll *previous;
int value;
struct dll *next;
};

// Declare Functions
struct dll *printList (struct dll *);

int main(void) {

  // Devclare dlls
  struct dll *linkHead;
  struct dll n1, n2, n3;

  // Initialize values
  n1.value = 1;
  n2.value = 2;
  n3.value = 3;

  // Link entries
  linkHead = &n1;
  n1.previous = linkHead; n1.next = &n2;
  n2.previous = &n1; n2.next = &n3;
  n3.previous = &n2; n3.next = (struct dll *) 0;

  // Print list
  printList (linkHead);
  
  return 0;
}

// Define Functions
struct dll *printList (struct dll* current) {
  if (current->next == (struct dll*) 0) {
    printf ("%d\n", current->value);
    return (struct dll*) 0;
  }
  else {
    printf ("%d\n", current->value);
    printList (current->next);
    return (struct dll*) 0;
  }
}