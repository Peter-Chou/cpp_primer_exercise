#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  int count = 0;
  cout << "Enter words (to stop, type the word done):\n";
  cin >> word;
  while (word != "done") {
    count++;
    cin >> word;
  }
  cout << "You entered a total of " << count << " words.\n";
  cin.get();
  return 0;
}