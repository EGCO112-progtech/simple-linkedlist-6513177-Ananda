//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char *argv[]) {
    int c=5;
    struct node *head;

    typedef struct node Node;
    typedef Node* NodePtr;

    NodePtr p = (NodePtr) malloc(sizeof(Node));

    head = p;
    p->value = c;

    for (int i = 0; i < 4; i++)
    {
        p->next = (NodePtr) malloc(sizeof(Node));
        p = p->next;
        p->value = c + i + 1;
        p->next = NULL;
    }

    typedef struct node* NodePtr;
    NodePtr tmp=head; 

    for (struct node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->value);
    }
    
    while(tmp != NULL){
        printf("%3d", tmp->value);
        tmp = tmp->next;
    }
    
    printf("\n");

    p = head;
    for (struct node *ptr = p; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->value);
    }
    
    tmp = head;
    while (tmp != NULL)
    {
        struct node *next = tmp->next;
        free(tmp);
        tmp = next;
    }
    
    return 0;
}
