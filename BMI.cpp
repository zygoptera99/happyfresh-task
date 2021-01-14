#include <stdio.h>
#include <stdlib.h>
 
int main(){ 
    float  height,tb,BMI,weight;
menu:
    printf("BMI (Body Mass Index) \n");
	printf("Input your Height (cm): ");
    scanf("%f",&height);
    printf("Input your Weight (kg)): ");
    scanf("%f",&weight);
    tb=(height/100);
    BMI = weight/(tb * tb);
    printf("Result %.1f \n",BMI);
    if(BMI<18.5){
    printf("Underweight \n\n");
    }
    else if(BMI==18.5||BMI<=24.9){
    printf("Normal \n\n");
    }
    else if(BMI==25||BMI<=29){
    printf("Overweight \n\n");
    };
    goto menu;
    system("pause");
    return(0);
 
}
