def fibonacci (n): 
   FibArr = [0] * (n+1) 
   FibArr[1] = 1
   
   for i in range (2,n+1): 
      FibArr[i] = FibArr[i-1] + FibArr[i-2] 
   return FibArr[n] 
if __name__ == "__main__": 
   print(fibonacci (10))
   
