
# Machine Problem 1
The pirate crew has discovered an incredibly useful map that gives both the distance and the expected gold that the island offers. However, 
they only have enough resources to make one trip (assume it is unlimited, but only enough to go to one island). In order to identify the 'best' island to visit, 
the pirates developed a formula, where the value of the island is dictated by the gold on the island divided by the distance to the island. 
Help the crew determine which island to go to.

### Input:

Line 1: N, number of islands

Line 2 N+1: vi and di, value of gold on each island and disntace to island

### Output:

The best island's number

### Sample Input 1:

3 

120 4

158 5

180 2

### Sample Output 1:

3


# Machine Problem 4

After the first day at sea, several groups of pirates have to decide their sleeping arrangement, they all share one large rectangular room with N rows and M columns of beds. The first group of pirates splits the room into parts, making one cut across the room at a time, either vertical or horizontal, by putting up a straight curtain between the beds across the room, and the first group picks one of the two parts and claims all of the beds in that part. The next group of pirates splits the remaining unclaimed beds in the same way, by putting straight curtain up across the unclaimed beds. Each pirate band demands a certain number of beds. Help the pirates determine whether their demands are possible to meet.

Notes 0x8s 15, number of pirate bands. Once a curtain is put up, another curtain cannot

pass through it. All of the beds must be taken.

### Input:

Line 1: integer 8, the number of pirate bands Line 2: integers N, and M, and the number of rows N, and the number of columns M

Line 3: B Integers b i, each describe the number of beds required by each pirate band

### Output:

Yes, if the arrangement is possible No, if the arrangement is impossible

Sample Input 1:

4 34

6321

Sample Output 1:

Yes
