def printReverse(s):
 
    
    l = [s for s in s.split(' ')]
 
  
    print(l[0], end = ' ')
 
     
    for i in range(1, len(l)-1):
 
        
        print(l[i][::-1], end = ' ')
 
    
    print(l[len(l)-1])
 
s = "Hi how are you geeks"
printReverse(s)