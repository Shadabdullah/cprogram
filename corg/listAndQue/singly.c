typedef struct node {
  int val ;
  struct node * nxt 
}; node_t;

node_t * head = NULL ;
head = (node_t*)malloc(sizeof(node_t));

if (head== NULL) {
  return 1;
}

head->val = 1 ;
head->nxt =NULL;
