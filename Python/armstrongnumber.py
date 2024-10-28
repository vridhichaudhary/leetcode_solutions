def is_armstrong(num):
    temp=num
    count_digits=0
    while(temp>0):
        digits=temp%10
        count_digits=count_digits+1
        temp=temp//10

def print_armstrong_numbers_in_range(A, B):
    for i in range(A,B+1):
        length=s=0
        a=b=i
        while(a>0):
            a=a//10
            length+=1
        while(i>0):
            c=i%10
            s+=c**length
            i=i//10
        if(s==b):
            print(s,end=" ")
