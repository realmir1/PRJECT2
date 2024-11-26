  ## **Patient-Based Calorie Calculation Program**
### Description

This program calculates the daily calorie requirement for a patient based on their age, height, weight, gender, and activity level. It uses the Basal Metabolic Rate (BMR) formula to estimate the minimum calories a person needs to perform essential body functions while at rest. It then adjusts the calculated BMR based on the patient’s activity level to determine the total daily energy expenditure.

 ### BMR Calculation Formula for Women:

 BMR = 10 * weight (kg) + 6.25 * height (cm) - 5 * age (years) - 161

For women, BMR (Basal Metabolic Rate) is calculated using the formula above. BMR represents the minimum calories a person needs to perform essential body functions while at rest.

After calculating the BMR, the value is adjusted based on the selected activity level:

        •        Low Activity (Sedentary): BMR * 1.2
        •        Moderate Activity: BMR * 1.55
        •        High Activity (Intense Exercise): BMR * 1.9

### BMR Calculation Formula for Men:

BMR = 10 * weight (kg) + 6.25 * height (cm) - 5 * age (years) + 5

For men, the calculation follows the same steps, but the formula includes +5 instead of -161.

After calculating the BMR, it is adjusted based on the selected activity level, similar to the process for women:

         •        Low Activity (Sedentary): BMR * 1.2
         •        Moderate Activity: BMR * 1.55
         •        High Activity (Intense Exercise): BMR * 1.9
## Adjusting Daily Calorie Requirement Based on Activity Level ##

Let’s say a woman is 25 years old, 170 cm tall, and weighs 70 kg. Her activity level is set to “moderate”. The calculation would go as follows

     
        BMR = 10 * 70 + 6.25 * 170 - 5 * 25 - 161
        BMR = 700 + 1062.5 - 125 - 161
        BMR = 1476.5 kcal/day

<div align="center">
  <img src="https://www.agirsaglam.com/wp-content/uploads/2021/04/Kalori-Makro-Hesaplama.jpg" alt="Resim Açıklaması" width="1000">
</div>
