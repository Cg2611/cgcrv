#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int binary_to_decimal(int binum,int decnum,int bit)
{
 int bitwt;
 if(binum>0)
 {
 bitwt=binum%10;
 decnum=decnum+bitwt*pow(2,bit);
 binum=binum/10;
 bit++;
 decnum=binary_to_decimal(binum,decnum,bit);//recursion taking place.
 }
 return decnum;
}
void main ()
{
 int decimalnum=0,binarynum,bitweight=0;
 printf("Enter the binary number\n");
 scanf("%d",&binarynum);
 decimalnum=binary_to_decimal( binarynum,decimalnum,bitweight);
 printf("%d in binary %d",decimalnum, binarynum);
} 