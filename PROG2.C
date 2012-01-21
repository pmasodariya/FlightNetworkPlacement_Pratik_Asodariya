#include<stdio.h>
#include<stdlib.h>

struct node{
  int count;
  int delete;
  struct node *dir;
    
};
struct node *circle,*first,*temp;
void main(){
  int i,j,k,bool=1,count,number=0,add;
  
  first=(struct node *)malloc(sizeof(struct node));
  circle=(struct node *)malloc(sizeof(struct node));
  printf("ENTER KIDS NO : ");
  scanf("%d",&j);
  printf("GIVE NO X: ");
  scanf("%d",&k);
  if(k>j){    
    printf("NUMBER X > KIDS..\n PLEASE ENTER ANOTHER NO..:");
    exit(0);
  }
 for(i=1;i<=j;i++){
   if(bool){
     circle->count=i;
     circle->delete=0;
      bool=0;
      first=circle;
      continue;
  }
   temp=circle;
   circle=(struct node *)malloc(sizeof(struct node));
   circle->count=i;
   circle->delete=0;
   temp->dir=circle;
         
}
  circle->dir=first;
  while(count!=1){
    add=1;
    while(add!=k){
      while(first->delete==1){
printf("\n%d MISSED ",first->count);

first=first->dir;
      }
if(add==1){
number=first->count;

}
if(add==2){
if(number==first->count){
count=1;
break;
}
  
}
add=add+1;
printf("\n%d ADDED ",first->count);

first=first->dir;
      }
    while(first->delete==1){
printf("\n%d MISSED ",first->count);

first=first->dir;
      }
      if(add==2){ 
if(number==first->count){
count=1;
break;
}}
    if(count!=1){
      first->delete=1;
    printf("\n%d REMOVE ",first->count);
    first=first->dir;
      
    }
  }
  printf("\n\n\t CONGRATULATIONS!!\n THE WINNER IS OF THE POSITION %d WON...\n ",number);
  
}

