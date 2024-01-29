a = 0
b = 0


c = input (  )
d = []
e = []


for l in 'abcdefghijklmnopqrstuvwxyz':
    d.append ( l )
    e.append ( 0 )
    
    
for l in range ( a, b ):
    if c[l] in d:
        e[ d.index ( c[l] ) ] += 1


for n in range( 0, len ( d ) ):
    print ( d[n] + ': ' + str ( e[n] ) )