t = int(input())

for j in range(t):
    a = input().strip().split()
    m = int(a[0])
    n = int(a[0])

    for i in range(m):
        b = input().strip().split()
        d = int(b[0])
        
    if(n%2 == 0):
        c = (m*n) - m + 1
    else:
        c = (m*n)

    print(c*d)
    
