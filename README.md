
# Hasta Bazlı Kalori Hesaplama Programı

Bu C++ programı, kullanıcının yaş, boy, kilo, cinsiyet ve fiziksel aktivite seviyesine dayalı olarak **Bazal Metabolizma Hızı (BMR)** ve **günlük kalori ihtiyacını** hesaplar.

## Özellikler
- Kullanıcıdan yaş, boy, kilo ve cinsiyet bilgilerini alır.
- Kullanıcının fiziksel aktivite seviyesini (**düşük, orta veya yüksek**) girmesine olanak tanır.
- BMR değerini **Harris-Benedict** denklemine göre hesaplar.
- Fiziksel aktivite seviyesine bağlı olarak günlük tahmini kalori ihtiyacını verir.
- Kullanıcı girdilerini düzgün bir tablo formatında gösterir.

## Kullanım
1. Programı çalıştırın.
2. Aktivite seviyenizi girin (**düşük, orta, yüksek**).
3. Yaş, boy (cm), kilo (kg) ve cinsiyet (**W: Kadın, M: Erkek**) bilgilerinizi girin.
4. Program, **BMR** değerinizi hesaplayarak size gösterir.
5. Seçtiğiniz aktivite seviyesine göre günlük **kalori ihtiyacınızı** hesaplar.

## Formüller
- **Kadınlar için BMR:**
  \[ BMR = (10 × kilo) + (6.25 × boy) - (5 × yaş) - 161 \]
- **Erkekler için BMR:**
  \[ BMR = (10 × kilo) + (6.25 × boy) - (5 × yaş) + 5 \]
- **Kalori ihtiyacı hesaplama:**
  - Düşük aktivite: \( BMR × 1.2 \)
  - Orta aktivite: \( BMR × 1.55 \)
  - Yüksek aktivite: \( BMR × 1.9 \)

## Gereksinimler
- C++ derleyicisi (GCC, Clang veya MSVC)

## Kurulum & Çalıştırma
1. **Kod dosyasını indirin** veya kopyalayın.
2. Terminal veya komut satırında aşağıdaki komutu çalıştırın:
   ```bash
   g++ calorie_calculator.cpp -o calorie_calculator
   ./calorie_calculator
   ```
3. Kullanıcı bilgilerini girerek hesaplamaları görebilirsiniz.

## Lisans
Bu proje **MIT Lisansı** altında sunulmuştur.


---


# Patient-Based Calorie Calculation Program

## Overview
This program calculates the Basal Metabolic Rate (BMR) and the daily calorie requirement based on a patient's age, height, weight, gender, and activity level.

## Features
- User inputs age, height (cm), weight (kg), gender (M/W), and activity level (low, moderate, or high).
- Computes BMR using the Harris-Benedict equation.
- Calculates daily calorie needs based on activity level.
- Displays a summary of input values and results in a structured format.

## How to Use
1. Run the program.
2. Enter the required personal details when prompted.
3. The program will calculate and display the BMR and estimated daily calorie needs.

## Formulas Used
- **For Women:**
  ```
  BMR = 10 * weight + 6.25 * height - 5 * age - 161
  ```
- **For Men:**
  ```
  BMR = 10 * weight + 6.25 * height - 5 * age + 5
  ```
- **Calorie Requirement Based on Activity Level:**
  - Low activity: BMR × 1.2
  - Moderate activity: BMR × 1.55
  - High activity: BMR × 1.9

## Example Input/Output
```
Patient-Based Calorie Calculation Program
Please specify your activity level (low, moderate, or high): moderate
Please enter your age: 25
Please enter your height (cm): 175
Please enter your weight (kg): 70
Please enter your gender (M/W): M

BMR = 1715 kcal/day
Calorie requirement = 2651 kcal/day

-----------------------------------------
Weight: 70 kg
Height: 175 cm
Age: 25 years
Gender: M
```

## License
This project is open-source and available for modification and distribution.

## Contributions
Feel free to fork the repository and suggest improvements!


