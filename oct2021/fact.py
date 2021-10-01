n=int(input("Enter Number greater than zero"))
answer=1
for i in range(1,n+1):
    answer*=i
#Method 2
answer1,j=1,1
while j<n+1:
    answer1*=j
    j+=1
print("Factorial of ",n," = ", answer1)
