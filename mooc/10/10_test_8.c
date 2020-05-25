//颠倒句子中的单词顺序

#include<stdio.h>
#include<string.h>
#define N 100
char *r(char *str,int len);
char *rs(char *str);
int main()
{
	char str[N];
	char n;
	printf("Input a sentence:");
	gets(str);
	n=str[strlen(str)-1];
    str[strlen(str)-1]='\0';
    printf("%s%c\n",rs(str),n);
	return 0;
}
char *rs(char *str)
{
	char *pbegin=str;
	char *pend=str;
	if(str==NULL)
	return str;
	r(str,strlen(str));
	while(*pend!='\0')
	{
		while(*pend!='\0'&&*pend!=' '){
			pend++;}
		r(pbegin,pend-pbegin);
		if(*pend=='\0')
			break;
		pend++;
		pbegin=pend;
	}
   return str;
}
char *r(char *str,int len)
{
	char *plast=str+len-1;
	char *pbegin=str;
	char temp;
	if(str==NULL||len<=0)
		return str;
	while(pbegin<plast){
		temp=*pbegin;
		*pbegin=*plast;
		*plast=temp;
		pbegin++;
		plast--;
	}
	return str;
}
