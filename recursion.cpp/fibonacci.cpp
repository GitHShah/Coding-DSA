#include <iostream>
using namespace std;

// fibonacci
// a0 = 0 
// a1 = 1

int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
    return fib(n-1)+fib(n-2);
}

int main(){
cout<<fib(3);
}

// T(n) = T(n-1)+T(n-2)+1
// TIME COMPLEXITY = O(2^n)
// SPACE COMPLEXITY = O(n)



// RECURSION TREE
// SPACE COMPLEXITY = HEIGTH OF THE TREE or O(K)
