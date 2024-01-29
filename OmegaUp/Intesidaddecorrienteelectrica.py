a = input ( )
b = input ( )

a = a[0: a.find ( ' ' ) ]
b = b[0: b.find ( ' ' ) ]


a = int ( a )
b = int ( b )

c = a / b
c = str ( c )

if a % b == 0:
    print ( c[0: c.find ( '.' )], 'A' )

else:
    print ( c, 'A' )