# Chat Online (Codeforces 489B)

Problem link: https://codeforces.com/problemset/problem/489/B

## Overview

Little X and Little Z are good friends who chat online. However, their schedules determine when they can chat:

-    Little Z has a fixed schedule, being online during specific time intervals.
-    Little X's schedule depends on when he wakes up. If he wakes up at time `t`, his online intervals shift by `t`.

Given the schedules of both friends and the range of possible wake-up times for Little X, determine how many wake-up times allow them to chat (i.e., have overlapping online intervals).

## Input

-    The first line contains four integers `p`, `q`, `l`, `r`:
     -    `p` — number of intervals for Little Z.
     -    `q` — number of intervals for Little X.
     -    `l`, `r` — range of possible wake-up times for Little X.
-    The next `p` lines contain two integers `ai`, `bi` — the start and end of Little Z's online intervals.
-    The next `q` lines contain two integers `cj`, `dj` — the start and end of Little X's online intervals.

### Constraints

-    $1 \leq p, q \leq 50$
-    $0 \leq l \leq r \leq 1000$
-    $0 \leq ai < bi \leq 1000$
-    $0 \leq cj < dj \leq 1000$
-    $bi < ai + 1$ and $dj < cj + 1$ (intervals are non-overlapping).

## Output

-    A single integer — the number of wake-up times in `[l, r]` that allow Little X and Little Z to chat.

## Examples

### Example 1

#### Input

```
1 1 0 4
2 3
0 1
```

#### Output

```
3
```

### Example 2

#### Input

```
2 3 0 20
15 17
23 26
1 4
7 11
15 17
```

#### Output

```
20
```
