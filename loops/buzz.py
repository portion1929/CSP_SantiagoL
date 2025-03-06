
num = 1
while num in range(1,51,1):
    if num == (3 or 6 or 9 or 12 or 18 or 21 or 33 or 36 or 39 or 48):
        print("Fizz\n")
    elif num == (5 or 10 or 20 or 25 or 40 or 45 or 50):
        print("Buzz\n")
    elif num == (15 or 30 or 45):
        print("FizzBuzz\n")
    else:
        print(num)
        num += 1