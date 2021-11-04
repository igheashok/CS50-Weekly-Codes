from cs50 import get_string, get_int                            #Specific functions can be imported

name = "Ashok"                                                  #Voila! There is a data type called string! Called as str
surName = get_string("Enter your Surname: ")                    #Bye bye semicolon and \n

print("My name is " + name)                                     #Print by concatenation
print(f"My surname is {surName}")                               #Print by plugging

x = 12                                                          #No need for mentioning data type
y = 34
if x < y:                                                       #Condition statements are without brackets and end with colon 
    print("x is greater than y")


a = get_int("Enter a number: ")
b = get_int("Enter a number: ")
if a < b:
    print("a is less than b")
elif a > b:                                                     #No else-if, only elif
    print("a is greater than b")
else:
    print("Both are same bitch")
    
#while True:                                                    #true is now in caps: True
#    print("We don't want to be stuck in an infinite loop")

for i in [0, 1, 2]:                                             #For loop by list
    print("Life is great")                                      #[] are referred for list in Python
    
for i in range(3):                                              #For loop by range function
    print("Life is great")                                      #range function creates a list
