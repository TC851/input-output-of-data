//  9.4,Programm,work with functions
//Input and output of data

#include <stdio.h>

void inputField(double *array,int number){
    int index;
    
    printf("Input of %i values: \n",number);

    for(index=0;index<number;index++){
        printf("Value %i:\n",index+1);
        scanf("%lf",&array[index]);
        }
    printf("\n");
}

void outputField(double *array,int number){
    int index;
    
    printf("Output of %i values: \n",number);
    
    for(index=0;index<number;index++)
        printf("Value %i: %.2f \n",index+1,array[index]);
          printf("\n");
    }

double meanValue(double *array,int number){
    double meanValue;
    int index;
    double sum = 0.0;
    
    for(index=0;index<number;index++){
        sum = sum + array[index];
        meanValue = sum/number;
    }
    return meanValue;
    
}
    
    int main(){
        
        double myArray[3];
        
        inputField(myArray,3);
        outputField(myArray,3);
        
        printf("Average value: %.2lf",meanValue(myArray,3));
       
        
        return 0;
        
    }
