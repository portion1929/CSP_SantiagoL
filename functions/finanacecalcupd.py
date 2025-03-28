# Santiago Lagarde, Financial Calculator Python
print("This calculator will help you calculate your financial situations\n")
def info(income, amount,type):
    pertype = (amount/income)*100
    print(f"You spent ${amount:.2f} on {type} and that is {pertype:.0f}% of your income.")

def questions(inputs):
    questions = float(input(f"What is your monthly {inputs}?\n"))
   
    return questions

income= float(input ("what is your monthly income?\n"))
rent = float(input ("what is your monthly rent cost?\n"))
utilities = float(input ("what is your monthly utilities cost?\n"))
groceries = float(input ("what is your monthly grocery cost?\n"))
transport = float(input ("what is your monthly transport cost?\n"))
savings = float(income/10)
expenses = float(rent+utilities+groceries+transport+savings)
spending = float(income-expenses)

info(income, rent, "Rent")
info(income, utilities, "Utilities")
info(income, transport, "Transport")
info(income, savings, "Savings")
info(income, expenses, "Expenses")
info(income, spending, "Spending")
info(income, groceries, "Groceries")