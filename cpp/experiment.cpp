#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  // �ֻ��� 2�� ������ �� ���ϱ� �����Լ� �̿�
  // srand(time(NULL));
  // int dice1 = (rand() % 6) + 1;
  // int dice2 = (rand() % 6) + 1;

  // cout << dice1 + dice2 << endl;

  // �Է� ���� �� ���� ���� �߿��� �� ū ���� ã�� ���α׷� �ۼ�
  //

  // ���� �Է� �޾Ƽ� ���, û�ҳ�, ������ �����ϴ� ���α׷�

  // cout << "���̸� �Է��Ͻÿ�: ";
  // int age;
  // cin >> age;

  // if (age < 13 && age >= 0)
  // {
  //   cout << "��� �Դϴ�.";
  // }

  // else if (age >= 14 && age < 20)
  // {
  //   cout << "û�ҳ��Դϴ�.";
  // }
  // else if (age >= 20 && age <= 120)
  // {
  //   cout << "�����Դϴ�.";
  // }

  // else if (age > 120 && age < 10000)
  // {
  //   cout << "�ΰ��� �ƴ� �����Դϴ�.";
  // }

  // else if (age > 10000)
  // {
  //   cout << "�� �Դϴ�.";
  // }

  // else
  // {
  //   cout << "�߸��� ���� �Է��ϼ̽��ϴ�.";
  // }
  // char s[] = "������!";

  // string spritOfDol;
  // cin >> spritOfDol;
  // printf("%s", spritOfDol.c_str());
  // cout << spritOfDol;
  // cout << "Hello, World";

  // switch �� ����
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

  // �ݺ��� ����
  // int n = 10;
  // do
  // {
  //   cout << n << " ";
  //   n--;
  // } while (n > 0);
  // cout << "�߻�!\n";
  // int m;
  // for (m = 10; m > 0; m--)
  // {
  //   cout << m << " ";
  // }
  // cout << "�߻�!\n";

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
  // cout << "����ϰ� ���� ���� �Է��Ͻÿ� : ";
  // cin >> i;
  // while (n < 10)
  // {
  //   cout << i << " * " << n << " = " << (i * n) << endl;
  //   n++;
  // }

  // string s;
  // while (1)
  // {
  //   cout << "���ڿ��� �Է��Ͻÿ�: ";
  //   getline(cin, s);
  //   cout << "������� �Է�: ";
  //   cout << s << endl;

  //   if (s == "����")
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
  // cout << "1���� " << n << " ������ ������ �� = " << sum;

  // long fact = 1;
  // int n;
  // cout << "������ �Է��Ͻÿ�.: ";
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   fact *= i;
  // }
  // cout << fact;

  // char ch;
  // int vowel = 0;
  // int consonant = 0;

  // cout << "�����ڸ� �Է��ϰ� 0�� �Է��Ͻÿ�" << endl;

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
  //     if (ch == '0') // 0�� �ĵ� �������� ��޵Ǵ� �� ���� �ٷ� break������ Ż��
  //       break;
  //     consonant++;
  //     break;
  //   }
  //   if (ch == '0')
  //   {
  //     break;
  //   }
  // }

  // cout << "������ ����: " << vowel;
  // cout << "������ ����: " << consonant;

  const int STUDENT = 10;
  int scores[STUDENT];
  int n = 0;
  int sum = 0;
  for (int n; n < STUDENT; n++)
  {
    cout << "�л����� ������ �Է��Ͻÿ� ����� ���ϴ� ���α׷��� �迭�� �̿��Ͽ��� �ۼ��Ͽ� ����. " << endl;
    cin >> scores[n]; // ���� ������ ������ �ʿ� ���� �ٷ� �迭���ٰ� ���ڸ� ������� �� �ִ�.
    cout << scores[n];
  }
  cout << "���� ���: ";
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
  //   cout << "�ΰ�\n";
  // }
  return 0;
}