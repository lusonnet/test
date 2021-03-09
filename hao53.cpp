//一， 
#include<stdio.h>

int main()
{
	if(1>2)
	   printf("aaaa\n");
	   printf("bbbb\n");
	   
	return 0;
 }
 
 
 
 /*二 ， 
  #include<stdio.h>

int main()
{
	if(1>2) ;
	   printf("aaaa\n");
	   printf("bbbb\n");
	   
	return 0;
 }
 -------------------------
 一输出结果为 bbbb
 
 二输出结果为 aaaa
              bbbb 
 --------------------------
 总结：
    if默认只能控制一个语句的执行与不执行
	但是但if后有括号时控制一整个语句(表示；前有一个空语句 ） 

*/	             
