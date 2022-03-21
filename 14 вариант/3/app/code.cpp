/*
  Составить две программы, первая из которых вводит составные части структуры данных,
  приведѐнной в индивидуальном варианте, как десятичные числа и формирует из них заданную
  упакованную структуру как 16-ричное число. Вторая программа вводит упакованную структуру
  как 16-ричное число и выводит значения отдельных еѐ составных частей как десятичные числа.
*/

#include <iostream>
#include "lib.h"
#include "time.h"

using namespace std;

int main() {
  // смена кодировки
  system("chcp 65001");

  int s = 0; // секунды
  int m = 0; // минуты
  int h = 0; // часы

  draw_line(20);

  cout << "Секунды: ";
  s = read_int();

  cout << "Минуты: ";
  m = read_int();

  cout << "Часы: ";
  h = read_int();

  draw_line(20);

  unsigned short z =  code(s, m, h);
  cout << "Формат времени: 0x" << hex << z << endl;

  return 0;
}
