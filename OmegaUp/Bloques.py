table = []
index = 0



for n in range (0, 100):
	table.append ( "." )



def fall ( a = 0, b = ['.','.']):
	mov0 = a
	table = b


	for n in range(0 , 10):
		if table[mov0 + 20] == '.' or table [mov0 + 21] == '.':
			mov0 += 10


		if mov0 > 79 or (table[mov0 + 20] == '#' or table[mov0 + 21] == '#'):
			table[mov0] = '#'
			table[mov0 + 1] = '#'
			table[mov0 + 10] = '#'
			table[mov0 + 11] = '#'
			break



moves = int ( input ( ) )
move = 0


for n in range( 0, moves ):
	move = int ( input ( ) )
	fall ( move, table )



##Draw Table
for n in range (0, 10):
	for n in range (0, 10):
		print ( table[index], end = '' )
		index += 1

	print ()