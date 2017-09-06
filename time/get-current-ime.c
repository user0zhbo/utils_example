/*************************************************************************
	> File Name: get-current-ime.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月06日 星期三 11时17分26秒
 ************************************************************************/

#include <stdio.h>    
#include <sys/time.h>      
long getCurrentTime()    
{    
   struct timeval tv;    
   gettimeofday(&tv,NULL);    
   return tv.tv_sec * 1000 + tv.tv_usec / 1000;    
}    
    
int main()    
{    
    printf("c/c++ program:%ld\n",getCurrentTime());    
    return 0;    
}  
