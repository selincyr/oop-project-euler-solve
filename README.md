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

## Problem açıklamaları ve akış şemaları

Her problemin anlatımı, kod dosyasının yanında ayrı bir belgede bulunur:

| Problem | Kaynak kod | Açıklama ve akış şeması |
| --- | --- | --- |
| 1 — 3 veya 5'in katları | [Problem1.cpp](hafta1-3/Problem1.cpp) | [Problem1.md](hafta1-3/Problem1.md) |
| 2 — Çift Fibonacci sayıları | [Problem2.cpp](hafta1-3/Problem2.cpp) | [Problem2.md](hafta1-3/Problem2.md) |
| 3 — En büyük asal çarpan | [Problem3.cpp](hafta1-3/Problem3.cpp) | [Problem3.md](hafta1-3/Problem3.md) |

Belgeler; problem tanımını, sınıfın görevlerini, çözüm adımlarını, akış şemasını ve küçük örnekleri içerir. Yeni problemler de aynı düzenle eklenebilir.

## Sınır durumları ve kontroller

- Problem 1: Sınır 1 veya daha küçükse sonuç 0 olur.
- Problem 2: Sınır 2'den küçükse sonuç 0 olur.
- Problem 3: Girdi 2'den küçükse asal çarpan bulunmadığını belirtmek için 0 döndürülür.
- Üç program, `-std=c++17 -Wall -Wextra` seçenekleriyle uyarısız derlenmiştir.
- Örnek girdiler, sınır durumları ve aynı nesnede tekrarlanan çözüm çağrıları kontrol edilmiştir.

## Commit düzeni

Her problem ayrı bir commit ile eklenmiştir. İlk çözüm commitlerinin mesajları yönergede verilen örneğe uygun olarak `Problem 1 solved`, `Problem 2 solved` ve `Problem 3 solved` biçimindedir. 
