l=raw_input().split()
n=int(l[0])
t=int(l[1])
l=raw_input().split()
l=[int(i) for i in l]
t1=1
while(t1<=t):
	t1+=1
	l1=raw_input().split()
	i=int(l1[0])
	j=int(l1[1])
	l2=l[i:j+1]
	print min(l2)