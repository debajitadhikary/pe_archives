// #include<bits/stdc++.h>
#include<iostream>
#include<cstdint>


using namespace std ;


int64_t getSum(int n){
    int64_t itr = 0 , sum {};
    while(++itr < n){
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
    int num3 = num1 * num2 ;
    int n1 , n2 , n3;

    n1 = limit /num1 ;
    n2 = limit /num2 ;
    n3 = limit / num3 ;

    int sum1 = ()

}


int main(int argc , char const *argv[]){
  
    int n ;
    std::cin>> n ;

    cout<<"\nsum : "<<getSum(n) <<endl ;



    // std::cin.get();
    return 0;
}
