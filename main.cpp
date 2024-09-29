#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // rossz: N_ELEMENTS nev helyett NELEMENTS ami nem letezik
    std::cout << '1-100 ertekek duplazasa';

    for (int i = 0;)  // rossz: a for ciklus hianyos
    {
        b[i] = i * 2;
    }

    for (int i = 0; i; i++)  // rossz: a ciklus feltétele mindig hamis lesz, mert i kezdetben 0, így a ciklus nem fut le
    {
        std::cout << "Ertek:";
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;

    for (int i = 0; i < N_ELEMENTS, i++)  // rossz: vesszo, helyette pontosvesszo
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; // memoriaszivargas
}
