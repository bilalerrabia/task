#include <stdio.h>   // bilal from morocco.
#include <stdlib.h>  // هو اكيد في خطأ بس مش عارف فين
typedef struct nd{   
    char* valeur;
    struct nd* next;
    struct nd* prev;
}node;
  node* inserting_at_last(node*head,node* LastElement,char *vl){
        node* new=malloc(sizeof(node));
        LastElement->next=new;
        new->valeur=vl;
        new->prev=LastElement;
        new->next=head;
        return new;} 
  void print_cdll(node*head,node*LastElement){
        while(head->next!=LastElement->next){
                printf("%s, ",head->valeur);
                head=head->next;
        }printf("\n");
        while(head->prev!=LastElement->next){
                printf("%s, ",head->valeur);
                head=head->prev;
        }
    }
  
int main(){
    char* t[]={"bilal","amina","marawanbablo","w","H.BIL"};
      node*   head=(node*)malloc(sizeof(node));
              head->valeur="ff.ff.ff";
      node*   LastElement=head;
         LastElement=inserting_at_last(head,LastElement,t[0]);
         LastElement->next=head;
    for(int i=0;i<5;i++)
         LastElement=inserting_at_last(head,LastElement,t[i]);
         head->prev=LastElement;
         LastElement->next=head;
    print_cdll(head,LastElement);
}
