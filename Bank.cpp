#include <iostream>
using namespace std;
 
int main()
{
setlocale(LC_ALL, "rus");
 
int enterNumber = 0;
 
cout << "Введите целое число (от 1 до 100000): ";
cin >> enterNumber;
 
if (enterNumber <= 0 ||enterNumber > 100000) 
 cout << "Число не входит в диапазон от 1 до 100000!\n";
else 
{
 cout << "\nВы ввели: ";

 if (enterNumber == 100000) cout << "Сто тысяч ";

 if ((enterNumber / 10000) % 10 == 1) cout << "Десять тысяч ";
 else if ((enterNumber / 10000) % 10 == 2) cout << "Двадцать ";
 else if ((enterNumber / 10000) % 10 == 3) cout << "Тридцать ";
 else if ((enterNumber / 10000) % 10 == 4) cout << "Сорок ";
 else if ((enterNumber / 10000) % 10 == 5) cout << "Пятьдесят ";
 else if ((enterNumber / 10000) % 10 == 6) cout << "Шестьдесят ";
 else if ((enterNumber / 10000) % 10 == 7) cout << "Семьдесят ";
 else if ((enterNumber / 10000) % 10 == 8) cout << "Восемьдесят ";
 else if ((enterNumber / 10000) % 10 == 9) cout << "Девяносто ";

 if ((enterNumber / 1000) % 10 == 1) cout << "Одна тысяча ";
 else if ((enterNumber / 1000) % 10 == 2) cout << "Две тысячи ";
 else if ((enterNumber / 1000) % 10 == 3) cout << "Три тысячи ";
 else if ((enterNumber / 1000) % 10 == 4) cout << "Четыре тысячи ";
 else if ((enterNumber / 1000) % 10 == 5) cout << "Пять тысяч ";
 else if ((enterNumber / 1000) % 10 == 6) cout << "Шесть тысяч ";
 else if ((enterNumber / 1000) % 10 == 7) cout << "Семь тысяч ";
 else if ((enterNumber / 1000) % 10 == 8) cout << "Восемь тысяч ";
 else if ((enterNumber / 1000) % 10 == 9) cout << "Девять тысяч ";
 
 
 if ((enterNumber / 100) % 10 == 1) cout << "сто ";
 else if ((enterNumber / 100) % 10 == 2) cout << "двести ";
 else if ((enterNumber / 100) % 10 == 3) cout << "триста ";
 else if ((enterNumber / 100) % 10 == 4) cout << "четыреста ";
 else if ((enterNumber / 100) % 10 == 5) cout << "пятьсот ";
 else if ((enterNumber / 100) % 10 == 6) cout << "шестьсот ";
 else if ((enterNumber / 100) % 10 == 7) cout << "семьсот ";
 else if ((enterNumber / 100) % 10 == 8) cout << "восемьсот ";
 else if ((enterNumber / 100) % 10 == 9) cout << "девятьсот ";
 
 if ((enterNumber / 10) % 10 == 1)
 {
 if (enterNumber % 10 == 0) cout << "десять рублей";
 else if (enterNumber % 10 == 1) cout << "одинадцать рублей";
 else if (enterNumber % 10 == 2) cout << "двенадцать рублей";
 else if (enterNumber % 10 == 3) cout << "тринадцать рублей";
 else if (enterNumber % 10 == 4) cout << "четырнадцать рублей";
 else if (enterNumber % 10 == 5) cout << "пятнадцать рублей";
 else if (enterNumber % 10 == 6) cout << "шестнадцать рублей";
 else if (enterNumber % 10 == 7) cout << "семнадцать рублей";
 else if (enterNumber % 10 == 8) cout << "восемнадцать рублей";
 else if (enterNumber % 10 == 9) cout << "девятнадцать рублей";
 }
 
 if ((enterNumber / 10) % 10 == 2) cout << "двадцать ";
 else if ((enterNumber / 10) % 10 == 3) cout << "тридцать ";
 else if ((enterNumber / 10) % 10 == 4) cout << "сорок ";
 else if ((enterNumber / 10) % 10 == 5) cout << "пятьдесят ";
 else if ((enterNumber / 10) % 10 == 6) cout << "шестьдесят ";
 else if ((enterNumber / 10) % 10 == 7) cout << "семьдесят ";
 else if ((enterNumber / 10) % 10 == 8) cout << "восемьдесят ";
 else if ((enterNumber / 10) % 10 == 9) cout << "девяносто ";
 
 if ((enterNumber / 10) % 10 != 1)
 {
 if (enterNumber % 10 == 0) cout << "рублей";
 else if (enterNumber % 10 == 1) cout << "один рубль";
 else if (enterNumber % 10 == 2) cout << "два рубля ";
 else if (enterNumber % 10 == 3) cout << "три рубля ";
 else if (enterNumber % 10 == 4) cout << "четыре рубля ";
 else if (enterNumber % 10 == 5) cout << "пять рублей ";
 else if (enterNumber % 10 == 6) cout << "шесть рублей ";
 else if (enterNumber % 10 == 7) cout << "семь рублей ";
 else if (enterNumber % 10 == 8) cout << "восемь рублей ";
 else cout << "девять рублей ";
 }
}
 
cout << endl << endl;
return 0;
}