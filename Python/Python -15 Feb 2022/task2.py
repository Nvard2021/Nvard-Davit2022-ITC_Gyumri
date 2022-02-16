def func(*argc, x):
    new=list(argc)
    for i in range(len(new)):
        
         print(new[i]*x)   
              
func(11,22,33,x=3)
