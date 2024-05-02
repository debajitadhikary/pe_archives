// #include<bits/stdc++.h>
#include<iostream>


using namespace std ;


int getSum(int n){
    int itr = 0 , sum {};
    while(++itr < n){
        if(itr%3 ==0 || itr%5 ==0)
            sum+=itr ;
    }
    return sum ;
}

int main(int argc , char const *argv[]){
  
    int n ;
    std::cin>> n ;

    cout<<"\nsum : "<<getSum(n) <<endl ;



    // std::cin.get();
    return 0;
}
