#include<stdio.h>

struct Node{
    int data ;
    struct Node *next;

};
struct Node *head = NULL;
struct Node *creatNode(int value){
    struct Node *newNode = mallocof(sizeof(struct Node));
    if(newNode == NULL){
        printf("memory allocation failed ");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertBag(int value){
    struct Node *newNode = cfeatNode(value);

    newNode->next = head;
    head = newNode;
}
void insertEnd(int value){
    struct Node *newNode = creatNode(value);

    if(head = NULL){
        head = newNode;
        return ;

    }
    struct Node *temp = head ;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp ->next= newNode;
}
void insertPosition(int value , int pos){
    if(pos<1){
        printf("inavalid posistion\n");
        return ;
    }
    if(pos ==1){
        insertBeg(value);
        return ;
    }
    struct Node *temp = head ;
    for(int i= 1 ;i<pos-1 && temp!=NULL;i++){
        temp = temp->next;

    }
    if(temp ==NULL){
        printf("invalid position\n");
        return ;
    }
    struct Node *newNode = creatNode(value);
    newNode-> next = temp->next;
    temp->next = newNode;
}
void display(){
    struct Node*temp=head;
    if(temp==NULL){
    printf("list id empty\n");
    return;
    }
    printf("list :");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp =temp->next;
    }
    printf("nNull\n");
}
int main(){
    int choice, value , pos ;
    do{
        printf("single linklist");
        printf("insert at beginning");
        printf("insert at end ");
        printf("insert at a position");
        printf("display\n");
        printf("Exit");

        printf("enter choice :");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("enter value");
            scanf("%d", &value);
            insertBeg(value);
            break;

            case 2:
            printf("enetr value");
            scanf("%d",&value);
            insertEnd(value);
            break;
             
            case 3:
            printf("enter value");
            scanf("%d%d", &value , &pos);
            insertBeg(value, pos);
            break;

             case 4:
            display();
            break;
            case 0:
            printf("program ended\n");
            break;
            default:
            printf("invalid choice\n");
        }
        
    }while(choice!=0);
    return;
    }
