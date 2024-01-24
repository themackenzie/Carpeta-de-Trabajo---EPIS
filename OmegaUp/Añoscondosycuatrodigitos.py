def rechange ( r0 = '' ):
	a = r0
	if int ( a[4:] ) > 40:
		a = a[0:4] + '19' + a[4:]
	else:
    	a = a[0:4] + '20' + a[4:]
    return a


a = input ( )

a = rechange ( a )

print ( a )