#include <stddef.h>

// For the C version of the kata, given certain limitations
// of the language you will have to use an array of linked lists
// as opposed to the multi-dimensional array in the original kata
// spec.

// For example, given the call of the format: 
// counter_effect("1250")
//
// The resulting array looks as follows (top to bottom view):
// nodes[0] = 0 -> 1
// nodes[1] = 0 -> 1 -> 2
// nodes[2] = 0 -> 1 -> 2 -> 3 -> 4 -> 5
// nodes[3] = 0
//
// For an example see the sample test code.

struct Node
{
    int value;
    struct Node *next;
};

struct Node * counter_effect(const char *hit_count, size_t *p_result_count)
{
  *p_result_count = strlen(hit_count);
  char chr;
  int i = 0;
  struct Node* result = (struct Node*)malloc((*p_result_count) * sizeof(struct Node));
  while(*(hit_count + i) != '\0'){
    int currentNum = (int) hit_count[i] - 48;
    struct Node node = {.value = 0,.next=NULL};
    struct Node* current = &node;
    int j = 1;
    for(; j <= currentNum; j++){
      struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
      current->next = newNode;
      current = current->next;
      current->next = NULL;
      current->value = j;
    }
    result[i++] = node;
  }
  return result;
}
