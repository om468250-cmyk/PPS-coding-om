#include <stdio.h>
int main(){
int n;
printf("Enter number of students");
scanf("%d", &n);
for(int i=0; i=0; i++){
int sub[5] , mks=0;
for(int j=0; j<5; j++)
{
printf("Enter sub%d: \n", j+1);
scanf("%d", &sub[j]);
mks += sub[j];
}
float percent = (float) mks/5;
printf("--Marksheet--");
for(int j=0; j<5; j++)
{
printf("sub%d = %d\n", j+1, sub[j]);
}
if (percent >= 40)
{
printf("Result: pass");
}
else 
{
printf("Result: fail");
}
}return 0; 
} 
