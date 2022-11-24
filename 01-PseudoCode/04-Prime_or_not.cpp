//write pseudocode to check if number is prime or not.

Read N 

i=2

while (i<=(N-1)) {
	if (N%i==0) {
        print N " is not prime."
        exit //this will exit the loop.
    }
    i=i+1
}

print N " is prime."
exit

==========
sample input:
N=7

sample output:
7 is prime.