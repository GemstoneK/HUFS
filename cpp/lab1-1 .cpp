#include <iostream>
using namespace std;

int main()
{
  printf("현재 가지고 있는 돈: ");
  int num;
  scanf("%d", &num);

  printf("캔디의 가격: ");
  int price;
  scanf("%d", &price);

  printf("최대로 살 수 있는 캔디의 개수=");
  int max = num / price; // 소수 점 아래 절사 됨.
  printf("%d\n", max);

  printf("캔디 구입 후 남는 돈 = ");
  int change = num % price;
  printf("%d", change);
}