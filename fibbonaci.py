def f(n):
    if n<=1:
        return n
    else:
      return(f(n-1) +f(n-2))
n=5
if n<=0:
    print("error")
else:
 print("fibb serious")
 for i in range(n):
     print(f(i))
