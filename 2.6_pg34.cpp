#include<iostream>
using namespace std;

class temp {
  private:
  // int F = 100;
  public:
  void FtoC() {
    int F;
    cin >> F;
    cout << (F - 32)/1.8 << endl;
  }
};
int main() {
  temp t1;
  t1.FtoC();
  return 0;
}
