#include "Solution.hpp"
#include "io.hpp"

template <>
void
solve<Day20>(bool part2, std::istream& is, std::ostream& os)
{
  if (part2) {
    os << io::as_string(is);
  }
}
