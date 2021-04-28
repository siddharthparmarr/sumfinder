#include<stdio.h>

int main () {

int n;

printf("enter the number of the sum you want\n");
scanf("%d",&n);

int sum = (n*n+n)/2;

/*
 another way but not good 
int sum = 1;

for (int i=1;i<=n;i++){


sum *=i;

}
*/
printf("The sum is %d", sum);


return 0;
}
