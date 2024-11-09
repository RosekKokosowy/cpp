#include <iostream>

/*
W C++, namespace (przestrzeñ nazw) s³u¿y do grupowania powi¹zanych funkcji, klas i zmiennych,
aby unikn¹æ konfliktów nazw, które mog¹ pojawiæ siê, gdy ró¿ne czêœci
kodu maj¹ takie same identyfikatory (np. dwie funkcje o
nazwie print w ró¿nych bibliotekach).

Najczêœciej u¿ywan¹ przestrzeni¹ nazw jest std,
która zawiera elementy standardowej biblioteki C++.
Aby korzystaæ z jej funkcji, np. cout, mo¿na pisaæ:

std::cout << "Hello, World!" << std::endl;

ALE mo¿na te¿ dodaæ:

using namespace std;

co pozwala na pominiêcie std:: przed elementami z tej przestrzeni nazw, np.:

cout << "Hello, World!" << endl;

Stosowanie namespace pomaga w organizacji kodu i zapobiega przypadkowemu
nadpisaniu nazw u¿ywanych w innych bibliotekach lub czêœciach programu.
*/
