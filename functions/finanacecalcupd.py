#santiago lagarde finance calc py
print("This calculator will help you deal with Finances.\n")
def info(income, amount,type):
    pertype = (amount/income)*100
    print(f"You spend ${amount:.2f} on {type} and that is {pertype:.0f}% of your income.")

def questions(inputs):
    questions = float(input(f"What is your monthly {inputs}?\n"))
   
    return questions

income= input ("what is your monthly income?\n")
rent = input ("what is your monthly rent cost?")
utilities = input ("what is your monthly utilities cost?\n")
groceries = input ("what is your monthly grocery cost?\n")
transport = input ("what is your monthly transport cost?\n")
savings = income*2
expenses = rent+ utilities + groceries + transport
spending = income -expenses -savings

info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, transport, "transport")
info(income, savings, "savings")
info(income, spending, "spending")
info(income, groceries, "groceries")