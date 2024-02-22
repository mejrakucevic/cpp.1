#include <iostream>
#include <time.h>
// Rock Paper Scissors game
// kako se igra?
// Postoji rock, paper i makaze. Igrac bira izmedju ova 3 izbora. Ako protivinik (kompjuter) napravi isti izbor kao igrac, onda je igra jednaka. 
// za papir : pobedjuju makaze
// za kamen : pobedjuje paper
// za makaze : pobedjuje kamen

using namespace std;

int computer(int izbor) {
    if (izbor == 1) {
        return 1; // rock
    } else if (izbor == 2) {
        return 2; // paper
    } else return 3; // scissors

}

int main () {
       srand(time(NULL)); 
      int izbor = (rand() % 3) + 1;
      int player;

      cout << "------------------ROCK PAPER SCISSORS--------------------:\n1.Rock\n2.Paper\n3.Scissors\n4.Exit\nChoose! ";
      cin >> player;

      do { 

      srand(time(NULL)); 
      int izbor = (rand() % 3) + 1;
     
      if (player == 1 && computer(izbor) == 1) {
        cout << "---Computer chose : Rock\n---EQUAL---";
      } else if (player == 1 && computer(izbor) == 2) {
        cout << "---Computer chose : Paper\n---YOU LOOSE!---";
      } else if (player == 1 && computer(izbor) == 3) {
        cout << "---Computer chose : Scissors\n---YOU WIN!---";
      }

         if (player == 2 && computer(izbor) == 2) {
        cout << "---Computer chose : Paper\n---EQUAL---";
      } else if (player == 2 && computer(izbor) == 1) {
        cout << "---Computer chose : Rock\n---YOU WIN!---";
      } else if (player == 2 && computer(izbor) == 3) {
        cout << "---Computer chose : Scissors\n---YOU LOOSE!---";
      }

      if (player == 3 && computer(izbor) == 3) {
        cout << "---Computer chose : Scissors\n---EQUAL---";
      } else if (player == 3 && computer(izbor) == 1) {
        cout << "---Computer chose : Rock\n---YOU LOOSE!---";
      } else if (player == 3 && computer(izbor) == 2) {
        cout << "---Computer chose : Paper\n---YOU WIN!---";
      } 

      cout << "\nPlay again:\n1.Rock\n2.Paper\n3.Scissors\n4.Exit\nChoose! ";
      cin >> player;
      
      } while (player != 4);
    
      return 0;
}