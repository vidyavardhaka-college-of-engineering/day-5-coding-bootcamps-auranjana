//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>

int main()
{
	char str[10],temp,r[10];
  int i=0,n;
  printf("enter the string");


	scanf("%s", str);
  strcpy(r,str);
  n=strlen(str)-1;

	//Write your code here
  while(i<n)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    i++;
    n--;
  }
  printf("The reversed string is %s\n",str);


  
	if(strcmp(r,str)==0)
    printf("%s is a pallindrome\n",str);
    else 
    printf("%s is not pallindrome",str);
  
	return 0;
}
