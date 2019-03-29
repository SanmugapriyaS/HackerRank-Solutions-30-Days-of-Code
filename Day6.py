n=int(input())
for i in range(0,n):
    name=input()
    for j in range(0,len(name)):
        if(j%2==0):
            print(name[j],end='')
    print(" ",end='')
    for j in range(0,len(name)):
        if(j%2 !=0):
            print(name[j],end='')
    print("",end="\n")
    
  