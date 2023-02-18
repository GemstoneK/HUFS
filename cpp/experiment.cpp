#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  // 주사위 2개 굴려서 합 구하기 랜덤함수 이용
  // srand(time(NULL));
  // int dice1 = (rand() % 6) + 1;
  // int dice2 = (rand() % 6) + 1;

  // cout << dice1 + dice2 << endl;

  // 입력 받은 두 개의 정수 중에서 더 큰 수를 찾는 프로그램 작성
  //

  // 나이 입력 받아서 어린이, 청소년, 성인을 구분하는 프로그램

  // cout << "나이를 입력하시오: ";
  // int age;
  // cin >> age;

  // if (age < 13 && age >= 0)
  // {
  //   cout << "어린이 입니다.";
  // }

  // else if (age >= 14 && age < 20)
  // {
  //   cout << "청소년입니다.";
  // }
  // else if (age >= 20 && age <= 120)
  // {
  //   cout << "성인입니다.";
  // }

  // else if (age > 120 && age < 10000)
  // {
  //   cout << "인간이 아닌 생물입니다.";
  // }

  // else if (age > 10000)
  // {
  //   cout << "신 입니다.";
  // }

  // else
  // {
  //   cout << "잘못된 값을 입력하셨습니다.";
  // }
  // char s[] = "끄어어엄!";

  // string spritOfDol;
  // cin >> spritOfDol;
  // printf("%s", spritOfDol.c_str());
  // cout << spritOfDol;
  // cout << "Hello, World";

  // switch 문 연습
  // int number = 0;
  // cin >> number;
  // switch (number)
  // {
  // case 0:
  //   cout << "zero\n";
  // case 1:
  //   cout << "one\n";
  // case 2:
  //   cout << "two\n";
  // default:
  //   cout << "many\n";
  // }

  // 반복문 연습
  // int n = 10;
  // do
  // {
  //   cout << n << " ";
  //   n--;
  // } while (n > 0);
  // cout << "발사!\n";
  // int m;
  // for (m = 10; m > 0; m--)
  // {
  //   cout << m << " ";
  // }
  // cout << "발사!\n";

  // int number;
  // do
  // {
  //   cin >> number;
  //   switch (number)
  //   {
  //   case 0:
  //     cout << "zero\n";
  //     break;
  //   case 1:
  //     cout << "one\n";
  //     break;
  //   case 2:
  //     cout << "two\n";
  //     break;
  //   default:
  //     cout << "many\n";
  //   }
  //   if (number == 5)
  //   {
  //     break;
  //   }
  // } while (true);
  // int n = 1;
  // int i;
  // cout << "출력하고 싶은 단을 입력하시오 : ";
  // cin >> i;
  // while (n < 10)
  // {
  //   cout << i << " * " << n << " = " << (i * n) << endl;
  //   n++;
  // }

  // string s;
  // while (1)
  // {
  //   cout << "문자열을 입력하시오: ";
  //   getline(cin, s);
  //   cout << "사용자의 입력: ";
  //   cout << s << endl;

  //   if (s == "종료")
  //   {
  //     break;
  //   }
  // }

  // int sum = 0;
  // const int n = 11;
  // for (int i = -100; i < 2; i++)
  // {
  //   sum += i;
  // }
  // cout << "1부터 " << n << " 까지의 정수의 합 = " << sum;

  // long fact = 1;
  // int n;
  // cout << "정수를 입력하시오.: ";
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   fact *= i;
  // }
  // cout << fact;

  // char ch;
  // int vowel = 0;
  // int consonant = 0;

  // cout << "영문자를 입력하고 0을 입력하시오" << endl;

  // while (cin >> ch)
  // {
  //   switch (ch)
  //   {
  //   case 'a':
  //   case 'e':
  //   case 'i':
  //   case 'o':
  //   case 'u':
  //     vowel++;
  //     break;

  //   default:
  //     if (ch == '0') // 0을 쳐도 자음으로 취급되는 것 방지 바로 break문으로 탈출
  //       break;
  //     consonant++;
  //     break;
  //   }
  //   if (ch == '0')
  //   {
  //     break;
  //   }
  // }

  // cout << "모음의 개수: " << vowel;
  // cout << "자음의 개수: " << consonant;

  const int STUDENT = 10;
  int scores[STUDENT];
  int n = 0;
  int sum = 0;
  for (int n; n < STUDENT; n++)
  {
    cout << "학생들의 성적을 입력하시오 평균을 구하는 프로그램을 배열을 이용하여서 작성하여 보자. " << endl;
    cin >> scores[n]; // 굳이 변수를 선언할 필요 없이 바로 배열에다가 숫자를 집어넣을 수 있다.
    cout << scores[n];
  }
  cout << "성적 평균: ";
  int average;
  for (int i : scores)
  {
    sum += i;
  }
  average = sum / STUDENT;
  cout << average;

  // int n = 0;
  // for (int n; n < STUDENT; n++)
  // {
  //   cin >> n;
  //   cout << "인간\n";
  // }
  return 0;
}