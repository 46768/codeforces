/*
There are n coins on the table forming a circle, and each coin is either facing up or facing down.
	- circle -> circular array

Alice and Bob take turns to play the following game, and Alice goes first.

In each operation, the player chooses a facing-up coin, removes the coin, and flips the two coins that are adjacent to it.
	* If (before the operation) there are only two coins left, then one will be removed and the other won't be flipped
	* If (before the operation) there is only one coin left, no coins will be flipped
	* If (before the operation) there are no facing-up coins, the player loses.
		- Base case: no facing up coins -> all downs or no coins

Decide who will win the game if they both play optimally.
	* one of them will win.
	* For each test case, print "YES" if Alice will win the game, and "NO" otherwise.

The first line of each test case contains only one positive integer n (1<=n<=100), representing the number of the coins.

A string s of length n follows on the second line of each test case, containing only "U" and "D", representing coin face.

Example

s

Alice chooses the coin that is adjacent to both U and D, fall back to first up coin.
Bob chooses the coin that is adjacent to both U and D, fall back to first up coin.
repeat until one lose
*/

#include <stdio.h>

int main() {
	int t;
}
