#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
// typedef std::vector<std::pair<std::string, int>> pairlist_t

// typedef std::string string_t;
namespace first{
    int m = 22;
}

using namespace std; 

int main() {
    // random number generating
    // srand(time(NULL));

    // int random1 = (rand() % 20) + 1;
    // int random2 = (rand() % 20) + 1;
    // int random3 = (rand() % 20) + 1;  // from 1 to 20
    // cout << random1 << '\n';
    // cout << random2 << '\n';
    // cout << random3 << '\n';

    // random event generator
    // srand(time(NULL));
    // int randNum = (rand() % 5) + 1;

    // switch(randNum) {
    //     case 1: cout << "You win a bumper sticker!\n"; break;

    //     case 2: cout << "You win a tshirt!\n"; break;

    //     case 3: cout << "You win a free lunch!\n"; break;

    //     case 4: cout << "You win a gift card!\n"; break;

    //     case 5: cout << "You win a ps5!\n"; 
    // }

     // number guessing game
      
    //   srand(time(NULL));

    //   int num = rand() % 50 + 1;
    //   int guessNum;

    //   cout << "Enter your guess: ";
     

    //    cout << "Number guessing game! (1-10)\n";
    //    int count = 0;
       
    //   do {
         
    //   cout << "Enter your guess: ";
    //   cin >> guessNum;

    //    if (num > guessNum) {
    //         cout << "Number is Higher!";
    //     } else if (num < guessNum) {
    //         cout << "Number is Lower!";
    //     } else cout << "Cooreect";
    //     count++;
    //   } while (num != guessNum);

    //   cout << "\ntook you " << count << " number of tries";

       
    // USEFULL STRING METHODS
    // string name;
    // cout<<"Enter your name: ";
    // getline(cin, name);

    // if (name.length() > 12) {
    //     cout << "Your name can't be over 12 characters!";
    // } else cout << "Welcome " << name;

    
    // if (name.empty()) {
    //     cout << "You didn't type anything dawg";
    // } else cout << "Welcome " << name;

    // name.clear();
    // cout << "Hello " << name;

    // name.append("@gmail.com");
    // cout << "Your email is now " << name;

    // cout << name.at(0);

    // name.insert(0, "@");
    // cout << name;

    // cout << name.find(' ');

    // name.erase(0, 6);
    // cout << name;

     // USEFULL STRING METHODS GORE

    // WHILE LOOP
    // string name;
    // int number;

    // do {
    //     cout << "Enter a positive number: ";
    //     cin >> number;
    // } while (number <= 0);

    // cout << "#" << number;

    // for (int i = 1; i <= 3; i++) {
    //     cout << i << '\n';
    // }

    // stringT Mejra = "Mejra";
    // int correct = 8;
    // int questions = 10;
    // double score = correct/(double)questions * 100;
    // std::cout << score << "%";

    // std::cout << "What's your age: ";
    // int age;
    // std::cin >> age;

    // std::cout << "You are " << age << " years old";

    //std::cout << "What's your full name? ";
   // stringT namee;
    //std::getline(std::cin >> std::ws, namee);

   // std::cout << namee;


   // double x = 3;
   // double y = 4;
   // double z = pow(2, 3);
   // double f = sqrt(64);

   // z = std::max(x,y);
    //f = std::min(x, y);

    //std::cout << z <<  '\n';
    //std::cout << f;


 
  
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

    // hipotenuza pravouglog trougla
    
    // double a, b;
    // double c;
    // std::cout << "--Kalkulator hipotenuze pravouglog trougla--" << '\n';
    // std::cout << "Unesite stranicu a: " << '\n';
    // std::cin >> a;

    // std::cout << "Unesite stranicu b: " << '\n';
    // std::cin >> b;

    // c = sqrt(pow(a, 2) + pow(b, 2));
    // std::cout << "Hipotenuza jeste: " << c;

    //  int age;
    // std::cout << "Unesite svoje godine: " << '\n';
    // std::cin >> age;

    // if (age < 0) {
    //     std::cout << "Unesite tacan broj aman";
    // } else if (age >= 18) {
    //     std::cout << "Ti si punoletna osoba";
    // } else std::cout << "Ti nisi punoletna osoba";

//     std::cout << "Unesite mesec (1-12): ";
//     int mesec;
//     std::cin >> mesec;

//     switch (mesec) {
//         case 1:
//            std::cout << "Januar je";
//            break;
//         case 2:
//            std::cout << "Februar je";
//            break;

//         case 3:
//            std::cout << "Mart je";
//            break;
//  }

     // KALKULATOR

    //  double a, b;
    //  int op;
    //  double r;
    //  std::cout << "--KALKULATOR--" << '\n';
    //  std::cout << "Unesite prvi broj:";
    //  std::cin >> a;

    //  std::cout << "Unesite drugi broj:";
    //  std::cin >> b;

    //  std::cout << '\n' << "Izaberite operaciju (1-4)" << '\n';

    //  std::cout << "1. +" << '\n' << "2. -" << '\n' << "3. *" << '\n' << "4. /";
    //  std::cin >> op;

    //  switch(op) {
    //     case 1:
    //         r = a + b;
    //         std::cout << r;
    //         break;
    //     case 2:
    //         r = a - b;
    //         std::cout << r;
    //         break;
    //     case 3:
    //         r = a * b;
    //         std::cout << r;
    //         break;
    //      case 4:
    //         r = a / b;
    //         std::cout << r;
    //         break;
    //  }


//  int age;
//     std::cout << "Unesie svoje godine: " << '\n';
//     std::cin >> age;

    // condition ? expression1 : expression2
    // uslov ? onda1 : onda2
    // age >= 18 ? std::cout << "Punoletan/na si" : std::cout << "Nisi punoletan/na"; 

     

     // temperature conversion program

    
    // std::cout << "Temperature Conversion" << '\n';
    //  std::cout << "What's the unit you're using? (C or F)" << '\n';
    //   char unit;
    //  std::cin >> unit;
    //  int F;
    //  int C;
    //  int res;

     // 1. using switch case
    //  switch(unit) {
    //     case 1:

    //     std::cout << "Temperature in Fahrenheit : " << '\n';
    //     std::cin >> F;
    //     res = (F - 32) * 5/9;
    //     std::cout << "It's " << res << "C";
    //     break;
        
    //     case 2:
    //      std::cout << "Temperature in Celsius : " << '\n';
    //     std::cin >> C;
    //     C = (C*9/5) + 32;
    //     std::cout << "It's " << C << "F";
    //     break;
            
    //  }

    // 2. using if else statements
    // if (unit == 'F'  || unit == 'f') {
    //     std::cout << "Enter the temperature:" << '\n';
    //     std::cin >> F;
    //     res = (F - 32) * 5/9;
    //     std::cout << "Temperature is " << res << "C";
    // } else if (unit == 'C' || unit == 'c') {
    //     std::cout << "Enter the temperature:" << '\n';
    //     std::cin >> C;
    //     res =  (C*9/5) + 32;
    //     std::cout << "Temperature is " << res << "F";
    // } else std::cout << "Incorrect user input!";

     return 0;
}