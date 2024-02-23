#include <iostream>
#include <string>
#include <cmath>

using namespace std;
// 7. make a program that asks for the user's full name, and prints the name on the screen
// immediatly after 



// int namePrint(string name) {
//     cout << "Please enter your full name: ";
//     getline(cin, name);
//     cout << "Your name is: " << name;
// }

// int main() {
//     string name;
//     namePrint(name);
//    return 0;
// }

// 8. Make a program that reads the names of three people in sequence, followed by their respective ages, and prints each name with their respective ages on the screen

// int main() {
//       string name1, name2, name3;
//       int age1, age2, age3;
//       cout << "Please enter first name: ";
//       getline(cin, name1);

//       cout << "Please enter first age: ";
//       cin >> age1;

//       cin.ignore();

//       cout << "Please enter second name: ";
//       getline(cin, name2);

//       cout << "Please enter second age: ";
//       cin >> age2;

//       cin.ignore();

//       cout << "Please enter third name: ";
//       getline(cin, name3);

//       cout << "Please enter third age: ";
//       cin >> age3;

//       cout << "People: \n";
//       cout << name1 << ", age: " << age1 << '\n';
//       cout << name2 << ", age: " << age2 <<'\n';
//       cout << name3 << ", age: " << age3 <<'\n';


//      return 0;

// }

// 9. Make a program that reads the names of three people in sequence, followed by their respective ages and heights, and prints the data in table format on the screen

// int main() {
//     string name1, name2, name3;
//     int age1, age2, age3;
//     float height1, height2, height3;

//     cout << "Enter the name of the 1st person: ";
//     getline(cin, name1);

//     cout << "Enter the age of the 1st person: ";
//     cin >> age1;

//     cout << "Enter the height of the 1st person: ";
//     cin >> height1;

//     cin.ignore();

//     cout << "\nEnter the name of the 2st person: ";
//     getline(cin, name2);

//     cout << "Enter the age of the 2st person: ";
//     cin >> age2;

//     cout << "Enter the height of the 2st person: ";
//     cin >> height2;

//     cin.ignore();

//     cout << "\nEnter the name of the 3st person: ";
//     getline(cin, name3);

//     cout << "Enter the age of the 3st person: ";
//     cin >> age3;

//     cout << "Enter the height of the 3st person: ";
//     cin >> height3;

//     cout << "Name: " << name1 << " " << name2 << " " << name3 << '\n';
//     cout << "Age: " << age1 << " " <<  age2 << " " <<  age3 << '\n';
//     cout << "Height: " << height1 << " " <<  height2 << " " <<  height3;

//     return 0;
// }

// 11. Write a program that prompts the user for two numbers and displays the addition, subtraction, multiplication, and division between them

// int main() {
//     float num1, num2;
    
//     cout << "Enter 1st number: ";
//     cin >> num1;

//     cout << "Enter 2nd number: ";
//     cin >> num2;

//     cout << "Addition: "<< num1 << " + " << num2 << " = " << num1 + num2 << '\n';
//     cout << "Subtraction: "<< num1 << " - " << num2 << " = " << num1 - num2 << "\n";
//     cout << "Multiplication: "<< num1 << " * " << num2 << " = " << num1 * num2 << "\n";
//     cout << "Division: "<< num1 << " / " << num2 << " = " << num1 / num2 << "\n";

// // 12. Arithmetic mean
//     float arimeticka = (num1 + num2) / 2;
//     cout << "Aritmethic mean: " << arimeticka;

//     return 0;


// }

// 14. Write a program that reads two numbers, the first being the base and the second the exponent, and then printing the first number raised to the second  // 

// int main (){
//     int base, exp;
//     cout << "Enter the base: ";
//     cin >> base;
//     cout << "Enter the exponent: ";
//     cin >> exp;

//     int raised = pow(base, exp);
//     cout << base << " raised to " << exp << " equals " << raised;
     
//     return 0;
// }

// 16. Write a program that calculates the geometric mean of
// 3 numbers entered by the user -> geomean = 3SQRTn1*n2*n3

// int main(){
//     double n1,n2,n3;
//     double result;

//      cout << "Enter first number: ";
//      cin >> n1;

//      cout << "Enter second number: ";
//      cin >> n2;

//      cout << "Enter third number: ";
//      cin >> n3;

//      result = cbrt(n1*n2*n3); // cbrt za treci koren
//      cout << "Geometric mean is " << result;
// }

// 17. Write a BMI calculator

// int main() {

//     double weight, height;
//      cout << "----------BMI Calculator----------\n";
//     cout << "Enter your weight: ";
//     cin >> weight;

//     cout << "Enter your height: (in meters) ";
//     cin >> height;
    
//     double bmi =  weight / pow(height, 2);
//     cout << "Your BMI is " << bmi;

//     if (bmi < 17.8) {
//         cout << "\nYour BMI is catogerized as underweight";
//     } else if (bmi > 26.1) {
//         cout << "\nYour BMI is catogerized as overweight";
//     } else cout << "\nYour BMI is catogerized as healthy weight";

//     return 0;
// }

// 30. Make a program that reads a value of a product and the tax, in percentage, and calculates the final value of it.

// int main() {
    
//     double value, tax;
//     cout << "Enter the value of the product: ";
//     cin >> value;

//     cout << "Enter the tax percentage ";
//     cin >> tax;

//     // taksa value puta tax
//     // ukupna cena price + taksa

//     double taksa = value * (tax/100.0);
//     double total = taksa + value;
//     cout << "Final value of the product is: " << total;
//     return 0;
// }

// 32. Write a program that reads a number and reports whether it is odd or even

// int main() {
//      int num;
//      cout << "Enter a number: ";

//      cin >> num;

//      if (num % 2 == 0) {
//         cout << num << " is even.";
//      } else cout << num << " is odd.";

// }

// 34. Program that reads 3 numbers and checks if their sum is positive, negative or equal to zero
// int main() {
//     double n1,n2,n3;
//     cout << "Enter first number: ";
//      cin >> n1;
//       cout << "Enter second number: ";
//      cin >> n2;
//       cout << "Enter third number: ";
//      cin >> n3;

//      double sum = n1+n2+n3;
//      if (sum == 0) {
//         cout << "Sum is equal to zero";
//      } else if (sum > 0) {
//                 cout << "Sum is positive";
//      } else cout << "Sum is negative.";  

// return 0;
// }

// 36. Program that asks the user for 3 numbers and displays the largest one
// int main() {
//         double n1,n2,n3;
//     cout << "Enter first number: ";
//      cin >> n1;
//       cout << "Enter second number: ";
//      cin >> n2;
//       cout << "Enter third number: ";
//      cin >> n3;

//        if (n1 > n2 && n1 > n3) {
//         cout << "Number 1 : " << n1 << " is the largest one!";
//        } else if (n2 > n1 && n2 > n3) {
//         cout << "Number 2 : " << n2 << " is the largest one!";
//        } else if (n3 > n1 && n3 > n2) {  cout << "Number 3 : " << n3 << " is the largest one!";
//        } else if (n1 == n2 == n3) {
//         cout << "All numbers are equal!";
//        }
// return 0;
// }

// 42. Make a program that reads the age of 3 people and how many of them are of legal age

// int main() {
//             double n1,n2,n3;
//     cout << "Enter first number: ";
//      cin >> n1;
//       cout << "Enter second number: ";
//      cin >> n2;
//       cout << "Enter third number: ";
//      cin >> n3;

//      int count = 0;

//      if (n1 >= 18) {
//         count++;
//      } if (n2 >= 18) {
//         count++;
//      } if (n3 >= 18) {
//         count++;
//      }

//      cout << count;

//     return 0;
// }