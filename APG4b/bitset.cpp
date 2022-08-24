#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
using vi = vector<int>;
using vc = vector<char>;

int main() {
  bitset<8> b("01100111");

  b.set() // make all 1
  b.flip()
  b.reset() // make all 0
  b.test() //if specific bit is 1
  b.all() // if all bits are 1
  b.any() // if any bit is 1
  b.count() // count of 1 bits
  b.to_string()

  // 2進数 0b
  // 10進数 0d
  // 16進数 0x
  // 1<<3 = 2^3 = 8 = 0b1000
  for(int i=0; i<(1<<3); i++){
    ...
  }
}