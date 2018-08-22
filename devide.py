a,b = int(input()) , input();
c = b.count('5')
d = a-c
print(int('5'*(9*(c//9))+'0'*d) if d!=0 else '-1')