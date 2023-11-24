#include <stdio.h>
#include <string.h>

int main()
{
   char a[16];
   
   printf("please enter a password:");
   scanf("%15s", a);
   
   int upperCaseCount=0;
   int lowerCaseCount=0;
   int c=0;
   int d=0;
   int length= strlen(a);
   
   for(int i=0; i < length; i++) {
       if (a[i] >= 'A' && a[i] <= 'Z'){
           upperCaseCount++;
       }
       else if (a[i] >= 'a' && a[i] <= 'z'){
           lowerCaseCount++;
       }
       else if (!(a[i] >= 'a' && a[i] <= 'z') && !(a[i] >= 'A' && a[i] <= 'Z')){
           c++;
       }
       else if (a[i] >=8 && a[i] <=16){
           d++;
       }
   }
   
   if (upperCaseCount>0,lowerCaseCount>0,c>0,d>0){
       printf("素晴らしいパスワードですね！");
   }
   
   else
   {
       printf("もう一回作り直し！");
   }
   
   return 0;
}
