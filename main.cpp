#include <iostream>
#include <stack>
using namespace std;

int main() {
  const int n = 100;
  char array[n];
  cin >> array;
  stack<char> S;
  int i = 0;
  while (array[i]) {
    switch (array[i]) {
    case '{':
    case '(':
    case '[':
      S.push(array[i]);
      break;

    case '}':
      if (S.empty()) {
        cout << "not balanced";
        return 0;
      } else if (S.top() != '{') {
        cout << "not balanced";
        return 0;
      } else
        S.pop();
      break;

    case ']':
      if (S.empty()) {
        cout << "not balanced";
        return 0;

      } else if (S.top() != '[') {
        cout << "not balanced";
        return 0;
      } else
        S.pop();
      break;
    case ')':
      if (S.empty()) {
        cout << "not balanced";
        return 0;
      } else if (S.top() != '(') {
        cout << "not balanced";
        return 0;
      } else
        S.pop();
      break;
    }
    i++;
  }
  if (!S.empty())
    cout << "not balanced";
  else
    cout << "is balanced";
  return 0;
}