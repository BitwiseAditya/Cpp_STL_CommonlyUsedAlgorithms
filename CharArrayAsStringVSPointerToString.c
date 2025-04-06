#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="abcdef";
    s1[0]='x';
    //s1++; Error
    printf("s1= %s\n",s1);
    char *s2="abcdef";
    // s2[0]='x'; // Error
    s2++;
    printf("s2= %s\n",s2);   
    //s1="new string"; Error   
    s2="new string";    
    printf("s2= %s\n",s2);  
    printf("sizeof(s1)=%d\n",sizeof(s1)); // 7  (6+1)
    printf("sizeof(s2)=%d\n",sizeof(s2)); // 4  (32 bit) 8 (64 bit)  
    const char*s3="ghijk";
    // s3[0]='y'; // Error  
    return 0;
}