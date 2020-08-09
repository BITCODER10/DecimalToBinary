#include <stdio.h>
#include <stdlib.h>

int BinaryConversion (int User_Input)
{
    int Original = User_Input, Remainder, arr[10], count =0, i;
    while(User_Input>0){
        Remainder = User_Input%2;
        User_Input = User_Input/2;
        arr[count++] = Remainder;
    }
    printf("\n Binary of number %d is : ",Original);
    for (i=count-1; i>=0; i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

int main()
{
    printf("*********** Decimal To Binary Conversion ******************* \n")
    int User_Input=0 ;
    printf("Please enter the number to convert into Binary  : ");
    scanf("%d",&User_Input);
    BinaryConversion(User_Input);
    printf("\n *********** End of program ******************* \n")
}
