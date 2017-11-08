#include <iostream>
#include "MyMath.h"
using namespace std;

int MyMath::dichotomyFind(int *p, int len, int find)
{
    int *t=p;
    int left=0;
    int right=len-1;
    int middle= (int)(len/2);
    while(left<right)
    {   
        if(t[middle]==find)
        {
            return middle;
        }
        else if(t[middle]<find)
        {
            left=middle;
        }
        else
        {
            right=middle;
        }
        middle=left+(int)((right-left+1)/2);
    }
    return -1;
}
int* MyMath::bubbleSort(int *p, int len)
{
    int *t=p;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(p[j] > p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    return t;
}

