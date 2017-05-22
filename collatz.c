#include <stdio.h>
int main (void)
{
    int totalIterations = 1000000;
    long number;
    int size;
    int higherNumber = 1;
    int positionHigherNumber = 1;
    int i;
    for (i=1; i <= totalIterations; i++){
        number = i;
        size = 1;
        while(number!=1){
            if(number%2 == 0){
                number = number/2;
                }else{
                number = number*3 + 1;
            }
            size++;
        }
        if(size > higherNumber){
            higherNumber = size;
            positionHigherNumber = i;
        }
    }
    printf("The positive integer below 1 million that produces the sequence having most elements is the number:\n%d, with %d elements.\n",
    positionHigherNumber, higherNumber);
}
