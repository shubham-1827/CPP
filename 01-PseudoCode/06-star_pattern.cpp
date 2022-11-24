input:
N=3
Output:
*
**
***

observations:
1. no. of rows = N.
2. every ith row has i stars.

pseudocode:

Read N 

i=1 

while(i<=N) {
    stars=1
    while(stars<=i) {
        print *
        stars=stars+1
    }
    print \n 
    i=i+1
}
exit