#include<stdio.h>
int main()
{
    char s1[100],s2[100],i;
    printf("%s",s1);
    fgets(s1,sizeof(s1),stdin);
    for(i=0;s1[i]!=NULL;++i)
    {
        s2[i]=s1[i];
    }
    s2[i]=NULL;
    printf("%s",s2);
}

