// #include<bits/stdc++.h>
#include<iostream>
#include<cstdint>


using namespace std ;


int64_t getSum(int n){
    int64_t itr = 0 , sum {};
    while(++itr <= n){
        if(itr%3 ==0 || itr%5 ==0)
            sum+=itr ;
    }
    return sum ;
}
/*
9236548751
1076060070465310994
*/

/*

n/2 * (a1 + an )


*/

int64_t constSumget(int limit , int num1 , int num2){
    int64_t num3 = num1 * num2 ;
    int64_t n1 , n2 , n3;

    n1 = limit /num1 ;
    n2 = limit /num2 ;
    n3 = limit / num3 ;

    int64_t sum1 = (n1 * (num1 + n1*num1))>>1;
    int64_t sum2 = (n2 * (num2 + n2*num2))>>1;
    int64_t sum3 = (n3 * (num3 + n3*num3))>>1;

    return sum1 + sum2 - sum3 ;

}


int main(int argc , char const *argv[]){
  
    int n ;
    std::cin>> n ;

    cout<<"\nsum : "<<getSum(n-1) <<endl ;

    cout<<"\n ,...\n";

    cout<<"\n s : "<<constSumget(n-1 , 3 , 5) ;

    // std::cin.get();
    return 0;
}
