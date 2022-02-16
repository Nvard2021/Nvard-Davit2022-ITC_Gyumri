st = """
aa:55
aa:10
opp:68
uf:125
op:124"""

def strNum(st):
    str1 = st.splitlines()
    for i in range(len(str1)-1):
        for j in range(0,len(str1)-i-1):
             if str1[j] > str1[j+1]:
                 str1[j], str1[j + 1] = str1[j + 1], str1[j]
                        
    return str1

data = strNum(st)

for i in data:
    print(i)
