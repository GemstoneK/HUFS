#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  // int num;
  // int sum = 0;
  // cout << "Please input a number (n>0): ";
  // cin >> num;
  // int n = 1;
  // while (n <= num)
  // {
  //   sum += n;
  //   n++;
  // }
  // sum = 0;
  // n = 1;
  // do
  // {
  //   sum += n;
  //   n++;
  // } while (n <= num);

  // sum = 0;
  // for (int n = 1; n <= num; n++)
  // {
  //   sum += n;
  // }
  // cout << "Summation from" << 1 << " to " << num << " is " << sum << endl;

  // int n;
  // cout << "Please input a number : ";
  // cin >> n;
  // int multy = 0;

  // while (multy < 1000000)
  // {
  //   cout << multy << " ";
  //   multy += n;
  // }
  // cout << "are multyply of " << n;

  // int pib1 = 1;
  // int pib2 = 1;
  // int tmp;
  // int n;
  // cout << "n을 입력하시오 : ";
  // cin >> n;

  // int i = 0;
  // cout << pib1 << ", " << pib2 << ", ";
  // while (i < n - 2)
  // {
  //   tmp = pib2;
  //   pib2 = pib1 + pib2;
  //   pib1 = tmp;
  //   cout << pib2 << ", ";
  //   i++;
  // }

  // do
  // {
  //   tmp = pib2;
  //   pib2 = pib1 + pib2;
  //   pib1 = tmp;
  //   cout << pib2 << ", ";
  //   i++;
  // } while (i < n - 2);

  // for (i; i < n - 2; i++)
  // {
  //   tmp = pib2;
  //   pib2 = pib1 + pib2;
  //   pib1 = tmp;
  //   cout << pib2 << ", ";
  // }

  // int number;
  // cout << "Please input a number : ";
  // int n = 2;
  // cin >> number;
  // string s;
  // while (n < number)
  // {
  //   if (number % n == 0)
  //   {
  //     s = " is not prime number.";
  //     break; // if에서 바로 while문 빠져나와야 한다.
  //   }

  //   else
  //   {
  //     s = " is prime number.";
  //   }

  //   n++;
  // }

  // cout << number << s;

  // 달력 만들기
  //  입력문
  // cout << "Please input start day number : ";
  // int number;
  // cin >> number;
  // cout << "Please input end date : ";
  // int endDate;
  // cin >> endDate;

  // // 요일
  // char day[7] = {'M', 'T', 'W', 'T', 'F', 'S', 'S'};
  // for (int i = 0; i < 7; i++)
  // {
  //   cout << setw(3) << day[i];
  // }
  // cout << "\n";

  // for (int date = 1 - number, newLine = 0; date <= 31; date++, newLine++) // 초기화를 두개 시킬 수 있다.
  // {
  //   if (date < 1)
  //   {
  //     cout << setw(3) << " "; // 음수일 경우 공백 출력
  //   }
  //   else // 양수일 경우 1~31까지 출력
  //   {
  //     cout << setw(3) << date;
  //     if (newLine % 7 == 6) // 6번째에서 개행시킨다.
  //     {
  //       cout << endl;
  //     }
  //   }
  // }
  // int month;
  // cout << "월을 입력하시오. : ";
  // cin >> month;
  // int days[12]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // cout << month << "월은 " << days[month - 1] << "일까지 있습니다." << endl;

  // 범위 함수를 이용한 아스키코드 대문자 변환
  // cout << "Please input a string :";
  // string str;
  // getline(cin, str);
  // for (int i : str)
  // {
  //   if (i >= 97 && i <= 122)
  //   {
  //     i -= 32;
  //   }
  //   cout << char(i);
  // }

  // 인간승리다 ㄹㅇ
  // string str;
  // cout << "문자열을 입력하시오 : ";
  // getline(cin, str);
  // int alpha[26] = {};
  // for (char ch : str)
  // {
  //   if (ch >= 'A' && ch <= 'z')
  //   {
  //     int n = ch - 'a';
  //     if (n >= 0)
  //       alpha[n]++;
  //     else
  //       alpha[n + 'a' - 'A']++;
  //   }
  // }
  // int n = 0;
  // while (n < 26)
  // {
  //   cout << char('a' + n) << " : " << alpha[n] << endl;
  //   n++;
  // }
}
