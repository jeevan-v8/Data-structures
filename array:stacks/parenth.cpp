#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<char> open;
    unordered_map<char, char> parens = {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };

    for (const auto &c : s) {
      if (parens.find(c) != parens.end()) {
        // if input starts with a closing bracket.
        if (open.empty()) {
          return false;
        }

        if (open.top() != parens[c]) {
          return false;
        }

        open.pop();
      } else {
        open.push(c);
      }
    }

    return open.empty();
  }
};

int main() {
    Solution solution;

    // Test cases
    std::string test1 = "{[()]}";  // Should return true (valid)
    std::string test2 = "{[(])}";  // Should return false (invalid)
    std::string test3 = "{{[[(())]]}}";  // Should return true (valid)
    std::string test4 = "{[}";  // Should return false (invalid)
    std::string test5 = "";  // Should return true (empty string is considered valid)

    // Checking each test case
    std::cout << "Test 1: " << solution.isValid(test1) << std::endl;
    std::cout << "Test 2: " << solution.isValid(test2) << std::endl;
    std::cout << "Test 3: " << solution.isValid(test3) << std::endl;
    std::cout << "Test 4: " << solution.isValid(test4) << std::endl;
    std::cout << "Test 5: " << solution.isValid(test5) << std::endl;

    return 0;
}
