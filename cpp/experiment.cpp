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

  string spritOfDol;
  cin >> spritOfDol;
  printf("%s", spritOfDol.c_str());
  cout << spritOfDol;
  cout << "Hello, World";
  return 0;
}