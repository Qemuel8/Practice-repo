#include <stdio.h>
#include <string.h>



int main()
{
	 char str[20];
     char ch;
     char str2[20] = "asdasd";
     for(int i = 0;i<5;i++)
     {

         strncat(str2, str, 1);
         
         printf("%c", str[i]);
     }

	 return 0;
}
