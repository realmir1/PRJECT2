
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

