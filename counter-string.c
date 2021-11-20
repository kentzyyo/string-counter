#include <stdio.h>
 
int main()
{
    char enterString[1000]; 
    int index,alphabets=0,numeric=0,chars=0;
 
    printf("Enter a string: ");
    gets(enterString);

    for(index=0;enterString[index];index++)  
    {
        if((enterString[index]>='a' && enterString[index]<='z') || (enterString[index]>='A' && enterString[index]<='Z') )
        alphabets++;
        else if(enterString[index]>='0' && enterString[index]<='9')
        numeric++;
        else
        chars++;
 	}
    printf("Numeric: %d\n",numeric);
    printf("Alphabets: %d\n",alphabets);
    printf("Special characters: %d",chars);
    
    return 0;
}
