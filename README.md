# Advent of Code - 2016

All implementations are written in C++, strictly adhering to C++14 guidelines.

## Prerequisites

* clang (>= 3.6)
* libc++ (>= 3.6)
* CMake (>= 3.1)
* macOS or Linux (only two systems I've tested on)

## Compiling

* A `compile.sh` script is provided
* Just run it and it should be good to go!

## Running

* Invoke `./Advent` to execute all the days
* To run a specific day, invoke `./Advent -f <dayXX>`
* To run a specific part, invoke `./Advent -p <1,2>`
* To see more detailed help, consult `./Advent --help`

## Metrics

* Lines: Number of lines given by `wc`
* Code: `Lines` - `(# preprocessor lines)` - `(lines with no alphanumeric chars)`
* Bytes: Number of total characters
* Chars: Number of non-whitespace characters
* Time: Time in milliseconds to execute each part independently (separate runs)
* Source: link to implementation
* Headers: C++ includes used for solution

## Leaderboard Highlights:

* Day02 -- Part 1: #31  Part 2: #90 (81 pts)

## Detailed Information

 Day | Lines | Code | Bytes | Chars | Time (ms) | Source | Headers
:---:|:-----:|:----:|:-----:|:-----:| ---------:|:------:|:-------
01|23|14|594|452|`0.5436`|[Day01.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day01.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `cmath` `set`
02|41|24|1228|936|`0.4122`|[Day02.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day02.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `algorithm` `initializer_list` `type_traits` `utility`
03|26|15|581|452|`4.3609`|[Day03.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day03.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `algorithm` `iterator` `vector`
04|36|26|1059|785|`30.6189`|[Day04.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day04.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp) `algorithm` `vector`
05|37|27|1424|1020|`1642.7085`|[Day05.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day05.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp) [`md5.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/md5.hpp) `thread`
06|18|12|511|422|`1.0320`|[Day06.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day06.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `algorithm` `array`
07|39|24|943|728|`4.0582`|[Day07.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day07.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp) `numeric` `set`
08|11|5|173|143|`0.0003`|[Day08.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day08.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
09|11|5|173|143|`0.0003`|[Day09.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day09.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
10|11|5|173|143|`0.0002`|[Day10.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day10.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
11|11|5|173|143|`0.0002`|[Day11.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day11.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
12|11|5|173|143|`0.0002`|[Day12.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day12.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
13|11|5|173|143|`0.0002`|[Day13.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day13.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
14|11|5|173|143|`0.0002`|[Day14.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day14.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
15|11|5|173|143|`0.0002`|[Day15.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day15.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
16|11|5|173|143|`0.0002`|[Day16.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day16.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
17|11|5|173|143|`0.0002`|[Day17.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day17.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
18|11|5|173|143|`0.0002`|[Day18.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day18.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
19|11|5|173|143|`0.0002`|[Day19.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day19.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
20|11|5|173|143|`0.0002`|[Day20.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day20.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
21|11|5|173|143|`0.0002`|[Day21.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day21.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
22|11|5|173|143|`0.0002`|[Day22.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day22.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
23|11|5|173|143|`0.0002`|[Day23.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day23.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
24|11|5|173|143|`0.0002`|[Day24.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day24.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
25|11|5|173|143|`0.0002`|[Day25.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day25.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
**TOTAL**|**418**|**232**|**9454**|**7369**|**1683.74**| |`  Solution.hpp`&nbsp;<sup>**`25`**</sup> ` io.hpp`&nbsp;<sup>**`21`**</sup> ` algorithm`&nbsp;<sup>**`4`**</sup> ` set`&nbsp;<sup>**`2`**</sup> ` vector`&nbsp;<sup>**`2`**</sup> ` numeric`&nbsp;<sup>**`1`**</sup> ` thread`&nbsp;<sup>**`1`**</sup> ` array`&nbsp;<sup>**`1`**</sup> ` utility`&nbsp;<sup>**`1`**</sup> ` type_traits`&nbsp;<sup>**`1`**</sup> ` md5.hpp`&nbsp;<sup>**`1`**</sup> ` initializer_list`&nbsp;<sup>**`1`**</sup> ` cmath`&nbsp;<sup>**`1`**</sup> ` iterator`&nbsp;<sup>**`1`**</sup> ` `
