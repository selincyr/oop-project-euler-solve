# Nesne Tabanlı Programlama — Project Euler Çözümleri

Bu depo, 1–3. haftaların telafi çalışması kapsamında Project Euler'in ilk üç probleminin C++17 ile nesne tabanlı çözümlerini içerir.

[Ödev yönergesi](https://github.com/zyavuz610/learn-cpp/blob/main/900_projects/2026_inClass_Projects/week_01-03/readme.md)

## Dosyalar ve beklenen sonuçlar

| Dosya | Sınıf | Girdi | Beklenen çıktı |
| --- | --- | --- | --- |
| `hafta1-3/Problem1.cpp` | `Problem1Solver` | Üst sınır: 1000 (hariç) | `Sonuç: 233168` |
| `hafta1-3/Problem2.cpp` | `Problem2Solver` | Üst sınır: 4000000 (dahil) | `Sonuç: 4613732` |
| `hafta1-3/Problem3.cpp` | `Problem3Solver` | 600851475143 | `Sonuç: 6857` |

Her dosya, tek bir çözüm sınıfı ve kendi `main()` fonksiyonunu içerir. Programlar ayrı ayrı derlenmelidir.

## Sınıf tasarımı

- Problemin girdisi, `private` üye değişkende saklanır ve kurucu (constructor) aracılığıyla alınır.
- `public` bölümündeki `solve() const` metodu sonucu döndürür; ekrana yazdırmaz.
- Yardımcı işlemler sınıfın `private` metotlarında gerçekleştirilir.
- `main()` yalnızca nesne oluşturur, `solve()` metodunu çağırır ve sonucu yazdırır.
- Ayrı başlık dosyası veya sınıf dışında yardımcı fonksiyon kullanılmaz.
- Hesaplamalarda yerel değişkenler kullanılır; saklanan girdi değiştirilmez. Aynı nesnede `solve()` tekrar çağrılabilir.
- Dosya ve sınıf adları, ödev yönergesindeki biçimiyle korunmuştur.

## Derleme ve çalıştırma

Gereksinim: C++17 destekleyen bir `g++` derleyicisi.

Deponun ana klasöründe aşağıdaki komutları çalıştırın:

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra hafta1-3/Problem1.cpp -o build/problem1
g++ -std=c++17 -Wall -Wextra hafta1-3/Problem2.cpp -o build/problem2
g++ -std=c++17 -Wall -Wextra hafta1-3/Problem3.cpp -o build/problem3
./build/problem1
./build/problem2
./build/problem3
```

Çıktılar sırasıyla:

```text
Sonuç: 233168
Sonuç: 4613732
Sonuç: 6857
```

## Problem 1 — 3 veya 5'in katları

1000'den küçük, 3'e veya 5'e tam bölünen pozitif sayıların toplamı hesaplanır. Sayılar sırayla kontrol edilir. Mantıksal VEYA (`||`) kullanıldığı için 15 gibi her iki sayıya bölünen değerler yalnızca bir kez eklenir.

Örnek: Sınır 10 olduğunda 3 + 5 + 6 + 9 = 23.

Zaman karmaşıklığı: O(sınır). Ek bellek: O(1).

[Problemin aslı](https://projecteuler.net/problem=1)

## Problem 2 — Çift Fibonacci sayıları

1 ve 2 ile başlayan Fibonacci dizisinde, dört milyonu aşmayan çift terimlerin toplamı hesaplanır. Yalnızca ardışık iki terim saklanır. Dizide ilerleme işlemi özel bir yardımcı metotta yapılır.

Örnek: Sınır 100 olduğunda 2 + 8 + 34 = 44.

Üst sınır `int`, ara terimler ve toplam `long long` türündedir.

Zaman karmaşıklığı: Pozitif sınırlar için O(log sınır). Ek bellek: O(1).

[Problemin aslı](https://projecteuler.net/problem=2)

## Problem 3 — En büyük asal çarpan

600851475143 sayısının en büyük asal çarpanı bulunur. Bölenler küçükten büyüğe denenir ve bulunan bölenin tüm tekrarları sayıdan çıkarılır. Küçük çarpanlar önceden çıkarıldığı için sonraki bulunan bölen asaldır.

Denenecek çarpan, kalan sayının karekökünü aştığında döngü biter. Kalan sayı 1'den büyükse bu sayı en büyük asal çarpandır. Döngü koşulunda çarpma yerine bölme kullanılarak taşma riski önlenir.

Örnek: 13195 sayısının en büyük asal çarpanı 29'dur.

Zaman karmaşıklığı: En kötü durumda O(√sayı). Ek bellek: O(1).

[Problemin aslı](https://projecteuler.net/problem=3)

## Sınır durumları ve kontroller

- Problem 1: Sınır 1 veya daha küçükse sonuç 0 olur.
- Problem 2: Sınır 2'den küçükse sonuç 0 olur.
- Problem 3: Girdi 2'den küçükse asal çarpan bulunmadığını belirtmek için 0 döndürülür.
- Üç program, `-std=c++17 -Wall -Wextra` seçenekleriyle uyarısız derlenmiştir.
- Örnek girdiler, sınır durumları ve aynı nesnede tekrarlanan çözüm çağrıları kontrol edilmiştir.

## Commit düzeni

Her problem ayrı bir commit ile eklenmiştir. İlk çözüm commitlerinin mesajları yönergede verilen örneğe uygun olarak `Problem 1 solved`, `Problem 2 solved` ve `Problem 3 solved` biçimindedir. 
