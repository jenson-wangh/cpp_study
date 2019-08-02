//#include<iostream>  //-------------------------------------------------------------------------------------------------------
//using namespace std;
//int max(int,int);
//int main(int argc,char* argv[]){
//    //  条件注释用法以及bool和wchar_t的长度,速记整形变量的定义
//#if 1
//    cout<<"sizeof(bool)="<<sizeof(bool)<<" sizeof(wchar_t)="<<sizeof(wchar_t)<<endl;    //bool -1,wchar_t -2
//    cout<<(int)true<<endl;
//#else
//    cout<<"hello else"<<endl;
//#endif
//    unsigned short a=12;    //速记整形变量的定义
//    cout<<a<<endl;
//    //  类型限定符的使用
//    volatile int i=90;
//    cout<<i<<endl;
//    //  左移右移运算,带符号
//    cout<<(-3<<2)<<endl;
//    cout<<(-12>>5)<<endl;
//    cout<<max(2,7)<<endl;
//    return 0;
//}
//int max(int a=3,int b=2){   //有默认值的函数
//    int max;
//    (a>b)?(max=a):(max=b);
//    return max;
//}
#include<iostream>  //-------------------------------------------------------------------------------------------------------
#include<cmath>
using namespace::std;
int main(int argc,char* argv[]){
    cout<<sin(3.14/2)<<endl;
    cout<<cos(3.14)<<endl;
    cout<<tan(3.14/4)<<endl;
    cout<<log(2.71)<<endl;
    cout<<pow(2,3)<<endl;
    return 0;
}
