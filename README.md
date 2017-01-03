# Advent of Code - 2016

All implementations are written in C++, ~~strictly~~ _sort of_ adhering to C++14 guidelines.

## Prerequisites

* clang (>= 3.5)
* libc++ (>= 3.5)
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

Day | Part 1 | Part 2 | Points
:--:|-------:|-------:|-------:
02  | 31     | 90     | 81
09  | 233    | 66     | 35
10  | 50     | 44     | 108
11  | 112    | 84     | 17
12  | 31     | 19     | 152
13  | 125    | 79     | 22
14  | 145    | 79     | 22
19  | 214    | 41     | 60
20  | 131    | 40     | 61
21  | 89     | 23     | 90
22  | 60     | 61     | 81
23  | 193    | 88     | 13
24  | 25     | 21     | 156
25  | 24     | 18     | 160
--  |        |        | **1058**

## Detailed Information

 Day | Lines | Code | Bytes | Chars | Time (ms) | Source | Headers
:---:|:-----:|:----:|:-----:|:-----:| ---------:|:------:|:-------
01|24|14|615|471|`0.2747`|[Day01.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day01.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `cmath` `set` `utility`
02|41|24|1228|936|`0.1403`|[Day02.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day02.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `algorithm` `initializer_list` `type_traits` `utility`
03|25|14|555|431|`3.4179`|[Day03.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day03.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `algorithm` `iterator` `vector`
04|35|26|1107|819|`2.5569`|[Day04.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day04.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `algorithm` `vector`
05|35|25|1131|890|`1090.1800`|[Day05.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day05.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`md5.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/md5.hpp) [`util.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/util.hpp) `algorithm`
06|18|12|511|422|`0.1803`|[Day06.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day06.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `algorithm` `array`
07|36|25|908|705|`4.1477`|[Day07.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day07.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `set`
08|37|28|1567|1262|`0.2809`|[Day08.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day08.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `unordered_map` `valarray`
09|28|20|715|565|`0.2907`|[Day09.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day09.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp)
10|60|45|1698|1237|`0.6291`|[Day10.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day10.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `map` `vector`
11|98|69|3896|2981|`9.0399`|[Day11.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day11.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `array` `cstdlib` `cstring` `map` `regex` `string` `unordered_map` `utility`
12|9|4|227|200|`0.0750`|[Day12.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day12.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`assembunny.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/assembunny.hpp)
13|34|21|1125|905|`0.2065`|[Day13.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day13.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp) `array` `set`
14|79|52|1893|1441|`1228.0386`|[Day14.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day14.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`md5.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/md5.hpp) [`util.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/util.hpp) `algorithm` `array` `mutex` `set` `vector`
15|41|26|1110|869|`0.0410`|[Day15.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day15.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `numeric` `vector`
16|45|30|1247|1007|`0.0322`|[Day16.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day16.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `sstream`
17|47|27|1489|1212|`47.7301`|[Day17.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day17.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp) [`md5.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/md5.hpp) `array` `list`
18|20|13|615|508|`1.0952`|[Day18.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day18.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp)
19|11|6|409|346|`0.0689`|[Day19.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day19.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `cmath`
20|28|19|769|614|`1.5076`|[Day20.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day20.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `set` `utility` `vector`
21|40|31|1913|1557|`0.9817`|[Day21.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day21.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp) `algorithm`
22|30|22|1105|904|`18.9655`|[Day22.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day22.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) `array` `regex`
23|9|4|228|201|`0.4032`|[Day23.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day23.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`assembunny.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/assembunny.hpp)
24|70|51|2244|1642|`4.3134`|[Day24.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day24.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`io.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/io.hpp) `algorithm` `map` `numeric` `vector`
25|21|13|521|426|`52.0650`|[Day25.cpp](https://github.com/willkill07/adventofcode2016/blob/master/src/Day25.cpp)|[`Solution.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/Solution.hpp) [`assembunny.hpp`](https://github.com/willkill07/adventofcode2016/blob/master/include/assembunny.hpp)
**TOTAL**|**921**|**621**|**28826**|**22551**|**2466.66**| |`  Solution.hpp`&nbsp;<sup>**`25`**</sup> ` algorithm`&nbsp;<sup>**`8`**</sup> ` vector`&nbsp;<sup>**`7`**</sup> ` array`&nbsp;<sup>**`6`**</sup> ` set`&nbsp;<sup>**`5`**</sup> ` io.hpp`&nbsp;<sup>**`5`**</sup> ` utility`&nbsp;<sup>**`4`**</sup> ` map`&nbsp;<sup>**`3`**</sup> ` md5.hpp`&nbsp;<sup>**`3`**</sup> ` assembunny.hpp`&nbsp;<sup>**`3`**</sup> ` util.hpp`&nbsp;<sup>**`2`**</sup> ` numeric`&nbsp;<sup>**`2`**</sup> ` unordered_map`&nbsp;<sup>**`2`**</sup> ` regex`&nbsp;<sup>**`2`**</sup> ` cmath`&nbsp;<sup>**`2`**</sup> ` string`&nbsp;<sup>**`1`**</sup> ` type_traits`&nbsp;<sup>**`1`**</sup> ` mutex`&nbsp;<sup>**`1`**</sup> ` valarray`&nbsp;<sup>**`1`**</sup> ` iterator`&nbsp;<sup>**`1`**</sup> ` cstdlib`&nbsp;<sup>**`1`**</sup> ` cstring`&nbsp;<sup>**`1`**</sup> ` list`&nbsp;<sup>**`1`**</sup> ` sstream`&nbsp;<sup>**`1`**</sup> ` initializer_list`&nbsp;<sup>**`1`**</sup> ` `
