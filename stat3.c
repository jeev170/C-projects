#include<stdio.h>
void incre();
int main()
{ int i;
for (i=0; i<3; i++)
incre();
}
void incre()
{ int avar=1;
static int svar=1;
avar++;
svar++;
printf("\n Automatic variable value : %d",avar);
printf("\t Static variable value : %d",svar);
}