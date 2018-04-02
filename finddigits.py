t=input()
t1=1
while(t1<=t):
	t1+=1
	n=input()
	s=list(str(n))
	count=0
	for i in range(0,len(s)):
		if(s[i]!='0'):
			if(n%int(s[i])==0):
				count+=1
	print count