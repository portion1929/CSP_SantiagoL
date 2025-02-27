age = int(input("how old are you?\n"))
if age >=18:
    print(f"because you are {age}, you can vote, drive, get your learners permit, and go to school.")
elif age <18 & age ==16:
    print(f"because you are {age}, you cannot vote, but you can drive, get your learners permit and go to school.")
elif age <16 & age == 15:
    print(f"because you are {age}, you cannot vote or drive, but you can get your learners permit and go to school.")
elif age <15 & age >5:
    print(f"because you are {age}, you cannot vote, drive or get your learners permit, but you can go to school.")
else:
    print(f"becaues you are {age} you cannot vote, drive, get your learners permit or go to school.")