id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'
# id = means the user working id number 
#-G = it will print all group id
#-n = it means it will print the users name insted of id 
#tr = it will translate and delete the character
# '' ',' = it will take the spaces and delete it and then it put commas 
#tr = it will translate and delete the character
#-d = delete characters in SET1, do not translate
