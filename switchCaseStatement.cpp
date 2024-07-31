#include <iostream>
using namespace std;


int main () {

int dayOfWeek = 3;

switch (dayOfWeek) {
      case 1: cout << "Sunday"; //only prints if dayOfWeek == 1
          break;
  case 2: cout << "Monday"; //only prints if dayOfWeek == 2
          break;
  case 3: cout << "Tuesday"; //only prints if dayOfWeek == 3
          break;
  case 4: cout << "Wednesday"; //only prints if dayOfWeek == 4
          break;
  case 5: cout << "Thursday"; //only prints if dayOfWeek == 5
          break;
  case 6: cout << "Friday"; //only prints if dayOfWeek == 6
          break;
  case 7: cout << "Saturday"; //only prints if dayOfWeek == 7
          break;
  default: cout << "Invalid"; //only prints if none of the above are true
}

return 0;

}
