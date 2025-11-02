# I Wanna Be the Guy (Codeforces 469A)

Problem link: https://codeforces.com/problemset/problem/469/A

## Overview

You are given the total number of levels `n` in a game (levels are numbered `1..n`).
Two players, Little X and Little Y, each have a set of levels they can clear on their own. If they cooperate and share progress, determine whether together they can clear every level from `1` to `n`.

-    Print `I become the guy.` if the union of their levels covers all levels `1..n`.
-    Otherwise print `Oh, my keyboard!`.

## Input

-    Line 1: integer `n` (`1 ≤ n ≤ 100`).
-    Line 2: integer `p` followed by `p` distinct integers `a1 ... ap` (each in `1..n`): levels Little X can pass.
-    Line 3: integer `q` followed by `q` distinct integers `b1 ... bq` (each in `1..n`): levels Little Y can pass.

Notes:

-    `p` or `q` may be `0`.
-    Level indices are 1-based.

## Output

-    Print `I become the guy.` if all levels `1..n` are covered by either X or Y (or both).
-    Otherwise print `Oh, my keyboard!`.

## Examples

Example 1

```
Input
4
3 1 2 3
2 2 4

Output
I become the guy.
```

Example 2

```
Input
4
3 1 2 3
2 2 3

Output
Oh, my keyboard!
```
