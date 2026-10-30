#include <bits/stdc++.h>
using i128t = __int128_t;
using u128t = __uint128_t;
using namespace std;

std::ostream &operator<<(std::ostream &dest, i128t value) {
  if (value == 0) {
    return dest << 0;
  }
  u128t uvalue;
  if (value < 0) {
    dest << '-';
    uvalue = -static_cast<u128t>(value);
  } else {
    uvalue = value;
  }
  char buffer[128];
  char *pos = buffer + sizeof(buffer);
  *--pos = '\0';
  while (uvalue > 0) {
    *--pos = '0' + (uvalue % 10);
    uvalue /= 10;
  }

  return dest << pos;
}

std::ostream &operator<<(std::ostream &dest, u128t value) {
  return dest << static_cast<i128t>(value);
}

void fastIO() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

int main() {
  fastIO();
  i128t ans = 0;
  for (i128t i = 1; i < 1000; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      ans += i;
    }
  }
  cout << ans << "\n";
  return 0;
}
