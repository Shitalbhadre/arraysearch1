#include<stdio.h>
void main()
{
    int i,num;
    int a[10];

    printf("Enter the array elements:\n");
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    printf("array elements are:\n");
    for(i=0; i<10; i++){
        printf("%d\n", a[i]);
    }

    printf("Enter the number which you want to search:");
    scanf("%d",&num);
 for(i=0; i<10; i++){
    if(num == a[i]){
       printf("Number is present.");
    }
 }
 printf("Number is not present.");
}
