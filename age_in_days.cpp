#include <iostream>
using namespace std;

int main() {
  int byear , pyear , age , days;

  cout << "Enter the present year" << endl;
  cin >> pyear;

  //valid or invalid year
  if(pyear < 1000) {
    cout << "Invalid year" << endl;
  }
  //end

  cout << "Enter your Birth Year" << endl;
  cin >> byear;

  //valid or invalid year
  if(byear < 1000) {
    cout << "Invalid year" << endl;
  }
  //end


  age = pyear - byear;
  cout << "Your age is " << age << endl << endl;

   //child or adult
  if(19 > age) {
    cout << "You are only a child yet" << endl << endl;
  }
  else if(age >= 100) {
    cout << "You are dead. I think you are a ghost" << endl << endl;
  }
  else{
    cout << "You are an adult now" << endl << endl;
  }
    // age is over


  days = age * 365;
  cout << "Your age in days is " << days;
}
