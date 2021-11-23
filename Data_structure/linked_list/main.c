#include <stdio.h>
#include <stdlib.h>

//define linked list  node
typedef struct node {
    int val;
    struct node * next ;
}node_t;

//Iterating over a list (print all elements)
void print_list(node_t * head){
    node_t * current = head;
    int no=1;                       //to count the elements
    while(current != NULL)  {
    printf("the value of element no %d is %d \n",no,current->val );
    no++;
    current=current->next;
    }
}

// Adding an item to the beginning of the list
void push(node_t ** head, int val) {
    node_t * new_node;
    new_node = (node_t *) malloc(sizeof(node_t));    //create

    new_node->val = val;                              // value
    new_node->next = *head;                           //item has address of (the old fist item)
    *head = new_node;                                 //head point to the first item(new item)
}
int main()
{
    //create 2 nodes
    //point to the first element
    node_t * head = NULL ;
    head = (node_t*) malloc(sizeof(node_t));
    if (head ==NULL) {                          //check if malloc returned a NULL value or not.
            return 1;
    }
        //first
    head->val=1;
    head->next=(node_t*) malloc(sizeof(node_t));

    //second
    head->next->val=2;
    head->next->next=NULL;

    //call print function
   print_list(head);

   //call (add value 3 at the begin)
  push(&head,3);

    //print the three elements (new and 2 old 3 1 2)
  print_list(head);

    return 0;
}
