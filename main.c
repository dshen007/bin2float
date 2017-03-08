#include <stdio.h>

void bin2float(unsigned char *s)
{
    float fValue;
    unsigned char *pUch;
    
    pUch=(unsigned char *)&fValue;

    for (int i=0;i<4;i++)
    {
        pUch[i]=s[i];
       // printf("%c\n", pUch[i]);
    }
    printf("\n%f\n",fValue);
    
}


int main()
{
    
    unsigned char Array[4]; //定义32位二进制数据
    Array[0]=0x00;
    Array[1]=0x00;
    Array[2]=0x48;
    Array[3]=0xc1;
    
    bin2float(Array);//调用转换函数
    
}
