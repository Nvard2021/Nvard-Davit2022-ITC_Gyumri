str = 'SSOSOSOOSSSOSSO'

n = 3

 

chunks = []

 

i = 0

while i < len(str):

 if i+n < len(str):

  chunks.append(str[i:i+n])

 else:

 chunks.append(str[i:len(str)])

 i += n

print(chunks)

x = 0

y = 0

z = 0

while y < len(chunks):

 if chunks[y][x] != "S":

  print (z)

 x += 1

 z +=1

 if chunks[y][x] != "O":

  print (z)

 x += 1

 z += 1

 if chunks[y][x] != "S":

  print (z)

 x = 0

 y += 1

 z += 1

 

#print(chunks[y][x])
