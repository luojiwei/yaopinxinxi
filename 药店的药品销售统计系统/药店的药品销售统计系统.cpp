#include "pch.h"
#include <iostream>
//药品
typedef structnode
{ charnum[4];     /*药品编号*/
  char name[10];   /*药品名称*/
  float price;     /*药品单价*/
  int count;      /*销售数量*/
  float sale;      /*本药品销售额*/
}DataType;

int main()
{
    std::cout << "Hello World!\n"; 
}
