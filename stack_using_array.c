#include<stdio.h>

int top=-1;
int stack[200];
void push(){
if(top==199){
printf("Stack is full");
}
else{
int value;
printf("Enter the value you want to enter at the top of the  stack");
scanf("%d",&value);
stack[++top]=value;
}


}

void pull(){
int temp;
if(top==-1){
printf("Stack is empty");

}
else{
temp=stack[top--];
printf("%d",temp);
}

}

void display(){
for(int i=0;i<=top;i++){
printf("%d",stack[i]);
}

}


int main(){
	while(1){
printf("Press 1 to enter the value in stack\n");
printf("Press 2 to delete the item from queue\n");
printf("Press 3 to display the elements of stackfrom bottom to top\n");

int choice;
scanf("%d",&choice);

switch(choice){
case 1:
   push();
break;

case 2:
  pull();
  break;
case 3:
  display();
break;




}




}
}






