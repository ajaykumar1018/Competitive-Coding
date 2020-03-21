# https://www.codechef.com/problems/ANUBTG

# cook your dish here
try:
    t = int(input())

    while (t>0):
        n = int(input())
        x = list(map(int, input().split()))
        y = sorted(x) 
        y.sort(reverse = True)
        su = 0
        i = 0
        if n==1:
            su su + y[0]
        elif n==2 or n==3 or n==4:
            su = su + y[0] + y[1]
        else:
            k = n
            while i<n :
                if k>=2 :
                    su = su + y[i] + y[i+1]
                else:
                     su = su + y[i] 
                i = i + 4
                k = k - 4
                
        print(su)
        t = t-1
except EOFError as e :
    pass
