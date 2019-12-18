#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    while(true)
    {
        printf("$"); //打印命令提示符
        if('p' == getchar()) //读取命令；分析命令
            printf("Hello ,I am a shell .\n");//执行命令
    }
    return 0;
}
