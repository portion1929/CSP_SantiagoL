#Santiaog Lagarde Time of Day
import time
current =time.time()
local_time= time.localtime(current)
hour = local_time.tm_hour
if hour >=5 & hour <=11:
    print(f"Good Morning.")
elif hour >11 & hour  <= 16:
    print(f"Good Afternoon")
elif hour >16 & hour <19:
    print("Good Evening.")
elif hour >19 & hour <=23:
    print("Good Night.")