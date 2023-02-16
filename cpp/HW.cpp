#include <iostream>
#include <cmath>
using namespace std;

//전기를 사용한 월과 사용한 양이 주어질 때, 청구 요금계를 구하는 프로그램을 작성하시오.
int main(){
  //7~8월, 12월~2월 1000kWh 초과시, 사용량 요금 709.5 적용 
  cout << "Please enter a month (1~12): ";
  int month;
  cin >> month;
  // 200kWh이하 사용시 기본요금 910, 처음 200kWh까지 사용량 요금 93.3
  //201~400kWh 사용시 기본요금 1600, 다음 200kWh까지 사용량 요금 187.9
  //400kWh 사용시 기본요금 7300, 400kWh
  cout << "Please enter a kWh (integer): ";
  int kWh;
  cin >> kWh;

  int fee;
  if (kWh <= 200){
    fee = 910 + (93.3 * kWh);
  }

  else if (kWh >= 201 && kWh <= 400){
    fee = 1600 + (93.3 * 200) + (187.9 * (kWh-200));
  }

  else if (kWh > 400){
    fee = 7300 + (93.3 * 200) + (187.9 * 200) + (280.6 * (kWh - 400));
  }

  else if (kWh > 1000 && (month == 7 || month == 8 || month == 12 || month == 1 ||month == 2)){
    fee = 7300 + (93.3 * 200) + (187.9 * 200) + (280.6 * 600) + (709.5 * (kWh - 1000));
  }

  else{
    printf("잘 못된 값 입력");
  }
  
  //세금 = 부가가치세(전기요금계의 10%, 원단위 미만 반올림) + 기반요금(전기요금계의 3.7%, 10원 미만 절사)
  int tax;
  tax = round(fee * 0.1) + (int(fee * 0.0037) * 10);
  /*cout << (floor(fee * 0.0037) * 10);
  cout << fee;*/
  int elecFee = fee + tax;
  elecFee = int(elecFee * 0.1) * 10;





  cout << "Electric charge is ";
  cout << elecFee;
}