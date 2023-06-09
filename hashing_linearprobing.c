//hashing 
//collision using linear probing
#include<stdio.h>
//#include<stdio_ext.h>
#define max 10

int create(int);
void linearprobing(int[],int);
void display(int[]);

void main(){   
    int ch,a[max],num;
    for(int i=0;i<max;i++){
       a[i]=-1;
    }
    while(1){
        printf("\n------------------MENU----------------\n");
        printf("1.insert in hashtable\n");
        printf("2.display\n");
        printf("3.exit\n");
        printf("------------------------------------------\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:linearprobing(a,num);break;
            case 2:display(a);break;
            case 3:return;
            default:printf("invalid choice");
        }
    }
}

int create(int num){
    int key;
    key=num%10;
    return key;
}

void linearprobing(int a[max],int num){
    int flag,i,key,count;
    int ans=1;
    while(ans==1){
        flag=0,count=0;
        printf("enter a 4 digit number");
        scanf("%4d",&num);
        key=create(num);
        if(a[key]==-1){
            a[key]=num;
        }
        else{
            printf("collision detected\n");
            i=0;
            while(i<max){
                if(a[i]!=-1){
                    count++;
                }
                i++;
            }
            if(count==max){
                printf("tree is full..");
                display(a);
                break;
            }
            printf("collision avoided sucessfully...");
                for(i=key+1;i<max;i++){
                    if(a[i]==-1){
                        a[i]=num;
                        flag=1;
                        break;
                    }
                }
                while(i<key&&flag==0){
                    if(a[i]==-1){
                        a[i]=num;
                        flag=1;
                        break;
                    }
                    i++;
                }
        }
        
        printf("do you want to continue???(1/0)\n");
    scanf("%d",&ans);
    }
}

void display(int a[max]){
    int i;
    printf("the hash table elements are : \n");
    for(i=0;i<max;i++){
        printf("%d%d\n",i,a[i]);

    }
}
