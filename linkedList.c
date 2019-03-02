#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node* link;
}node;

node* createLinkedList(int n);
void displayLinkedList(node* Head);

int main(){
  int n=0;
  node* Head = NULL;
  printf("Enter the number of nodes you want to create:\n" );
  scanf("%d",&n);
  Head = createLinkedList(n);
  displayLinkedList(Head);//printing a individual node

  return 0;
}

node* createLinkedList(int n){
  int i=0;
  node* Head = NULL;
  node* temp = NULL;
  node* p = NULL;

  for(i=0;i<n;i++)
  {
    //Creating a individual isolated Node
    temp = (node*)malloc(sizeof(node));
    printf("Enter the data of the node %d: \n",i+1);
    scanf("%d",&(temp ->data));
    temp->link = NULL;
    if( Head == NULL)
    {
      Head = temp;
    }
    else
    {
      p = Head;
      while(p->link != NULL)
      {
        p = p->link;
      }
      p->link = temp;
    }
  }
  return Head;
}

void displayLinkedList(node* head){
  node* p = head;
  int counter = 0;
  while (p!= NULL) {
    printf("%d ->Node value is %d\t",counter+1,p->data );
    p = p->link;
    counter++;
  }
}
