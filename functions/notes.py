#Santiago Lagarde, function notes

#functions = action stored in key word
#number = int(input("Can I get a number:\n"))
#def add(numOne, numTwo): #parameters that go in parenthesis seperated by commas
    #numOne = int(input("give a number:\n"))
    #numTwo = int(input("give another number:\n"))
    #print(numOne+numTwo)



#add(12,20) #arguments are given when function is called and has to match number of parameters.
#add(2,4)
#add(7,21)

def user(word):
    answer = input(f"tell me a {word}")
    return answer
name = user("name")
verb =user("verb")
place =user("place")
print(f"{name} was {verb} and somehow got to {place}") 