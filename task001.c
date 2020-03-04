/******************************************************************************
Write a program to give the following output for the given input:
Eg 1: Input: a1b10
       Output: abbbbbbbbbb
Eg 2: Input: b3c6d15
          Output: bbbccccccddddddddddddddd
The number varies from 1 to 99
*******************************************************************************/

#include <stdio.h>
#include <string.h>

void main()
{
  char input[10];
  int i,j,num,n,k;
  scanf("%s", input);
  
  for(i=0; input[i]!='\0'; )
  {
      for(j=i+1; input[j]>='0'&& input[j]<='9'; j++)
      {
          num = (input[j]>='1' && input[j]<='9') ? (int)input[j]-48 : 0;
          n = (j==i+1) ? num :(n*10) + num;
      }
      
      for(k=0; k<n; k++)
      {
          printf("%c", input[i]);
      }
      i=j; 
  }
}
