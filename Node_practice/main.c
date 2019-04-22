//
//  main.c
//  Node_practice
//
//  algorithm and data structure p.142
//  program : Node
//
//  Created by CHA SEUNGJU on 2019. 4. 22..
//  Copyright © 2019 cha. All rights reserved.
//  Created On MacBook Pro 2017
//

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    struct NODE *next;
    int data;
} node;

int main(int argc, const char * argv[]) {
    int i=0;
    node * first = NULL;
    first = malloc(sizeof(node));
    
    node * node1 = malloc(sizeof(node));
    first->next = node1;
    node1->data = 10;
    
    node * node2 = malloc(sizeof(node));
    node1->next = node2;
    node2->data = 40;
    
    node * node3 = malloc(sizeof(node));
    node2->next = node3;
    node3->data = 100;
    node3->next = NULL;
    
    node * cur = first->next;
    
    while(cur != NULL){
        printf("node %d : %d\n\n", i+1, cur->data);
        cur = cur->next;
        i+=1;
    }
    
    free(node3);
    free(node2);
    free(node1);
    free(first);
    
    return 0;
}
