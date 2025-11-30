/*Name : Mudra Jadhav
UIN : 251C016
Class : civil(fy)
Div : B*/
#include<stdio.h>
extern int xyz =5;
int storage_class()
{
static int abc =0;
printf("counter is %d \n", abc);
}
int main ()
{
storage_class();
storage_class();
storage_class();
storage_class();
return 0;
}
