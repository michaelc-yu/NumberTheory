#include <iostream>
#include <algorithm>
using namespace std;


int GCD(int a, int b) {
  int smaller = std::min(a, b);
  int bigger = std::max(a, b);
  if (smaller == bigger) {
    return smaller;
  }
  int small = smaller;
    
  while (bigger % smaller != 0 || small % smaller != 0) {
    smaller -= 1;
  }
  return smaller;
}

int GCD_euclid(int a, int b) {
  int remainder = 1;
  int divisor, dividend;
  divisor = std::min(a, b);
  dividend = std::max(a, b);
  while (remainder != 0) {
    remainder = dividend % divisor;
    if (remainder == 0) {
      return divisor;
    }
    dividend = divisor;
    divisor = remainder;
  }
  return divisor;
}

int GCD_recursive(int a, int b) {
  int divisor = std::min(a, b);
  int dividend = std::max(a, b);
  if (dividend % divisor == 0) {
    return divisor;
  }
  return GCD_recursive(divisor, dividend % divisor);
}

int exp_fast(int base, int exponent) {
  if (exponent == 0) {
    return 1;
  }
  if (exponent % 2 == 0) { // if even exponent
    int result = exp_fast(base, exponent/2);
    return result * result;
  }
  else { // odd exponent
    int result = exp_fast(base, exponent/2);
    return (result * result * base);
  }
}
  
int exp(int a, int n) {
  int result = a;
  if (n == 0) {
    return 1;
  }
  while (n > 1) {
    result = result * a;
    n-=1;
  }
  return result;
}

bool isPrime(int a) {
  for (int i = 2; i < a-1; ++i) {
    if (a % i == 0) {
      cout << a << " is not prime" << endl;
      return false;
    }
  }
  cout << a << " is prime" << endl;
  return true;
}



int main() {
  int a, b, c, n, z;
  cout << "enter two numbers: " << endl;
  cin >> a >> b;
  cout << "the GCD of "<< a << " and " << b << " is: " << GCD(a, b) << endl;
  cout << "enter two numbers for euclidean gcd: " << endl;
  cin >> a >> b;
  cout << "the GCD of "<< a << " and " << b << " is: " << GCD_euclid(a, b) << endl;
  cout << "enter two numbers for euclidean gcd using recursion: " << endl;
  cin >> a >> b;
  cout << "the GCD of "<< a << " and " << b << " using recursion is: " << GCD_recursive(a, b) << endl;
  cout << "enter base: " << endl;
  cin >> c;
  cout << "enter exponent: " << endl;
  cin >> n;
  cout << c << " to the power of " << n << " is: " << exp(c, n) << endl;
  cout << "enter base for log(n) exponent calculation: " << endl;
  cin >> c;
  cout << "enter exponent: " <<endl;
  cin >> n;
  cout << c << " to the power of " << n << " with log(n) running time is: " << exp_fast(c, n) << endl;
  cout << "enter number to see if prime" << endl;
  cin >> z;
  isPrime(z);
}
