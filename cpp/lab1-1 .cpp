#include <iostream>
using namespace std;

int main()
{
  printf("���� ������ �ִ� ��: ");
  int num;
  scanf("%d", &num);

  printf("ĵ���� ����: ");
  int price;
  scanf("%d", &price);

  printf("�ִ�� �� �� �ִ� ĵ���� ����=");
  int max = num / price; // �Ҽ� �� �Ʒ� ���� ��.
  printf("%d\n", max);

  printf("ĵ�� ���� �� ���� �� = ");
  int change = num % price;
  printf("%d", change);
}