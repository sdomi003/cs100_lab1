#include <iostream>

int main(){
  std::string userInput;
  std::cout << "what is your name? ";
  std::cin >> userInput;
  std::cout << "hello " << userInput << "!"  << std::endl;
  return 1;
}
