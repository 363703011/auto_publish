#include<iostream>
#include "MyMath.h"

using namespace std;

int main()
{
    MyMath mymath;
    int p[17] = {1,10,2,5,4,9,3,6,8,7,100,68,93,94,78,34,11};
    int *t = mymath.bubbleSort(p,17);
    for(int i=0;i<10;i++){
         cout<<t[i]<<endl;
    }
    int index=mymath.dichotomyFind(t,17,94);
    cout<<index<<":"<<t[index]<<endl;
    
    return 1;
}

