#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
/*
define maxsize , true, false(c don't have boolean)
*/
#define MAXSIZE 10
#define true 1
#define false 0
/*stack implementation using linked list as data has next
 next is also data
 */
typedef struct node{
    int data;
    struct node* next;
}stack;
/*
function push()
check if stack is full or not before add any element
add new one in the begin of linked list that represent stack
*/
stack* push(int data);
/*
function pop()
removed and return first element in stack
*/
stack* pop();
/*
function peak()
 return first element in stack
*/
stack* peak();
/*
size_stack();
return size of stack
*/
int size_stack();
/*
isempty();
check stack is empty or not
*/
int isempty();
/*
isfull();
check stack is full or not
*/
int isfull();
/*
show();
print stack elements
*/
void show();


#endif // STACK_H_INCLUDED
