#include <stdio.h>
#define size 4

int top=-1, a[size];
void checkstack();
void display();
void push();
void pop();

int main() {
 int n,i;
 while(1){
 
    printf("\n\npress 1 -- pop\n");
    printf("press 2-- display\n");
    printf("press 3-- push\n");
    scanf("%d",&n);
    
    
    
    switch(n){
        
          
        case 1:
        pop();
        break;
        
        
         case 2:
        display();
        break;
        
        
        case 3:
        push();
        break;
        
        default:
        printf("enter valid choice");
       	break;
        
        
       
    }}
    
    return 0;
}


    
  void push(){
      int n,i;
      if(top==size-1){
      	printf("underflow");
	  }
	  else{
	  	printf("\nenter elemement to enter");
	  	 scanf("%d",&n);
        top++;
        a[top]=n;
       printf("sucessfully pushed at top of stack");
       }
        
    }    
    
    void display(){
        int i;
        
        if(top==-1){
            printf("\nyour stack is empty\n");
        }
        
        else{
        	printf("your current stack is\n");
for(i=0;i<=top;i++){
    printf("%d\t",a[i]);}
        }
    }
    
    
    void pop(){
        if(top==-1){
        	printf("underflow");}
			
			else{
				top--;
				printf("\nsucessfully poped last element");
			}		
    }
    
