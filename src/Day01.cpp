#include "Solution.hpp"
#include <cmath>
#include <set>
#include <utility>

template <>
void
solve<Day01>(bool part2, std::istream& is, std::ostream& os)
{
  std::set<std::pair<int, int>> visited;
  int  pos[2]{0, 0};
  char d;
  for (int index{1}, dist; is >> d >> dist; is.ignore(1, ',')) {
    index += ~d & 3;
    for (int i{0}; i < dist; ++i) {
      pos[index & 1] += 1 - (index & 2);
      if (part2 && !visited.emplace(pos[0], pos[1]).second) {
        os << (std::abs(pos[0]) + std::abs(pos[1])) << std::endl;
        return;
      }
    }
  }
  os << (std::abs(pos[0]) + std::abs(pos[1])) << std::endl;
}
