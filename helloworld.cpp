#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t

// typedef std::string string_t;
namespace first{
    int m = 22;
}

using stringT = std::string; // isto kao typedef

int main() {
    // stringT Mejra = "Mejra";
    // int correct = 8;
    // int questions = 10;
    // double score = correct/(double)questions * 100;
    // std::cout << score << "%";

    // std::cout << "What's your age: ";
    // int age;
    // std::cin >> age;

    // std::cout << "You are " << age << " years old";

    std::cout << "What's your full name? ";
    stringT namee;
    std::getline(std::cin >> std::ws, namee);

    std::cout << namee;
 
  
    // Ovo je komentar
    // std::cout << "Ja volim kafu!\n";
    // std::cout << "Volis li ti?" << std::endl;

    // int x = 19;
    // int y = 2;
    // int suma = x + y;
    // std::cout << x << '\n';
    // std::cout << y << '\n';
   

    // int godina = 2024;
    // double prosek = 9.1;
    // std::cout << prosek;

    // char ocena = 'A';
    // char inicijal = 'F' ;

    // std::cout << inicijal << '\n';

    // bool student = true;
    // bool forSale = false;

    // std::string ime = "Mejra";
    // std::cout << ime << '\n';

    // std::string dan = "Petak";
    // std::cout << dan << '\n';

    // std::cout << "Hello " << ime << ", You are " << x << " years old!";
     
    // const int WW1 = 1914;
    // using namespace first;
    // using std::string;

    // string name = "mejra";
    // std::cout << name;
   
    // int m = 1;
    // std::cout << m;

     return 0;
}