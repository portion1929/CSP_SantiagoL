income = float(input("Hello, this is a financial calculator!\n What is your monthly income?: "))
rent = float(input("What is your monthly amount spent on rent?: "))
utilities = float(input("What is your monthly amount spent on utilities?: "))
groceries = float(input("What is your monthly amount spent on groceries?: "))
transport = float(input("What is your monthly amount spent on transport?: "))
savings = income*2
expenses = rent + utilities + groceries + transport
spent = income - expenses - savings
print(f"Your monthly income amount is ${income:.2f}\n")
print(f"Your monthly expense amount is ${expenses:.2f}\n")
print(f"Your monthly savings amount is ${savings:.2f}\n")
print(f"Your monthly spending amount is ${spent:.2f}\n")
percent_rent = rent/income *100
percent_utilities = utilities/income *100
percent_groceries = groceries/income *100
percent_transport = transport/income *100
percent_savings = savings/income *100
percent_expenses = expenses/income *100
print(f"Your rent amount is {int(percent_rent)}% of your monthly income!\n")
print(f"Your utilities amount is {int(percent_utilities)}% of your monthly income!\n")
print(f"Your grocery amount is {int(percent_groceries)}% of your monthly income!\n")
print(f"Your transport amount is {int(percent_transport)}% of your monthly income!\n")
print(f"Your savings amount is {int(percent_savings)}% of your monthly income!\n")
print(f"Your expense amount is {int(percent_expenses)}% of your monthly income!\n")