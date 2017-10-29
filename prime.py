test = int(input())

while test>0:
	m,n= map(int,input().split())
	

	for x in range(m,n+1):
		count=0
		if x==1:
			continue
		elif(x==2):
			print(x)
		elif(x==3):
			print(x)
		elif(x==5):
			print(x)
		elif(x==7):
			print(x)
		elif(x>10):
			p = int(x/2)
			
			#print("p is this",p)
			for c in range(2,p):
				if (x%c==0):
					count=count+1
					
					
			if(count==0):
				print (x)		
			
	print ()
	test=test-1
