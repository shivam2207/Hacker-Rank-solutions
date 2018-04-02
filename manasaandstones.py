t=input()
t1=1
while(t1<=t):
	t1+=1
	n=input()
	a=input()
	b=input()
	max_value=b*(n-1)
	min_value=a*(n-1)
	diff=b-a
	if(diff==0):
		print min_value
	else:
		s=str(min_value)+" "
		while(min_value<=max_value):
			min_value+=diff
			if(min_value<=max_value):
				s=s+str(min_value)+" "
		print s	