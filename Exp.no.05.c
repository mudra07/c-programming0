/*Name : Mudra Jadhav
UIN : 251C016
Class : civil(fy)
Div : B*/
#include<stdio.h>
int factorial (int num)
{
if (num == 1||num ==0)
{
return 1;
}
else
{
return num* factorial (num -1);
}
}
int main ()
{
printf(" factorial is %d ", factorial (5));
return 0;
}
