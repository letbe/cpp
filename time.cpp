#include <iostream>
#include <ctime>
#include <chrono>
#include <string>
using namespace std;
using namespace std::chrono;
int main(){
  while(true) {
    system_clock::time_point tp = system_clock::now();
    time_t tt = system_clock::to_time_t(tp);
    string str = ctime(&tt);
    str.pop_back();
    cout << str;
    for (int i(0);i <= 25;++i)
	cout << "\b";
  }
}
