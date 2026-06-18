//author = tamoghna pal 


#include <stdio.h>

int main() {
    // Variables for body metrics
    float weight_kg, height_meters, bmi;
    float target_water_liters;

    printf("=== SMART HEALTH TRACKER ===\n\n");

    // 1. Get User Input
    printf("Enter your body weight (in kg): ");
    scanf("%f", &weight_kg);

    printf("Enter your height (in meters, e.g., 1.75): ");
    scanf("%f", &height_meters);

    // 2. Core Calculations
    // BMI Formula: weight / (height * height)
    bmi = weight_kg / (height_meters * height_meters);
    
    // Healthy hydration calculation baseline rule: ~35ml per kg of body weight
    target_water_liters = (weight_kg * 35.0) / 1000.0;

    // 3. Display the Health Summary Layout
    printf("\n--------------------------------");
    printf("\nYOUR BODY METRICS REPORT");
    printf("\n--------------------------------");
    printf("\nCalculated BMI Index   : %.2f", bmi);
    printf("\nRecommended Water/Day  : %.2f Liters", target_water_liters);
    printf("\n--------------------------------");
    
    // 4. Quick Educational Insight Note
    printf("\n[Health Tip] A standard healthy BMI ranges between 18.5 and 24.9.\n");

    return 0;
}