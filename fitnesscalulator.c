//author = tamoghna pal 


#include <stdio.h>

int main() {
  
    float weight_kg, height_meters, bmi;
    float target_water_liters;

    printf("=== SMART HEALTH TRACKER ===\n\n");

   
    printf("Enter your body weight (in kg): ");
    scanf("%f", &weight_kg);

    printf("Enter your height (in meters, e.g., 1.75): ");
    scanf("%f", &height_meters);

    // BMI Formula: weight / (height * height)
    bmi = weight_kg / (height_meters * height_meters);
    
    target_water_liters = (weight_kg * 35.0) / 1000.0;

    printf("\n--------------------------------");
    printf("\nYOUR BODY METRICS REPORT");
    printf("\n--------------------------------");
    printf("\nCalculated BMI Index   : %.2f", bmi);
    printf("\nRecommended Water/Day  : %.2f Liters", target_water_liters);
    printf("\n--------------------------------");
    
    
    printf("\n[Health Tip] A standard healthy BMI ranges between 18.5 and 24.9.\n");

    return 0;
}