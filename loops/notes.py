##sant L, loop
#1 What is a loop? 
#Section of code that repeats
#2 What are the two types of loops?
    #while loop, for loop
x = 0
while x <10:
    print("hi", 0)
    x+=1
nums = [3,5,7,9,12]
for num in nums:
    print(num)
#3 What is iteration
    #act of repeating
#4 What are lists? 
    #bunch of values in same variable
siblings = ["alex", "katie", "andrew","goon", "goon2", "goon3","goon 4"]
#print 1 item from list
print (siblings[3])
#change item in list
siblings[6] = "jake"
print(siblings)
#remove item
siblings.pop(5)
print(siblings)
#5 How do you make lists in python?
    # [ around list , between each item in list
    # list items must be proper data types
#6 How do you make for loops in python? 
#proper list printin wit for loop
num = 1
for sibling in siblings:
    print(f"{num}. {sibling} goon")
    num += 1

for num in range(1,10,2):
    print(num)
# 7 how to make while loop
import random
num = 1
rand = random.randint(1,20)
while num <21:
    if num == rand:
        print(f"goose!")
        break #tells loop to stop
    else:
        print("duck")
    num += 1

#continue = tells loop to stop particular round of loop