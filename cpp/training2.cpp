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
  // cout << "n�� �Է��Ͻÿ� : ";
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
  //     break; // if���� �ٷ� while�� �������;� �Ѵ�.
  //   }

  //   else
  //   {
  //     s = " is prime number.";
  //   }

  //   n++;
  // }

  // cout << number << s;

  // �Է¹�
  cout << "Please input start day number : ";
  int number;
  cin >> number;
  cout << "Please input end date : ";
  int endDate;
  cin >> endDate;

  // ����
  char day[7] = {'M', 'T', 'W', 'T', 'F', 'S', 'S'};
  for (int i = 0; i < 7; i++)
  {
    cout << setw(3) << day[i];
  }
  cout << "\n";

  // ���� �Է�, �ʹ� 5��
  int i = 0;
  while (i < number)
  {
    cout << setw(3) << " ";
    i++;
  }

  // �Ĺ� 2��
  int newLine = 0;
  for (int date = 1, newLine = number; date <= 31; date++, newLine++)
  {
    cout << setw(3) << date;
    if (newLine % 7 == 6)
    {
      cout << endl;
    }
  }
}
