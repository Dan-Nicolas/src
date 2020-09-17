#include <stdio.h>

int palindrome(int i, int j){
    int product = i*j;
    while(product > 0){
        product = product*10 +product%10;
        product = product/10;
        if(product = (i*j)){
            return product;
        }
    }
}

int main(){
    int max_num=0;
    for(int i = 100; i <= 999;i++){
        for (int j = 100; j <= 999;j++){
            //num = i*j;
            if(palindrome(i,j) && (i*j)>max_num){
                printf("i=%d,j=%d = %d\n",i,j, palindrome(i,j));
                max_num = (i*j);
            } 
        }
    }
    int array[]= {11,15,21,5,10,45,23,56,11};
    //printf("MAX is %d\n", findMAX(num_Array));
    
    printf("REV 12345 = %d", palindrome(913,993));
}

int findMAX(int array[]){
    int max = array[0];
    for(int i = 0; i < 1000; i++){
        if(max<array[i+1]){
            max = array[i+1];
        }
    }
    return max;
}
