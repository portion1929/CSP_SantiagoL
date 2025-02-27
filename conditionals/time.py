#santiago lagarde, Time of Day

import time
#first instance of time on programming
#print(time.gmtime())

#current time in seconds since gmtime

current =time.time()

#current time as used to seeing
now = time.ctime(current)
print(now)

#get just hour
local_time= time.localtime(current)
print(local_time)
hours = local_time.tm_hour

minutes = local_time.tm_min

print(minutes)

print(hours)
