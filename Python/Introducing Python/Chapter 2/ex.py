seconds_per_minute=60
minutes_per_hour=60
hours_per_day=24
seconds_per_hour=seconds_per_minute*minutes_per_hour
seconds_per_day=seconds_per_hour*hours_per_day
print(seconds_per_hour,'seconds per hour')
print(seconds_per_day,'seconds per day')
print(seconds_per_day/seconds_per_hour,'hours per day')
print(seconds_per_day//seconds_per_hour,'hours per day')
