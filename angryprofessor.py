t=input()
t1=1
while(t1<=t):
	t1+=1
	l=raw_input().split()
	n=int(l[0])
	k=int(l[1])
	l=raw_input().split()
	l=[int(i) for i in l]
	count=0
	for i in range (0,n):
		if(l[i]<=0):
			count+=1
	if(count>=k):
		print "NO"
	else:
		print "YES"
