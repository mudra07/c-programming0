/*Name : Mudra Jadhav
UIN : 251C016
Class : civil(fy)
Div : B*/
#include<stdio.h>
extern int xyz =5;
int storage_class()
{
extern int xyz;
printf ("counter is %d \n",xyz);
//abc++;
}
int main ()
{
storage_class();
storage_class();
storage_class();
storage_class();
return 0;
}
