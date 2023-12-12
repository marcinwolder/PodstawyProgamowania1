# PodstawyProgramowania1

<img src="./img/agh.png" width="100px" align="left"></img>

<div>
  <br/>
  Repository for the subject "Podstawy Programowania 1" <br/>
  Lecturer: <b>Janusz Miller</b>
</div>

<br/>

## Content List:

- [Task list](https://github.com/marcinwolder/PodstawyProgamowania1?tab=readme-ov-file#list-of-tasks)
- [Lecture notes](https://github.com/marcinwolder/PodstawyProgamowania1?tab=readme-ov-file#lecture-notes)
- Instructions for tasks

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
typedef struct tagVector {...} Vector;

Vector V1;
```

2. Definicja struktury

```c
struct tagVector {...};

struct tagVector V2;
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
