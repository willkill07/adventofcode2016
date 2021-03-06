#include "Solution.hpp"
#include <algorithm>
#include <iterator>
#include <vector>

bool
isTri(int a, int b, int c)
{
  return (a + b + c) > 2 * std::max(a, std::max(b, c));
}

template <>
void
solve<Day03>(bool part2, std::istream& is, std::ostream& os)
{
  int num{1 + 2 * part2}, sum{0};
  std::vector<int> tri(3 * num);
  for (std::istream_iterator<int> itr{is}, end{}; itr != end;) {
    for (int& t : tri)
      t = *itr++;
    for (int n{0}; n < num; ++n)
      sum += isTri(tri[n], tri[n + num], tri[n + 2 * num]);
  }
  os << sum << std::endl;
}
