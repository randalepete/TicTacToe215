#include "main.h"

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mult(int a, int b) {
  int res = 0;
  if (a == 2) {
    res = b << 1;
  } else if (b == 2) {
    res = a << 1;
  } else {
    res = a * b;
  }
  return res;
}

int main(int argc, char **argv) {
  if (argc != 5) {
    std::cout << "Invalid Args Specified!" << std::endl;
    return 1;
  }
  char op = *(argv[1]);
  int a = atoi(argv[2]);
  int b = atoi(argv[3]);
  int c = atoi(argv[4]);
  int test = 0;
  std::cout << "Computing: " << a << op << b << "=" << c;
  // Test cases
  if (op == '+') {
    assert(add(a,b) == c);
  }
  else if (op == '-') {
    assert(sub(a,b) == c);
  }
  else if (op == '*') {
    assert(mult(a,b) == c);
  }
  else {
    std::cout << " -> STATUS: INVALID OP" << std::endl;
    return 1;
  }
  std::cout << " -> STATUS: PASSED" << std::endl;
}
