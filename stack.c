#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
stack *root;
int siz=0;
stack* push(int data){
    if(isfull()){
        return NULL;
    }
    else if(siz==0){
        root= malloc(sizeof(stack));
        root->data=data;
        root->next=NULL;
        siz++;
        return root;
    }else{
       siz++;
       stack *one;
       one= malloc(sizeof(stack));
       one->data=data;
       one->next=root;
       root=one;
       return one;
    }
}
stack* peak(){
   if(isempty()){
    return NULL;
   }
   return root;

}
stack* pop(){
    if(isempty()){
        return NULL;
    }
    stack *one;
    one= malloc(sizeof(stack));
    one=root;
    root=root->next;
    siz--;
    return one;

}
void show(){
    if(isempty()){

    }else{
         printf("///////////////////////////////////// \n");
         stack *one=root;
         while(one->next!=NULL){
            printf("%d  ",one->data);
            one=one->next;
          }
         printf("%d \n",one->data);
         printf("///////////////////////////////////// \n");
    }


}
int isfull(){
   if(MAXSIZE<siz){
        printf("stack is full \n");
        return true;
    }else{
        return false;
    }

}
int isempty(){
   if(siz==0){
        printf("stack is empty \n");
        return true;
    }else{
        return false;
    }

}
int size_stack(){
    return siz;
}
