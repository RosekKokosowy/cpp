#include <iostream>

/*
W C++, namespace (przestrze� nazw) s�u�y do grupowania powi�zanych funkcji, klas i zmiennych,
aby unikn�� konflikt�w nazw, kt�re mog� pojawi� si�, gdy r�ne cz�ci
kodu maj� takie same identyfikatory (np. dwie funkcje o
nazwie print w r�nych bibliotekach).

Najcz�ciej u�ywan� przestrzeni� nazw jest std,
kt�ra zawiera elementy standardowej biblioteki C++.
Aby korzysta� z jej funkcji, np. cout, mo�na pisa�:

std::cout << "Hello, World!" << std::endl;

ALE mo�na te� doda�:

using namespace std;

co pozwala na pomini�cie std:: przed elementami z tej przestrzeni nazw, np.:

cout << "Hello, World!" << endl;

Stosowanie namespace pomaga w organizacji kodu i zapobiega przypadkowemu
nadpisaniu nazw u�ywanych w innych bibliotekach lub cz�ciach programu.
*/
