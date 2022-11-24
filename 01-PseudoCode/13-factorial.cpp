remember:
1. factorial(n) = 1*2*3*4 --------- *(n-1)*n 
2. factorial(0) = 1
3. factorial(negative number) = 0


Read N 

i=1
product=1

if(N>=1) {
    while(i<=N) {
        product=product*i 
        i=i+1
    }
}
else if (N<0) {
    product = 0
}

print product
exit