#include <iostream>
#include <string>
void main() {
int a;
int b;
int c;
int d;
int r;
do {
std::cout << "Enter number 1 : \n " ;
std::cin >> a;
std::cout << "\n";
std::cout << "Enter number 2: \n " ;
std::cin >> b;
std::cout << "\n";
std::cout << "Choose your opeartion : \n 1-add \n 2-Div \n 3-multi \n 4-sub \n " ;
std::cin>> d ;
std::cout << "\n";

if (d==1){
std::cout << "\n";
	c = a + b;
std::cout << c;
std::cout << "\n";
std::cout << "\n";
}
else if (d==2) {
	std::cout << "\n";
	c = a / b ;
	std::cout << c;
	std::cout << "\n";
std::cout << "\n";
}
else if (d==3) {
	std::cout << "\n";
	c = a * b ;
	std::cout << c;
	std::cout << "\n";
std::cout << "\n";
}
else {
	std::cout << "\n";
	c = a - b; 
	std::cout << c;
	std::cout << "\n";
std::cout << "\n";
}
std::cout << "\n";
std::cout << "Would you like to Another Opeartion?(Yes = 1 , No = 2 ) \n " ;
std::cin >> r;

} while (r==1);
std::cout << "\n";
std::cout << "\n";
std::cout << "Bye Bye !" ;
std::cout << "\n";
system("PAUSE");
}