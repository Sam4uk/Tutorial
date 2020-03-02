#include <cmath>
#include <iostream>
int main() {
  std::cout << R"(
Програма вираховує під яким кутом до горизонту запущено об'єкт
при відомих
Швидкості та часу польоту
  )";
  std::cout << "Enter speed V(m/s)=";
  double Speed;
  std::cin >> Speed;
  std::cout << "Enter time T(s)=";
  double Time;
  std::cin >> Time;
  const double k_G{9.1};
  double Alpha = asin((k_G * Time) / (2 * Speed));
  std::cout << "Alpha=" << Alpha << std::endl;
  return 0;
}