#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
// typedef std::vector<std::pair<std::string, int>> pairlist_t

// typedef std::string string_t;

//using namespace std;

// void happyBday(string name, int age) {  // function = a block of reusable code

//     cout << "Happy birthday to " << name << '\n';
//     cout << "Happy birthday to you!\n";
//     cout << "Happy birthday dear you " << name << '\n';
//     cout << "Happy " << age << '\n'; 
//}

// int square(double length) {
//     double result = length*length;
//     return result;
// }
// void bakePizza() {
//     cout << "Here is your pizza\n";
// }

// void bakePizza(string topping1) {
//     cout << "Here is your pizza with " << topping1;

// }
// void bakePizza(string topping1, string topping2) {
//     cout << "\nHere is your pizza with " << topping1 <<" and " << topping2;

// }

 // --------------------------------------------------------------------------------------------------------------------------------
    // ------ Bank Management System using Class in C++ ----------
    // Opening an account
    // Show account info
    // Deposit
    // Withdraw
    // Search
// void openAccount(string& name, string yrBirth, int& id) { // strings need pointers WOMP WOMP
//     cout << "Welcome to MK Bank!\n";

//     cout << "Please enter your full name: ";
//     cin.ignore();
//     getline(cin, name);
    

//     cout << "\nPlease enter your date of birth: ";
//     cin >> yrBirth;

    
//     cout << "\nPlease enter your ID number: ";
//     cin >> id;

//     cin.ignore();

//     cout << "\nAccount successfully created!";
// }

// int AccountInfo(string& name, int id, double& balance) {
//     cout << "Name: " << name;
//     cout << "\nID: " << id;
//     cout << "\nBalance: $" << balance;
// }

// int Deposit(double deposit, double& balance) {
//     cout << "Enter the amount you want to deposit: ";
//     cin >> deposit;
//     cout << "\n$"<< deposit << " has been sucessfully deposited";
//     balance += deposit;
    
// }

// int Withdraw(double& balance, double withdraw) {
//     cout << "Enter the amount you want to withdraw: ";
//     cin >> withdraw;
//     if (balance < withdraw) {
//         cout << "Funds not available.";

//     } else {
//         cout << "\n$"<< withdraw << " has been sucessfully withdrawn";
//         balance = balance - withdraw;
//     }
// }

//  int main() {
//     string name, yrBirth;
//     double  deposit, withdraw;
//     double balance = 0;
//     int id, menu;

//     cout << "Welcome to MK Bank!\nMenu:\n1. Open Accout\n2. Account Info\n3. Deposit\n4. Withdraw\n5. Exit";
//      cout << "\nPlease enter the number of action: ";
//     cin >> menu;

//   do { 
    
//     switch(menu) {
//         case 1: 
//         openAccount(name, yrBirth, id);
//         break;

//         case 2:
//         AccountInfo(name, id, balance);
//         break;

//         case 3:
//         Deposit(deposit, balance);
//         break;

//         case 4:
//         Withdraw(balance, withdraw);
//         break;

//         case 5:
//         cout <<"Exiting...";
//         break;

//     }     cout << "\n1. Open Accout\n2. Account Info\n3. Deposit\n4. Withdraw\n5. Exit";
 
//     cout << "\nPlease enter the number of action: ";
//       cin >> menu;
//     } while(menu != 5);

 // --------------------------------------------------------------------------------------------------------------------------------


    // bakePizza();

    
    // bakePizza("cheese");
    // bakePizza("cheese", "mushrooms");
    // double length = 5.0;
    // cout << square(length);
    // string name = "Mejra";
    // int age = 19;
    // happyBday(name, age);
    //  happyBday(name, age);
   
    // random number generating
    // srand(time(NULL));
    // int r = (rand() % 50) + 1;
    // pseudo random broj: 
    //srand time null
    // rand $ broj + 1

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

// To-Do List Application:

// add a task
// remove task
// view tasks
//  using namespace std; 
// const int maxTasks = 5;
// cout << "To-Do List Application\n";
//      vector<string> tasks;
//      int numTasks = 0;
//        int choice;
//        int taskNum;
//         string newTask;

//     cout << "Menu\n1. Add Task\n2. Remove Task\n3. View Tasks\n4.Exit\n";
//      do { 
//        switch(choice) {
//         case 1:
//             cout << "Enter a task: ";
//             cin.ignore();
//             getline(cin, newTask);
//             tasks.push_back(newTask); 
//             ++numTasks;
//             break;
//         case 2:
//            for (int i = 0; i < numTasks; i++) {
//             cout << i+1 << "." << tasks[i] << endl;
//            }
//            cout << "Enter the number of task you wanna remove: ";
//            cin >> taskNum;

//            tasks.erase(tasks.begin() + taskNum - 1);

//            for (int i = 0; i < numTasks; i++) {
//             cout << i+1 << "." << tasks[i] << endl;
//            }
//            break;
//         case 3:
//            for (int i = 0; i < numTasks; i++) {
//             cout << i+1 << "." << tasks[i] << endl;
//            }
//            break;
//         case 4:
//             cout << "Exiting...";
//             return 0;
//        } 
//       cout << "Enter your choice: ";
//        cin >> choice;
//        } while(choice != 4);


//      return 0;
// }

// int getTotal(int numbers[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += numbers[i];
//     }
//     return sum;

// }

// int searchArr(int n, int numbers[], int element) {
//     for (int i = 0; i<n; i++) {
//         if (numbers[i] == element) {
//             return i;
//         }   
//     } return -1;

// }
//int main() {

    // BUBBLE SORT ALGORITHM
    // int arr[] = {7,6,99,20,1,5,3};
    // int n = sizeof(arr)/sizeof(int);

    // int temp;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n-1; j++) {
    //         if (arr[j] > arr[j+1]) {
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }

   // string pizzas[5] = {"pizza","pizza","pizza","pizza","pizza" };

    // string foods[50];
    // fill (foods, foods+50, "apple");
    // for (string food: foods) {
    //     cout << food << " ";

    // }

    // string foods[3];
    // int n = sizeof(foods)/sizeof(string);
      
    //   // USER INPUT IN ARR
    // for (int i = 0; i<n; i++) {
    //     cout << "Enter a food you like #" << i+1 << ": ";
    //     getline(cin, foods[i]);
       
    // }
    //  cout << "You like: ";
    //  for (int i = 0; i<n; i++) {
    //     cout << foods[i] << " ";
       
    // }


    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // string cars[] = {"Audi", "Opel", "Ferrari"};
    // int sum;
    // // int n = sizeof(car)/sizeof(string); // !!!!!!!!!!!!!!!!!!!!!!!!

    // // for each loop
    // //  for (int number : numbers) {
    // //     cout << number;
    // //  }


    // int numbers[] = {9, 64, 32, 344};
    // int n = sizeof(numbers)/sizeof(int);
    // // int total = getTotal(numbers, n);
    // // cout << total;

    // int num, index;
    // cout << "Enter a number to search for: ";
    // cin >> num;
    // index = searchArr(n, numbers, num);
    
    // if (index != -1) {
    //     cout << num << " is at index " << index;
    // } else {
    //     cout << num << " not found ";
    // }

    
   
    //cout << car[1];
    
   
//     return 0;

// }

using namespace std;

// void swap(string &x, string &y) {
//     string temp;

//     temp = x;
//     x = y;
//     y = temp;

// }

// void printInfo(const string name, const int age) {
//     //age = 20;
//     cout << name << "\n";
//     cout << age;

// }

class BankAccount {
  public:
    string holderName;
    int accNumber;
    float balance;

    void balance() {
        cout << "Balance is: " << balance;
    }

};


class Ljudovi {
    public :
    string name;
    int god;
    string mbti;
     
     void introduce() {
        cout << "\nINFO: \nName: " << name << "\nAge: " << god << "\nMbti: "<< mbti;

     }
      
      // constructor
     Ljudovi(string n, int g, string m) {
        name = n;
        god = g;
        mbti = m;

     }

};
int main() {
    Ljudovi Ljudov1=Ljudovi("Ena", 2000, "ENTJ");
   
    Ljudov1.introduce();

    Ljudovi Ljudov2=Ljudovi("Mejra", 2004, "INFJ");;

    Ljudov2.introduce();
    






    // string name = "Mejra";
    // int age= 19;
    // string freePizzas[5] = {"pizza1", "pizza2","pizza3","pizza4","pizza5"};
    // string *pFreePizzas = freePizzas;

    // string *pName = &name;
    // int *pAge = &age;

    // cout << *pName;
    // cout << *pAge;
    // cout << pFreePizzas;

    // int *pointer = nullptr;
    // int x = 123;

    // pointer = &x;

    // int *point = nullptr;
    // int age = 19;

    // point = &age;

    // cout << age;
    
    // string x = "pepsi";
    // string y = "cola";
    
    //  swap(x, y);
    // cout << "X: " << x << '\n' << "Y: " << y;
    
    // string name = "Mejra";
    // int age = 19;
    // bool student = true;

    // & - memory adress = location iaaan memory where data is stores
    // cout << &name << '\n';aa
    // cout << &age << "\n";
    // cout << &student;
    //  string cars[][3] = { 
    //                     {"car1", "car2", "car3"},
    //                     {"car4", "car5", "car6"},
    //                     {"car7", "car8", "car9"},
    //  };

    //  int rows = sizeof(cars)/sizeof(cars[0]);
    //  int columns = sizeof(cars[0])/sizeof(cars[0][0]);
    //  for (int i = 0; i < rows; i++) {
    //      cout << "\n";
    //     for (int j = 0; j < columns; j++) {
    //         cout << cars[i][j] <<" ";
    //     }
    //  }

     return 0;
}