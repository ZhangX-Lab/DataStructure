#include "main.h"

/*  1、指针的初始化，需要确定指向。
    2、入口参数为指针形参，可修改实参。不太准确，若是指针类型做实参，想要修改指针指向，必须是二维指针；因为形参本身是对实参的拷贝，
        只有拷贝地址才能修改其值。对于指针来说，形参为一维指针，实参也为一维指针，拷贝的是指针变量，可修改的是指针所指向的变量；
        倘若想要修改指针指向，则必须让形参为二维指针，实参为指针地址。
    3、数组a[5]  *(a+3) == a[3]。
    4、字符串在赋值给char型数组时，若不是在初始化时，需要用到strcpy。
    5、 指针类型的大小是固定的（无论该指针指向哪种数据类型），在32位系统中为4字节；在64位系统中为8字节。
    6、所谓的字节对齐，其实不过是结构体中的总占字节数是最大数据类型倍数，不满足则向上取整，多出的空间不做处理，内部数据存储是连续的。
    7、动态分配内存必须是需要通过free释放，否则，会一直存在，直到程序运行完。
*/
/*
一级指针和const结合的方式：
const int *p;        修饰int即*p 所指向的内容无法改变
int const *p;        修饰int即*p 所指向的内容无法改变
int *const p;        修饰int* 即*p  不能改变指向
const int *const p;  修饰int和int*  指向和所指向的内容都不能改变
*/

struct arr
{
    int num;
    char a[20];

};//所谓的字节对齐，其实不过是结构体中的总占字节数是最大数据类型倍数，不满足则向上取整，多出的空间不做处理，内部数据存储是连续的

int main()
{
    struct arr test = {};
    printf("%lu\n",sizeof(test));
    return 0;
}
