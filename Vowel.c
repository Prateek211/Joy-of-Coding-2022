//Separating vowels and consonants from a sentence
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[100],v[100],c[100],i=0,j=0,k=0;
    printf("Enter the sentence:\n");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            v[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
        i++;
    }
    v[j]='\0';
    c[k]='\0';
    printf("Vowels:%s\n", v);
    printf("Consonants:%s", c);
    return 0;
}
