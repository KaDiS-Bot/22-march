tokens = ["2","1","+","3","*"]
 
for i in range  (len(tokens)):
    if (tokens[i]=="+" or tokens[i]=="*" or tokens[i]=="-" or tokens[i]=="/"   ):
        c=tokens[i]
        tokens[i]=tokens[i-1]
        tokens[i-1]=c

new=0
for l in range (len(tokens)):
    if (tokens[l]=="+"): 
        new=new+int(tokens[l-1])+int(tokens[l+1])
    elif (tokens[l]=="-"): 
        new=new+int(tokens[l-1])-int(tokens[l+1])
    elif (tokens[l]=="*"): 
        new=new+int(tokens[l-1])*int(tokens[l+1])
    elif (tokens[l]=="/"): 
        new=new+int(tokens[l-1])/int(tokens[l+1])

print(new)