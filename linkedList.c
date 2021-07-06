#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));

    temp->data = data;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}

void printList(){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));

    temp = head;
    printf("List is: ");

    while(temp != NULL){
        printf("-%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    head = NULL;
    for( int i = 1; i <= 5; i++ ){
        int data = i*5;
        Insert(data);
        printList();
    }  

    return 0;
}