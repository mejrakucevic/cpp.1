#include <iostream>


int main() {
    // Ovo je komentar
    std::cout << "Ja volim kafu!\n";
    std::cout << "Volis li ti?" << std::endl;

    int x = 19;
    int y = 2;
    int suma = x + y;
    std::cout << x << '\n';
    std::cout << y << '\n';
   

    int godina = 2024;
    double prosek = 9.1;
    std::cout << prosek;

    char ocena = 'A';
    char inicijal = 'F' ;

    std::cout << inicijal << '\n';

    bool student = true;
    bool forSale = false;

    std::string ime = "Mejra";
    std::cout << ime << '\n';

    std::string dan = "Petak";
    std::cout << dan << '\n';

    std::cout << "Hello " << ime << ", You are " << x << " years old!";
     
    const int WW1 = 1914;

     return 0;
}