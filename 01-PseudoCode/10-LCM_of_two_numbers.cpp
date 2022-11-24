LCM(lowest common multiple):
remember:
	LCM € [max(A,B), product(A,B)]
like:
	LCM of 2 and 6 = 6 

pseudocode:

Read A,B 

i=0

if(A>=B) {
    i=A 
}
else {
    i=B 
}
while(i <= (A*B)) {
    if (i%A==0 and i%B==0) {
        break
    }
    i = i+1
}
print i " is LCM"
exit