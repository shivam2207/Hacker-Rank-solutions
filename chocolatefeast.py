t=input()
t1=1
while(t1<=t):
	t1+=1
	l=raw_input().split()
	l=[int (i) for i in l]
	n,c,m=l
	count=n/c
	w=count
	while(w>=m):
		count+=w/m
		w=w/m+w%m
	print count