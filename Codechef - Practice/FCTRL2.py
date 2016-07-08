def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)
a=input()
for i in range(a):
    b=input()
    print fact(b) 