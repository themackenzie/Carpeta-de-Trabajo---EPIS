r0 = int ( input (  ) )
r2 = ''
r1 = ''


for n in range( 0, r0 ):
    r1 = input (  )
    
    if n == 0:
        r2 = r1
        
    elif len ( r1 ) < len ( r2 ):
        r2 = r1
        
print ( r2 )
print ( len ( r2 ) )

if len ( r2 ) % 2 != 0:
    print ( 'Impar' )
else:
    print ( 'Par' )