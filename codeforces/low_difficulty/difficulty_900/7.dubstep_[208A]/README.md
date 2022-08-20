# Dubstep
**Problem code**: 208A  
**Tags**: strings  
**Time limit per test**: 2 seconds  
**Memory limit per test**: 256 megabytes  
**Input**: standard input  
**Output**: standard output  

Vasya works as a DJ in the best Berland nightclub, and he often uses dubstep music in his performance. Recently, he has decided to take a couple of old songs and make dubstep remixes from them.

Let's assume that a song consists of some number of words. To make the dubstep remix of this song, Vasya inserts a certain number of words "`WUB`" before the first word of the song (the number may be zero), after the last word (the number may be zero), and between words (at least one between any pair of neighbouring words), and then the boy glues together all the words, including "`WUB`", in one string and plays the song at the club.

For example, a song with words "`I AM X`" can transform into a dubstep remix as "`WUBWUBIWUBAMWUBWUBX`" and cannot transform into "`WUBWUBIAMWUBX`".

Recently, Petya has heard Vasya's new dubstep track, but since he isn't into modern music, he decided to find out what was the initial song that Vasya remixed. Help Petya restore the original song.

## Input
The input consists of a single non-empty string, consisting only of uppercase English letters, the string's length doesn't exceed `200` characters. It is guaranteed that before Vasya remixed the song, no word contained substring "`WUB`" in it; Vasya didn't change the word order. It is also guaranteed that initially the song had at least one word.

## Output
Print the words of the initial song that Vasya used to make a dubsteb remix. Separate the words with a space.

## Examples
| input |
| :--- |
| WUBWUBABCWUB |

| output |
| :--- |
| ABC |

| input |
| :--- |
| WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB |

| output |
| :--- |
| WE ARE THE CHAMPIONS MY FRIEND |

## Note
In the first sample: `"WUBWUBABCWUB" = "WUB" + "WUB" + "ABC" + "WUB"`. That means that the song originally consisted of a single word "`ABC`", and all words "WUB" were added by Vasya.

In the second sample Vasya added a single word "`WUB`" between all neighbouring words, in the beginning and in the end, except for words "`ARE`" and "`THE`" — between them Vasya added two "`WUB`".

## Solution
The solution in **C++**:
```cpp
#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string s, si;
  unsigned short int i;
  bool ss;
  cin >> s;
  i = 0;
  if (s.size() >= 3) {
    si = "";
    ss = true;
    while (i < s.size()) {
      if (i <= (s.size() - 3) && s.substr(i, 3) == "WUB") {
        i += 3;
        if (ss) {
          si = si + ' ';
        }
        ss = false;
        continue;
      }
      else {
        si = si + s.at(i);
        ss = true;
        i++;
      }
    }
    if (si.at(0) == ' ') {
      si.replace(0, 1, "");
    }
    if (si.at(si.size() - 1) == ' ') {
      si.replace((si.size() - 1), 1, "");
    }
  }
  else {
    si = s;
  }
  cout << si << endl;
  return 0;
}
```