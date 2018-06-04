#include<stdio.h>
int FindSetBitInString(char *);
int main()
{
    char String[20];
    scanf("%s", String);
    
    printf("Entered string is :%s\n", String);
    
    printf("Set bit count is:%d\n", FindSetBitInString(String));
    return 0;
}
int FindSetBitInString(char *str)
{
    char Count;
    int SetBit=0, ResetBit=0;;

    abc:
    if((*str)!='\0')
    {
        for(Count=0;Count<8;Count++)
            if(((*str)>>Count)&1)
                SetBit++;
            else
                ResetBit++;
        str++;
        goto abc;
    }
    else
            return (SetBit<<16)&(SetBit|ResetBit);
}
