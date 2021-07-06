def fact(num):
    if(num == 0 or num ==1):
        return 1
    else:
        return num * fact(num - 1)
    
print(fact(3))


#PNR nPr = fact(n)/fact(n-r)
#    nCr = fact(n)/fact(r*(n-r)) 