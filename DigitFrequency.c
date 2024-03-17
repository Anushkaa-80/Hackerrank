#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


   char num[10]={'0','1','2','3','4','5','6','7','8','9'};
   int j=0,cnt=0;
   char *s;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    s = malloc(1024 * sizeof(char));
    scanf("%s",s);
    s=(char*)realloc(s, strlen(s)+1);
          
for(j=0;j<10;j++)
{
for(int i=0;i<strlen(s);i++)
{
   if(num[j]==s[i])
     {  
          cnt++;
     }
}
 printf("%d ",cnt);
cnt=0;

}
    return 0;
}
