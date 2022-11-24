input:
N=3

output:
  *
 ***
*****

observations:
1. no. of rows = N.
2. every ith row has (N-i) spaces.
3. every ith row has (2i-1) stars.

note:
the stars are creating an AP with cd of 2,
1, 3, 5, .....

pseudocode:

Read N 

i=1

while(i<=N) {
    spaces=1
    while(spaces<=(N-i)) {
		print " "
        spaces=spaces+1
    }

    stars=1
    while(stars<=(2i-1)) {
		print "*"
        stars=stars+1
    }
    print "\n"
    i = i+1
}
exit
