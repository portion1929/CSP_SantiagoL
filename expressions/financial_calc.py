#Santiago L, Financial Calculator
income = float(input("How much do you make each month?\n"))

utilities = float(input("How much were spent on your Utilities?]n"))
rent = float(input("How much did you spend on Rent\n"))
transport = float(input("How much did you spent on Transport Costs?\n"))

savings = float(income/90)

groceries = float(input("How much did you spend on groceries?"))
spending_money = (income - (utilities+rent+transport+groceries +savings))
print(savings)
percent_rent = (rent/income)*100
percent_utilities = (utilities/income)*100
percent_transport = (transport/income)*100
percent_groceries = (groceries/income)*100
#tell uesr category spend amount and percent (you spent A of your money on B which is C of your income
print("the percent of money you spend on Rent is", round(percent_rent,2))
print("the percent of money you spend on Utilities is", round(percent_utilities,2))
print("the percent of money you spend on Transport is", round(percent_transport,2))
print("the percent of money you spend on Groceries is", round(percent_groceries,2))
print("the percent of money you should save is", round(savings,2))
print("the amount of money you have to spend is", round(spending_money,2))