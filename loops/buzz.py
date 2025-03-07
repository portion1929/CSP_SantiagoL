
nums = 1
while nums >= 1 and nums <51:
    if nums % 15 == 0:
        print("Fizz\n")
    elif nums % 5 == 0:
        print("Buzz\n")
    elif nums % 3 == 0:
        print("FizzBuzz\n")
    else:
        print(nums)
    nums += 1