#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int binarytodecimal( int binum,int decinum,int bit)
{
    int bitwt;
    if(binum>0)
    {
        bitwt=binum%10;
        decinum=decinum+bitwt*pow(2,bit);
        binum=binum/10;
        bit++;
decinum=binarytodecimal(binum,decinum,bit);
    }
    return decinum;
}

void main()
{
    int binarynumber,decimalnumber=0, bitweight=0;
    printf("Enter the binary number ");
    scanf("%d", &binarynumber);
    decimalnumber = binarytodecimal(binarynumber,decimalnumber,bitweight);
    printf("%d", decimalnumber);

}