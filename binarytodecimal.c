#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int binary_to_decimal(int binum, int decinum, int bit)
{
    int bitwt;
    if(binum>0)
    {
        bitwt=binum%10;
        decinum=decinum+bitwt * pow (2,bit);
        binum=binum/10;
        bit ++;
        decinum= binary_to_decimal(binum, decinum, bit);

    }
    return decinum;
}

void main()
{
    int binum1, decinum1=0,bitwt=0;
    printf("Enter the binary number\n");
    scanf("%d", &binum1);
    decinum1= binary_to_decimal (binum1, decinum1,bitwt);
    printf("The conversion is %d",decinum1) ;

}