//author = tamoghna pal 
// this project of fitness calculator includes HIGHLY OPTIMISED INPUT VALIDATION CHECK AND BMI RANGES ..

#include <stdio.h>

float getvalidweight() {
  float weight , sucess ; 

  while(1){
    printf("enter your weight in kg(must be in between 10 and 300);");
    sucess=scanf("%f",&weight);

    if (sucess==1 && weight>=10.0 && weight <=300.0) {
     return weight;
    }else{
      printf("Invalid input. please enter a valid number between 10.0 and 300.0");
      while(getchar()!='\n');
    }
    }
  }




  float getvalidheight(){
    float height , sucess;
    while(1){
   printf("enter your height in meters ( must be between 0.5 and 3.0),(use 1 feet=12 inches  and 1 metre = 3.28 feet)");
    sucess = scanf("%f",&height);
    if (sucess==1 && height>=0.5 && height<=3.0) {
      return height;
    } else {
      printf("Inavlid input! Enter your valid input :");
     while(getchar()!='\n');

    }
    }

    }

  
int main() {
  
    float weight_kg, height_meters, bmi;
    float target_water_liters;

    printf("=== SMART HEALTH TRACKER ===\n\n");

    weight_kg=getvalidweight();
    height_meters=getvalidheight();
   
   /*this below lines of code are previous projects ones now i have intsalled highly optimised input 
   validation check to ensure more updated model .
   
   printf("Enter your body weight (in kg): ");
    scanf("%f", &weight_kg);


    printf("Enter your height (in meters, e.g., 1.75): ");
    scanf("%f", &height_meters);*/

    // BMI Formula: weight / (height * height)
    bmi = weight_kg / (height_meters * height_meters);
    
    target_water_liters = (weight_kg * 35.0) / 1000.0;

    printf("\n--------------------------------");
    printf("\nYOUR BODY METRICS REPORT");
    printf("\n--------------------------------");
    printf("\nCalculated BMI Index   : %.2f", bmi);
    printf("\nRecommended Water/Day  : %.2f Liters", target_water_liters);
    printf("\n--------------------------------\n");

    if (bmi>=18.5 && bmi<= 24.9) {
         printf("Your bmi is in the healthy range");
    } else if (bmi<18.5) {
      printf("Your bmi is below the helathy range");
    } else {
    printf("Your bmi is above the healthy range");
    }
    printf("\n[Health Tip] A standard healthy BMI ranges between 18.5 and 24.9.\n");

    return 0;
}