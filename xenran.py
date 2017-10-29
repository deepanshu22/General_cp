import numpy
test = input()

arr=[[0 for i in range(1000000005)]for i in range(1000000005)]
arr[0][0]=1
rank=2

for x in xrange(1,1000000005):
	j=0
	k=x
	while (k>=0):
		arr[j][k]=rank
		k=k-1
		j=j+1
		rank=rank+1

while (test>0):
	a=input()
	b=input()
	print(arr[a][b])
	test=test-1;