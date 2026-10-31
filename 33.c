
#include <stdio.h>

int main()
{
    char p;
    scanf("%c",&p);
    printf("input = %c\n",p);
    if(p=='A'||p=='E'||p=='I'||p=='O'||p=='U'||'a'==p||p=='e'||p=='i'||'o'==p||p=='u'){
        printf("vowel");
        
    }else{
        printf("consonenet");
    }

    return 0;
}
