def NumGen(n):

	for j in range(1, n+1):
		if j % 5 == 0 or j % 7 == 0:
			yield j

# Driver code
if __name__ == "__main__":
	
	# input goes here
	N = int(input())

	for j in NumGen(N):
		print(j, end = " ")
