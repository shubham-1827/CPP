//Calculate gcd of two numbers,

Read A,B 

i=0

if(A<=B) {
    i=A 
	
}
else {
    i=B 
}
while (i>1) {
    if (A%i==0 and B%i==0) {
    break //this will exit the loop
	}
    i=i-1
}
print i " is GCD."
exit

===========
sample input:
A=8
B=12

sample output:
GCD=4