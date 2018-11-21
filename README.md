## Implementacja DAS

A = { a,b }
r = ab*a
T = {s2}
______________________________
| f: A->S | s0 | s1 | s2 | s3 |

|    a    | s1 | s2 | s3 | s3 |  

|    b    | s3 | s1 | s3 | s3 |

------------------------------

| f: A->S         | s0           | s1           | s2           | s3  |
| ------------- |:-------------: |:-------------:|:-------------:| -----:|
|    a      | s1 | s2| s3| s3 |
|    b     | s3      | s1| s3|   s3 |



Implementacja deterministycnzego automatu skończonego dla wyrażenia reguralnego ab*a
zbudowanego nad alfabetem 'a','b'.


Stan s0 rozpoczyna się etykietą s0. Dalej następuje wczytanie znaku z
wejścia i sprawdzenie czy nie jest to przypadkiem ostatni znak.

Jeśli nie to zgodnie z zapisem znajdującym się w tabeli przejść następuje skok
do etykiety oznaczającej pożądany stan.


UWAGA stan s2 jest jedynym stanem akceptujacym, wiec w przypadku nie pojawienia się żadnych danych na wejściu wypisywana zostaje informacja o tym że przetwarzanie zakończyło się sukcesem.


* Plusem tego podejścia do implementacji analizatora leksykanlnego
jest jego wydajność.
* Minusem natomiast jest stopień komplikacji towarzyszący przy wprowadzaniu zmian do tak zaprojektowanego analizatora.

# http://wazniak.mimuw.edu.pl/index.php?title=Pok-2-wyk-Slajd31
