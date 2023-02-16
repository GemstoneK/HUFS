#include <iostream>
#include <cmath>
using namespace std;

// ���⸦ ����� ���� ����� ���� �־��� ��, û�� ��ݰ踦 ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main()
{
  // 7~8��, 12��~2�� 1000kWh �ʰ���, ��뷮 ��� 709.5 ����
  cout << "Please enter a month (1~12): ";
  int month;
  cin >> month;
  // 200kWh���� ���� �⺻��� 910, ó�� 200kWh���� ��뷮 ��� 93.3
  // 201~400kWh ���� �⺻��� 1600, ���� 200kWh���� ��뷮 ��� 187.9
  // 400kWh ���� �⺻��� 7300, 400kWh
  cout << "Please enter a kWh (integer): ";
  int kWh;
  cin >> kWh;

  int fee;
  if (kWh <= 200)
  {
    fee = 910 + (93.3 * kWh);
  }

  else if (kWh >= 201 && kWh <= 400)
  {
    fee = 1600 + (93.3 * 200) + (187.9 * (kWh - 200));
  }

  else if (kWh > 400)
  {
    fee = 7300 + (93.3 * 200) + (187.9 * 200) + (280.6 * (kWh - 400));
  }

  else if (kWh > 1000 && (month == 7 || month == 8 || month == 12 || month == 1 || month == 2))
  {
    fee = 7300 + (93.3 * 200) + (187.9 * 200) + (280.6 * 600) + (709.5 * (kWh - 1000));
  }

  else
  {
    printf("�� ���� �� �Է�");
  }

  // ���� = �ΰ���ġ��(�����ݰ��� 10%, ������ �̸� �ݿø�) + ��ݿ��(�����ݰ��� 3.7%, 10�� �̸� ����)
  int tax;
  tax = round(fee * 0.1) + (int(fee * 0.0037) * 10);
  /*cout << (floor(fee * 0.0037) * 10);
  cout << fee;*/
  int elecFee = fee + tax;
  elecFee = int(elecFee * 0.1) * 10;

  cout << "Electric charge is ";
  cout << elecFee;
}