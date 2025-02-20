#santiago lagarde finance calc py
print("This calculator will help you deal with Finances.\n")
def info(income, amount,type):
    pertype = (amount/income)*100
    print(f"You spend ${amount:.2f} on {type} and that is {pertype:.0f}% of your income.")



income = float(input("How much do you make each month?\n"))

utilities = float(input("How much were spent on your Utilities?\n"))
rent = float(input("How much did you spend on Rent\n"))
transport = float(input("How much did you spent on Transport Costs?\n"))

savings = float(income/90)
groceries = float(input("How much did you spend on groceries?"))
savings = income*.1
spending = (income - (utilities+rent+transport+groceries +savings))
info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, transport, "transport")
info(income, savings, "savings")
info(income, spending, "spending")
info(income, groceries, "groceries")