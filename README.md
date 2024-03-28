# PodstawyProgramowania1 (C)

<img src="./img/agh.png" width="100px" align="left"></img>

<div>
  <br/>
  Repository for the subject "Podstawy Programowania 1" <br/>
  Lecturer: <b>Janusz Miller</b>
</div>

<br/>

## Content List:

- [Task list](https://github.com/marcinwolder/PodstawyProgamowania1?tab=readme-ov-file#list-of-tasks)
- [Instructions for tasks](https://github.com/marcinwolder/PodstawyProgamowania1?tab=readme-ov-file#instructions-for-tasks)
- [Lecture notes](https://github.com/marcinwolder/PodstawyProgamowania1?tab=readme-ov-file#lecture-notes)

## List of tasks:

|   Num    |                                           Name |                Solved?                |
| :------: | ---------------------------------------------: | :-----------------------------------: |
| **_2_**  |                                           <hr> |                 <hr>                  |
|  Z.2.1   |                                 Instrukcja for | ✅ <sub>([GITHUB](part2/2-1.c))</sub> |
|  Z.2.2   |                    Ciąg arytmetyczny w tablicy | ✅ <sub>([GITHUB](part2/2-2.c))</sub> |
|  Z.2.3   |                               Iloczyn skalarny | ✅ <sub>([GITHUB](part2/2-3.c))</sub> |
|    -     |                            Kartka z kalendarza |                  ❌                   |
| **_3_**  |                                           <hr> |                 <hr>                  |
|  Z.3.1   |                              Losowanie n liczb | ✅ <sub>([GITHUB](part3/3-1.c))</sub> |
|  Z.3.2   |                     Liczba losowa z przedziału | ✅ <sub>([GITHUB](part3/3-2.c))</sub> |
|  Z.3.3   |                       Średnie losowanych liczb | ✅ <sub>([GITHUB](part3/3-3.c))</sub> |
| **_4_**  |                                           <hr> |                 <hr>                  |
|  Z.4.1   |                           Sortowanie bąbelkowe | ✅ <sub>([GITHUB](part4/4-1.c))</sub> |
|  Z.4.2   |              Przesuwanie elementów tablicy int | ✅ <sub>([GITHUB](part4/4-2.c))</sub> |
|  Z.4.3   |                            Funkcje z tablicami | ✅ <sub>([GITHUB](part4/4-3.c))</sub> |
|  Z.4.4   |                                     Tablica 2D |                  ❌                   |
| **_5_**  |                                           <hr> |                 <hr>                  |
|  Z.5.1   |       Rekurencyjne obliczanie całki oznaczonej | ✅ <sub>([GITHUB](part5/5-1.c))</sub> |
|  Z.5.2   | Zapis łańcuchów w oddzielnych obszarach sterty | ✅ <sub>([GITHUB](part5/5-2.c))</sub> |
|  Z.5.3   |                   Zapis łańcuchów w tablicy 2D | ✅ <sub>([GITHUB](part5/5-3.c))</sub> |
| **_6_**  |                                           <hr> |                 <hr>                  |
|  Z.6.1   |                                Czytanie znaków | ✅ <sub>([GITHUB](part6/6-1.c))</sub> |
|  Z.6.2   |                            Usuwanie komentarzy | ✅ <sub>([GITHUB](part6/6-2.c))</sub> |
| **_7_**  |                                           <hr> |                 <hr>                  |
|  Z 7.1   |                         Operacje na macierzach | ✅ <sub>([GITHUB](part7/7-1.c))</sub> |
|  Z 7.2   |                                          qsort | ✅ <sub>([GITHUB](part7/7-2.c))</sub> |
| **_8_**  |                                           <hr> |                 <hr>                  |
|  Z 8.1   |                     Tablica wskaźników i qsort | ✅ <sub>([GITHUB](part8/8-1.c))</sub> |
|  Z 8.2   |           Tablica wskaźników i qsort + bsearch | ✅ <sub>([GITHUB](part8/8-2.c))</sub> |
| **_9_**  |                                           <hr> |                 <hr>                  |
|  Z.9.1   |                            Wektor - podstawy 1 |                  ❌                   |
|  Z.9.2   |                           Wektor int - zadanie | ✅ <sub>([GITHUB](part9/9-2.c))</sub> |
|  Z 9.3   |                                 Macierz rzadka |                  ❌                   |
| **_10_** |                                           <hr> |                 <hr>                  |
| **_11_** |                                           <hr> |                 <hr>                  |
| **_12_** |                                           <hr> |                 <hr>                  |

## Instructions for tasks:

### Tasks 2.x:
---
#### 2.1

Program wyprowadza na ekran n wyrazow ciągu arytmetycznego.  

Wczytuje 3 liczby:  
`a0` - wartość pierwszego wyrazu ciągu (typu double),  
`postep` - wartość postępu (typu double),  
`n` - liczba wyrazów ciągu (typu int).

Wyprowadzane (z dokładnością do 3 cyfr po przecinku) liczby są oddzielane pojedynczą spacją.

#### 2.2

W funkcji main jest definiowana tablica o 10 elementach typu double.

Program wczytuje dwie liczby: `start` i `stop`.

Do kolejnych (wszystkich) elementów tablicy są wpisywane liczby tworzące ciąg arytmetyczny - taki, aby początkowym (zerowym) elementem tablicy była wartość liczby start, a końcowym liczba stop.

Program wyprowadza na ekran wartości elementów tablicy z dokładnością do 3 cyfr po przecinku, oddzielone jedną spacją, w kolejności od ostatniego do początkowego elementu tablicy.

#### 2.3

Program definiuje i wypełnia tablicę tak samo jak w zadaniu Z.2.2 (wczytuje liczby `start` i `stop`, wpisuje do tablicy wyrazy ciągu arytmetycznego).

Ponadto program definiuje drugą tablicę, też typu double, 10-elementową.
Do drugiej tablicy przepisuje elementy pierwszej tablicy, ale w odwrotnej kolejności, tj. do zerowego elementu tablicy drugiej wpisuje wartość ostatniego elementu tablicy pierwszej itd.
Tablice są traktowane jak wektory, tzn. elementy tablicy są współrzędnymi wektora. 

Program oblicza i wyprowadza na ekran (z dokładnością do 4 cyfr po przecinku) iloczyn skalarny utworzonych w programie wektorów (tablic).

### Tasks 3.x:
---
#### 3.1

Program generuje liczby pseudolosowe wywołując n razy standardową funkcję rand. Liczba n musi być mniejsza od 100. Przed pierwszym wywołaniem funkcji rand jest wywoływana funkcja srand z wczytaną wartością zarodka generatora seed.

Program wypisuje na ekran wylosowane liczby w kolejności odwrotnej do losowania.

**Wejście**: Program wczytuje wartość zarodka `seed`, a następnie wartość liczby generowanych liczb `n`.

**Wyjście**: Program pisze `n` liczb oddzielonych spacją, w kolejności odwrotnej do kolejności losowania.

**Przykładowo**:  Po wczytaniu danych:
```bash
234  5
```
program pisze: 
```bash
1152753107 1890039364 1706221977 296082233 1803632939
```

#### 3.2

Program wczytuje dwie liczy całkowite `a` i `b`. 

Wywołuje funkcję, która losuje jedną liczbę całkowitą z przedziału [a,b] stosując funkcję `rand()` z standardowej biblioteki `stdlib` oraz operator dzielenia modulo.
Wyprowadza na ekran liczbę zwracaną przez funkcję.

#### 3.3

Program generuje liczby pseudolosowe wywołując `n` razy standardową funkcję `rand()`. Przed pierwszym wywołaniem funkcji `rand()` jest wywoływana funkcja srand z wczytaną wartością zarodka generatora `seed`. Każda liczba zwracana przez funkcję `rand()` jest w programie przeliczana (z użyciem operacji dzielenia modulo i innych operacji arytmetycznych na liczbach całkowitych) do wartości z przedziału domkniętego [100, 999].

Program oblicza średnie arytmetyczne otrzymanych liczb - osobno liczb z przedziału [100, 199], [200,299], [300,399], ..., [900,999], a więc 9 średnich. 

Jeżeli w przedziale [x00, x99] nie pojawiła się żadna liczba, to jako średnią należy przyjąć 0. 
Liczby powtarzające się są liczone osobno, tj. jako dwie liczby. Np. dla liczb 120, 530, 560, 560, 800, 810 średnie mają wartości: 120 0 0 0 550 0 0 805 0.

**Wejście**:  Program wczytuje wartość zarodka `seed`, a następnie wartość liczby generowanych liczb `n`.

> [!WARNING]
> Program powinien sprawdzić, czy wartości wczytywanych danych mieszczą się w dopuszczalnym zakresie.

**Wyjście**: Program pisze 9 liczb (średnich) z dokładnością do 2 cyfr po przecinku, oddzielone spacją. 

**Przykład**:  Po wczytaniu danych:
```bash
234  1000
```
program pisze:
```bash
150.68 251.31 346.13 446.84 546.19 651.45 748.83 850.33 950.32
```

### Tasks 4.x:
---
#### 4.1

Program:
- Wczytuje rozmiar tablicy n i definiuje tablicę typu int o tym rozmiarze - zakładamy, że jest możliwe używanie tablic VLA);
- Wczytuje wartość zarodka (seed) generatora liczb pseudolosowych;
- Wywołuje funkcję, która wpisze losowane liczby do elementów tablicy (jedno losowanie dla każdego elementu);
- Wywołuje funkcję, która sortuje (metodą bąbelkową) elementy tablicy w kolejności malejących wartości.
- Wczytuje indeks (liczbę >= 0) elementu posortowanej tablicy;
- Wartość wskazanego wczytanym indeksem elementu wyprowadza na ekran.

Program powinien weryfikować poprawność wczytywanych danych. 

**Przykład**  
Wejście: `1000  15  3`  
Wyjście: `2140257223`

#### 4.2

W programie jest zdefiniowana tablica typu int o rozmiarze `SIZE`, inicjowana wartościami 10 - 19.
Elementy tej tablicy będą przesuwane w prawo (w kierunku wyższego indeksu), a później w lewo (ale tylko w obrębie tablicy, tzn. zapisy poza pamięć przydzieloną dla tablicy nie są dozwolone).

Program wczytuje wielkość przesunięcia w prawo i wykonuje te przesunięcia. Na pozycje "zwolnione" są wpisywane wartości `-2`, np. po przesunięciu w prawo o 3 pozycje - elementy tablicy mają wartości: `-2 -2 -2 10 11 12 13 14 15 16`. 

Następnie program wczytuje wielkość analogicznego przesunięcia w lewo i wykonuje to przesunięcie. Do elementów "zwolnionych po prawej stronie"  wpisuje liczby `-1`. 
Program wypisuje na ekran wartości kolejnych elementów tablicy.

**Przykład**:  
Wejście: `3  2`  
Wyjście: `-2 10 11 12 13 14 15 16 -1 -1`  

> [!WARNING]
> *a*. W programie należy zdefiniować 2 funkcje: przesuwającą w prawo oraz przesuwającą w lewo.  
> *b*. Preferowana "oszczędna" wersja programu, tj. taka, w której liczba operacji jest mała. 

#### 4.3

Program operuje na tablicach typu int. **Nie stosuje zmiennych globalnych**.
Należy napisać definicje funkcji:

- `average(...)`, która oblicza i zwraca średnią elementów tablicy typu int,
- `print_int_table1D(...)`, która wypisuje na ekran elementy tablicy typu int (oddzielane spacjami),
- `seperate(...)`, która przepisuje wszystkie elementy jednej tablicy, np. tab do tablic `t_small` (mniejsze od przekazanej przez argumenty funkcji wartości v) i do tablicy `t_big` (pozostałe). Należy zachować kolejność elementów. Wszystkie elementy tablic są typu int.
  
**Program (w funkcji głównej)**:  
- Czyta wartości zmiennych `seed`,  `max` i `size`;
- Definiuje tablicę tab o rozmiarze size. Do wszystkich elementów tej tablicy kolejno wpisuje pseudolosowe liczby, każda jest obliczana w następujący sposób:  
  - generator `rand()` jest wywoływany dwa razy,  
  - otrzymane liczby są przeliczane operacją dzielenia modulo do przedziału [0, max],  
  - iloczyn tych liczb jest wpisywany do tablicy  
- Wywołuje funkcję `average()` dla obliczenia średniej arytmetycznej wartości elementów tablicy  tab i wypisuje ją w nowej linii.  
- Wywołuje funkcję `seperate()`, która do jednej tablicy wpisuje liczby mniejsze od wcześniej obliczonej średniej, a do drugiej - liczby większe od średniej.  
- Pisze (w nowej linii) wszystkie elementy tablicy zawierające mniejsze liczby.  
- Pisze (w nowej linii) wartość średniej obliczonej dla tablicy z mniejszymi liczbami.  
- Pisze (w nowej linii) wszystkie elementy tablicy zawierające większe liczby.  
- Pisze (w nowej linii) wartość średniej obliczonej dla tablicy z większymi liczbami.

**Przykład**:

Dane wejściowe: 
```bash
1 10 10
```

Dane wyjściowe:  
```bash
26.80
12 4 0 3 15 0 
5.67
60 56 28 90 
58.50
```

### Tasks 5.x:
---
### 5.1

**Adaptacyjny algorytm obliczania przybliżonej wartości całki oznaczonej metodą Simpsona**

Metoda Simpsona pozwala obliczyć przybliżoną wartość `S` całki z funkcji `f` w przedziale od `a` do `b`:  
 `S = h*(f(a) + 4*f(c) + f(b))/6`,
 `h` - długość przedziału całkowania,
 `c` - punkt centralny przedziału całkowania (w środku przedziału).
 
> [!TIP]
> Zadanie można uprościć zastępując metodę Simpsona metodą trapezów: `S = h*(f(a)+ f(b))/2`,

Obliczone `S` nie jest dokładną wartością pola - tylko jej przybliżeniem - ale błąd przybliżenia jest mały jeżeli `h` jest małe.  
Algorytm adaptacyjny ma na celu osiągnięcie wyniku (całki) z błędem bezwzględnym nie większym niż zadany = `Delta`.

W tym celu:  
- Stosujemy przepis Simpsona (ew. trapezów) dla całego przedziału od `a` do `b`.
- Następnie dzielimy ten przedział na 2 połowy.
- Wzór Simpsona (ew. trapezów) stosujemy teraz osobno dla lewej połówki (od `a` do `c`) i dla prawej (od `c` do `b`).
- Otrzymujemy przybliżone wartości dwóch części obliczanej całki - `S1` i `S2`.
- Jeżeli suma `S1` i `S2` różni się od `S` nie więcej niż o `Delta`, to uznajemy, że otrzymany wynik jest dostatecznie dokładny i kończymy algorytm.
- W przeciwnym przypadku stajemy przed dwoma zadaniami - obliczyć całkę na każdej połówce (lewej, a później prawej), każdej z błędem nie większym niż `Delta/2`.
- Zauważmy, że są to jakościowo dokładnie dwa takie same zadania, jak zadanie pierwotne (obliczyć całkę z błędem nie większym niż zadany)!

**Wersja podstawowa programu**:  
W programie jest zdefiniowana funkcja(w znaczeniu języka C), która oblicza wartości funkcji podcałkowej.  
W funkcji **main()** program:  
- wczytuje granice przedziału całkowania, maksymalny dopuszczalny błąd i maksymalny dopuszczalny poziom rekursji,  
- wywołuje funkcję, która rekurencyjnie oblicza całkę,  
- wyprowadza na ekran obliczoną wartość z dokładnością do 3 cyfr po przecinku.  
Należy tak napisać program, aby liczba obliczeń wartości zadanej funkcji była jak najmniejsza - aby nie obliczać dwukrotnie funkcji dla tego samego argumentu.

W funkcji rekurencyjnej powinna być kontrola poziomu rekursji. Załóżmy, że jeżeli maksymalny zadany poziom rekursji został osiągnięty, a błąd nadal przekracza dopuszczalną granicę, to wynikiem obliczeń będzie symbol nieoznaczony NaN.

> [!WARNING]
> Do testowania programu nie należy używać jako funkcji podcałkowej wielomianu stopnia niższego od 4 - dla takich wielomianów metoda Simpsona jest dokładna. Dla ułatwienia testowania programu proponuję wybrać funkcję, z której całkę łatwo obliczyć analitycznie.

> [!WARNING]
> Ten algorytm nie gwarantuje wyniku w granicach zadanego błędu - możliwe jest przekroczenie zadanego dopuszczalnego błędu (nie trudno podać przykład takiej "złośliwej" funkcji). Dlatego w praktyce obliczeniowej stosuje się dodatkowe zabezpieczenia, które tu - dla uproszczenia zadania - nie są zaproponowane.

>[!NOTE]
> **W wersji rozszerzonej**: W trakcie obliczeń wyprowadzana jest na ekran informacja o poziomie rekursji, do jakiego trzeba było dojść, aby uzyskać żądaną dokładność w każdym podprzedziale. Jeżeli tę informację uzupełnimy o długość podprzedziału, to suma tych podprzedziałów powinna być = `b-a`.

Proponuję eksperyment z funkcją `f(x) = 1/((x-0.5)*(x-0.5)+0.01)` w przedziale od `0` do `3`.

#### 5.2

Program ma wczytać i zapamiętać zadaną liczbę łańcuchów znaków. Znaki są wczytywane z standardowego strumienia wejściowego (z klawiatury). Przyjmujemy założenie, że łańcuch może zawierać tylko znaki drukowalne - pozostałe znaki (np. znaki białe) pojawiające się w strumieniu wejściowym są traktowane jako separatory między łańcuchami.

Należy napisać definicję funkcji `read_string()`, która:  
- Do lokalnej tablicy wczytuje ze standardowego strumienia wejściowego (klawiatury) jeden łańcuch znaków zawierający tylko znaki drukowalne.
- Przydziela (dynamicznie) pamięć o odpowiedniej dla wczytanego łańcucha długości i przepisuje go do przydzielonej pamięci.
- Do funkcji wywołującej zwraca  adres początku obszaru pamięci, w której jest pamiętany wczytany łańcuch.  

oraz funkcji `print_string()`, która:
- Wyprowadza na ekran wszystkie wczytane łańcuchy, każdy w nowej linii, w kolejności wczytywania.

**W funkcji main**:
- Wczytuje `n` - liczbę łańcuchów, które będą wczytane.
- Dynamicznie przydziela pamięć dla adresów pamiętanych łańcuchów.
- Powtarza `n` razy wywoływanie funkcji `read_string()` i zapisuje adresy łańcuchów w tablicy.
- Wywołuje funkcję `print_string()`.

> [!NOTE]
> **W rozszerzonej wersji A tego programu** - sortuje (np. metodą bąbelkową) w porządku rosnącym pamiętane łańcuchy. O kolejności łańcuchów decydują wartości kodów znaków (np. kod znaku `'a'` > kodu znaku `'B'`).

> [!NOTE]
> **W rozszerzonej wersji B tego programu** - rosnący porządek pamiętanych łańcuchów jest zachowany już w trakcie wpisywania do tablicy każdego łańcucha, tzn. nowy łańcuch jest wpisywany w "odpowiednie'' miejsce w tablicy.

#### 5.3

Zadanie jest podobne do Z.5.2:  
Program ma wczytać, zapamiętać, posortować i wypisać n łańcuchów zawierających tylko litery. 

**Różnice**:  
- Zakładamy, że znakami wczytywanymi będą tylko litery (małe lub wielkie) oraz znaki niedrukowalne.
- Liczba wczytywanych łańcuchów `N` jest stałą (o wartości nadanej przed kompilacją).
- Drugą stałą (`STR_LEN_MAX`) jest maksymalna długość łańcucha (liczona z znakiem zerowym).
- Funkcja `read_string_2D()` wczytuje łańcuch  i zapisuje go do tablicy 2D (tablicy `N` tablic znakowych o długości `STR_LEN_MAX`).
- Sortowanie ma doprowadzić do alfabetycznej kolejności łańcuchów.
- Funkcja main wywołuje funkcję `read_string_2D()` `N` razy, funkcję sortowania bębelkowego i funkcję wypisywania łańcuchów. 

### Tasks 6.x:
---
#### 6.1

Program czyta znaki z standardowego strumienia wejściowego (z klawiatury) aż do końca "pliku".

Jedna z funkcji programu sprawdza, czy kod odczytanego znaku należy do przedziału domkniętego [`KOD_MIN`, `KOD_MAX`]. Funkcja liczy ile razy powtórzył się każdy ze znaków z tego przedziału.

Inna funkcja znajduje znak, którego krotność powtarzania się była największa i pisze tę krotność oraz znak. W przypadku, gdy kilka znaków osiąga tę samą, największą krotność - wypisywane są wszystkie te znaki

**Format danych wyjściowych**:  
krotność znak znak ...
np.:
`3 a u \ T`

> [!NOTE]
> **W programie są zdefiniowane stałe**:
> ```c
> #define KOD_MIN 'A'
> #define KOD_MAX 'z'
> ```

#### 6.2

Program czyta plik źródłowy innego programu i przepisuje go na ekran usuwając komentarze (typu wierszowego oraz blokowego). Zakładamy, że w czytanym programie nie ma stałych łańcuchowych.

W środowisku **UPEL**, nazwa czytanego programu nie powinna mieć rozszerzenia `.c` (np. `.txt`).

### Tasks 7.x:
---
#### 7.1

Program czyta rozmiary i elementy dwóch macierzy, oblicza ich sumę i iloczyn i wyniki wyprowadza na ekran.

**Segment main wywołuje**:  
- funkcję `czytaj()` - czytającą elementy macierzy o zadanych rozmiarach,
- funkcję `dodaj()` - (uniwersalną, tj. przeznaczoną do do dodawania macierzy o dowolnych, ale takich samych rozmiarach),
- funkcję `iloczyn()` - obliczającą iloczyn macierzy - jeżeli to możliwe, to uniwersalna, dla dowolnych dopuszczalnych rozmiarów,
- funkcję `pisz()` - wyprowadzają elementy macierzy (każdy wiersz w oddzielnej linii).

Rozmiary macierzy są wczytywane w main.

#### 7.2

W programie z zadania Z 5.2 należy zmienić sposób sortowania łańcuchów. Należy skorzystać z funkcji qsort.

### Tasks 8.x:
---
#### 8.1

Zadanie jest podobne do zadania 5.2 i 7.2 - wczytywanie n łańcuchów znakowych z strumienia wejściowego (klawiatury lub pliku).

**Funkcja main**:  
- Czyta liczbę n,
- Wywołuje funkcję, która ma wczytać n łańcuchów, zapisać każdy z nich w przydzielonej dla niego (w odpowiedniej ilości) pamięci. Adresy "odcinków" pamięci przydzielanych dla łańcuchów ma zapisywać w pamięci też przydzielonej dynamicznie (funkcją `malloc()`). Funkcja zwraca adres pamięci, w której są pamiętane adresy zapisanych łańcuchów.
- Wywołuje biblioteczną funkcję `qsort()`, która sortuje łańcuchy (czy ich adresy?) wg porządku przyjętego w bibliotecznej funkcji `strcmp()`.
- Wywołuje funkcję, która wypisuje posortowane łańcuchy na ekran.
- Zwalnia przydzieloną pamięć i kończy program.

#### 8.2

Zadanie z modyfikacjami zadania 8.1:

1. Powtórnie wczytany taki sam łańcuch nie jest drugi raz zapamiętywany. Jest liczona krotność pojawienia się tego łańcucha w strumieniu wejściowym.
1. Porządek (relacja następstwa) w zadaniu 8.1 określała funkcja `strcmp()`. W tym zadaniu łańcuchy mają być uporządkowane w kolejności malejącej krotności, a w przypadku tej samej krotności kilku łańcuchów, ich kolejność powinna być alfabetyczna (wyznaczona funkcją `strcmp()`).
1. Uporządkowanie łańcuchów następuje po wczytaniu każdego "innego" łańcucha (innego czyli unikalnego - takiego, jaki jeszcze nie pojawił się w strumieniu wejściowym).  
1. Funkcja wypisująca łańcuchy na ekran wypisuje je w kolejności w jakiej są pamiętane, tj. malejącej krotności, a w zakresie tej samej krotności - alfabetycznie.
   
Należy skorzystać z funkcji bibliotecznych `qsort()` i `bsearch()`.  

Informację o adresie łańcucha i jego krotności należy umieścić w odpowiedniej strukturze.

Podział programu na funkcje może być inny niż w zadaniu 8.1, np.
- zamiast funkcji wczytującej n łańcuchów, należy rozważyć, czy nie lepiej byłoby napisać funkcji wczytującej jeden łańcuch,
- należy rozważyć, czy napisać osobne funkcje obsługujące przypadki gdy wczytany łańcuch
  - jest taki sam, jak już zapisany (i trzeba zwiększyć jego krotność),
  - jest łańcuchem "nowym". (nie ma takiego łańcucha wśród już zapisanych).

### Tasks 9.x:
---
#### 9.2

Struktura `Vector` składa się z:  
- `data`: wskaźnika do początku (dynamicznie alokowanej) tablicy przechowującej dane wektora,
- `elSize`: rozmiaru elementu wektora (w bajtach),
- `size`: aktualnej liczby elementów wektora,
- `capacity`: pojemności wektora (rozmiaru aktualnie zaalokowenej tablicy danych).

Należy napisać definicje funkcji wymienionych w punktach 1 - 7 (pozostałe - nadobowiązkowo):

1. `init_vector()` – dynamicznie alokuje tablicę danych na zadaną pojemność początkową i inicjalizuje pozostałe pola.
2. `reserve()` – realokuje tablicę danych tak, żeby miała co najmniej zadaną pojemność. Jeżeli zadana pojemność nie przekracza aktualnej, funkcja nic nie robi.
3. `resize()` – ma dostosować pojemność do zadanej liczby, gdy mniejsza - usuwa elementy, gdy większa - uzupełnia elementami pustymi.
4. `push_back()` – dodaj element o zadanej wartości na koniec wektora, f
5. `push_front()` - dodaj element o zadanej wartości na początek wektora.
6. `dump_data()` - wyprowadź na ekran wszystkie dane zapisane w wektorze.
7. `clear()` – usuń wszystkie elementy z wektora.
8. `insert()` – dodaj element na zadanej pozycji.
9. `erase()` – usuń element wektora na zadanej pozycji.
10. `erase_value()` – usuń wszystkie elementy wektora o zadanej wartości.
11. `shrink_to_fit()` – dopasuj rozmiar tablicy do aktualnej liczby elementów wektora

> [!WARNING]
> - Przy dodawaniu elementów do wektora (funkcje `push_back()`, `push_front()`, `insert()`) - jeżeli konieczne jest zwiększenie pojemności wektora, pojemność jest zwiększana do rozmiaru dwukrotnie większego.
> - Do zmiany wielkości tablicy (pojemności wektora) należy używać funkcję `realloc()`.
> - Do kopiowania fragmentów pamięci o zadanym rozmiarze proszę wykorzystać funkcję
>   - `memcpy()` (jeżeli obszary nie mają części wspólnej) lub
>   - `memmove()` (jeżeli się przecinają).
> - Po usunięciu elementu wektora, elementy "dalsze"  należy przesunąć tak, aby nie pozostawały elementy "puste".

**W funkcji main() jest**:
- definiowany wektor V1, w którym zapisywane są liczby typu double, początkowa pojemność wystarcza na zapisania 5 liczb,
- wywoływane są funkcje (w podanej kolejności), 
  - 2 razy `push_front()` z danymi `1.` i `2.`,
  - 4 razy `push_back()` z danymi `10.`, `2.`, `14.`, `16.`,
  - 1 raz `push_front()` z daną `100.`,
- jeżeli zostały zdefiniowane funkcje 8-11, to należy je także wywołać,
- `dump_data()`.

> [!NOTE]
> **Zadanie dodatkowe ("treningowe")**:  
> W tym samym programie (używając tych samych funkcji ogólnego przeznaczenia) zdefiniować drugą strukturę `Vector V2`, ale przeznaczoną dla danych typu łańcucha znaków. 
> Wykonać podobną sekwencję wywołań funkcji obsługujących wektor `V2`.
> Przy usuwaniu elementów wektora należy pamiętać o zwolnieniu pamięci przydzielonej dla danej.

## Lecture notes:

### PP 1 - 07.12.2023

#### odniesienie do wartości structa

- dla pointera `x -> data`
- dla referencji `x.data`

#### realloc

```c
realloc(p, n);
//p - ptr do pamięci, n - nowy rozmiar
```

#### typedef

1. Definicja typu

```c
typedef struct {...} Vector;

Vector V1;
```

2. Definicja struktury

```c
struct Vector {...};

struct Vector V2;
```

#### typ bajtowy

```c
void* data = malloc(SIZE);

data + n;
// przesunięcie pointera data o n * sizeof(void) !błąd
(char*)data + n;
// przesunięcie pointera data o n * sizeof(char)
// 1 Bajt - uniwersalne przesuwanie poinera
```

#### zarządzanie bajtami pamięci

```c
void * memcpy( void * destination, const void * source, size_t num );
//bloki pamięci **NIE** mogą na siebie nachodzić
void * memmmove( void * destination, const void * source, size_t num );
//bloki pamięci mogą na siebie nachodzić
```

### PP 1 - 30.11.2023

#### qsort

```c
void qsort(
void * base,
size_t num,
size_t width,
int( * compare )( const void *, const void * )
);
```

#### bsearch

```c
void * bsearch(
const void * key,
const void * base,
size_t num,
size_t width,
int( * compare )( const void *, const void * )
);
```

### PP 1 - 23.11.2023

#### Tablice wielowymiarowe

_jeden może zostać pusty_

```c
void f(int t2[][3], int wiersze){};

f(t2D, 5);
```

```c
void f(int (*t2)[3], int wiersze){};

f(t2D, 5);
```

_podanie adresu pierwszego elementu pozwala pomoniąć rozmiar tablicy / trzeba manualnie adresować elementy_

```c
void f(int *t2, int rows, int cols){
    // t2D[i][j]
    *(t2D+i*cols+j);
}
f(t2D[0], 5, 3);
```
