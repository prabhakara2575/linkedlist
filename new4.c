#include <stdio.h> 
#include <stdlib.h> 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
int embedd(struct Node* n) 
{ 
    int count=0;
    while (n != NULL) { 
        printf("%d",n->data);
        n = n->next;
	count++;	
    return count; 
    } 
} 
  

int main() 
{ 
    int result;
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
  

    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 
  
   
  
    head->data = 1; 
    head->next = second; 
    second->data = 2; 
    second->next = third; 
    third->data = 3; 
    third->next = NULL; 
    result = embedd(head);
    printf("%d",result);
  
    return 0; 
} 

