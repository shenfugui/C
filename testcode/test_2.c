#include<stdio.h>

void fun(int s[],int t[])

{

 int i,j,k,y=0;

 for(i=0;i<=9;i++)

 {

  k=s[i]/2;


  for(j= 2 ; j<=k; j++)

    if(s[i]%j==0) break;



  if(j>k)

  {

/************found************/

     t[i]=s[i];

  }

 }

 t[y]=0;

}

main()

{   int  i,s[10]={21,17,9,59,77,67,49,99,35,83}, t[10];

    fun(s, t);

    for(i=0;t[i]!=0;i++)printf("%d  ", t[i]);

    printf("\n");

}