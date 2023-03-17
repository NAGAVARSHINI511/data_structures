#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

typedef struct node* NODE;

NODE head, tail;

void create();
void addNode(int ele);
void search();
void display();

void main() {
    int choice;
    while(1) {
        printf("\nEnter\n1. Create a Singly Linked List\n2. Search\n3. Display Elements of the Singly Linked list\n4. Exit\n");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: create();
            break;
            case 2: search();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default:printf("\nInvalid choice\n");
        }
    }
}

void create() {
    int n, ele;
    printf("\nEnter the number of nodes : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
    printf("\nEnter the elements : ");
    scanf("%d",&ele);
    addNode(ele);
    }
}

void addNode(int ele) {
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    temp->info=ele;
    temp->link=NULL;
    if(head == NULL) {
        head = temp;
        tail = temp;
    }else {
        tail->link = temp;
        tail = temp;
    }
}

void search(int item) {
    int ele, position, flag=0;
    NODE cur;
    if(head == NULL) {
printf("\nList is Empty.\n");
return;
    } else {
        cur = head;
        printf("\nEnter the element to be searched :");
        scanf("%d",&ele);
        while(cur != NULL) {
        if(cur->info == ele) {
    printf("%d found in the List.",cur->info);
    flag =1;
        }
        cur=cur->link;
    }
    }
    if(flag == 0) {
printf("%d not found.",ele);
    }
return;
}

void display() {
    NODE cur = head;
    if(head == NULL) {
    printf("\nList is Empty.\n");
    return;
    } else {
        printf("Elements of the List are : ");
    while(cur!= NULL) {
    printf("%d\t",cur->info);
    cur=cur->link;
    }
    }
}
