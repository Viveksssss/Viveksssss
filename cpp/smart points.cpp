#include<iostream>
#include<memory>
using namespace std;

int main(){
    //***************************************
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    //***************************************

    //*************************************** 
    //unique_ptr

    // int *p = new int(20);............................................
    
    
    // p = nullptr;//p所指向的内存被up接管后，直接将p置空即可，不需要delete
    //1.0std::unique_ptr<int>up(p);
    //2.0std::unique_ptr<int>ups{new int(200)};//c++14新特性，直接初始化
    // std::unique_ptr<int>ups(new int(200));
    // cout << *ups << endl;
    // *up = 30;
    //3.0 std::unique_ptr<int>up2 = std::make_unique<int>(300);
    // std::unique_ptr<int[]>uup = std::make_unique<int[]>(20);
    // for(int i=0;i<20;i++){
    //     uup[i] = i;
    //     cout << uup[i] << " ";
    // }

    // cout << *uup << endl;
    // std::unique_ptr<int>pu = std::move(std::unique_ptr<int>(p));
    // cout << *pu << endl;
    // cout << *p;
    // uup.reset(new int(400));//reset函数可以重新设置指针指向的内存
    //**************************************** 
    

    return 0;
}