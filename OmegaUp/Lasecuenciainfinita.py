a = 0
b = int ( input (  ) )
c = False

for n in range ( 0, b ):
    if a == 5:
        c = True
    elif a == 1:
        c = False

        
    if c == True:
        a -= 1
    else:
        a += 1
        
        
    print ( a, end = ' ' )