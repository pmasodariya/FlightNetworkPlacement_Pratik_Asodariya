#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *dir;
};
struct node *ulimit=NULL,*temp,*pop,*first,*add;
void main()
{
    int value=-1,n=0,selection,bool=1;
 pop=(struct node *)malloc(sizeof(struct node));
    while(1){
      
       printf("\n1) PUSH \n2) POP \n3) EXIT \n");
        printf("\n\tENTER YOUR SELECTION: ");
        scanf("%d",&selection);
        switch(selection){
	  case 1:{
            temp=(struct node *)malloc(sizeof(struct node));
            printf("\tENTER VALUE:  ");
            scanf("%d",&n);
	    if((value+1)==n){
	      if(n>=10){
		printf("VALUE IS LESS THAN 9……!!!");
	      break;
	      }
            temp->value=n;
            temp->dir=ulimit;
            ulimit=temp;
	    value=value+1;
	    printf("PUSHED %d",value);
	    break;      
	    }else
	    {
	      printf("\n YOU HAVE ENTERED WRONG SEQUENCE..!!\n PLEASE ENTER THE VALUES IN CORRECT SEQ.. :%d)\n",value+1);
	        
	    }
	    break;
	}
	  case 2:{
	    
            if(ulimit!=NULL)
            {
	        printf("\nTHE POPPED VALUE IS: %d\n",ulimit->value);
		
		
		pop->dir=ulimit;
		ulimit=ulimit->dir;
		pop=pop->dir;
		pop->dir=NULL;
		
		printf("POPPED OUT VALUES : ");
		if(bool){		  
		  first=(struct node *)malloc(sizeof(struct node));
		  first=pop;
		  add=first;
		  bool=0;
		}
		 
		while(first!=NULL)
            {
                printf("%d->",first->value);
                first=first->dir;
            }
            first=add;
            }
            else
            {
                printf("\nSTACK UNDERFLOW..!!");    
            }
	
	    break;
	  }
	  
	  case 3: 
	    exit(0);
	}
    
  
    }
}

