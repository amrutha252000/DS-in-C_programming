#include<stdio.h>
#include<stdlib.h>
int i,n,a[100];
void main(){
    int c;
     do{
        printf("----Menu----\n");
        printf("1.create\n2.display\n3.Insert\n4.delete\n5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&c);
        switch(c){
            case 1:create();
                break;
            case 2:display();
                break;
            case 3:insert();
                break;
            case 4:delete();
                break;
            case 5: exit(0);
                break;
            default: printf("invalid choice\n");
                break;
        }
    }while(c!=5);
}

void create(){
    printf("Enter the size of array elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    }

void display(){
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    }

void insert(){
    int pos,ele;
    printf("Enter the position for new element:\n");
    scanf("%d",&pos);
    pos=pos-1; //matching the index value
    printf("Enter the element to be entered:\n");
    scanf("%d",&ele);
    for(i=n-1;i>=pos;i--)
    a[i+1]=a[i]; //pushing the elements to nxt position
    a[pos]=ele;
    n=n+1; //increasing index value
    }

void delete(){
    int pos,ele;
    printf("Enter the position to delete the element:\n");
    scanf("%d",&pos);
    pos=pos-1; //matching the index value
    ele=a[pos];
    for(i=pos;i<n-1;i++)
    a[i]=a[i+1];
    n=n-1;
    printf("The deleted element is:%d\n",ele);
    }