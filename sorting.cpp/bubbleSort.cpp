#include <iostream>
using namespace std;

int main() {
    int array[10]={1,3,4,6,2,7,6,9,8,10};
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(array[j]>array[j+1])
            { int temp = array[j+1];
            array[j+1]=array[j];
            array[j]=temp;
            }
        }
    }
    
    for(int i=0;i<10;i++)
    printf("%d\n", array[i]);
    
    return 0;
}