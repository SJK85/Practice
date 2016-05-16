locations={'Charlotte':183,'Tampa':220,'Pittsburgh':222,'Los Angeles':475}
def hotel_cost(nights):
    return 140*nights

def plane_ride_cost(city):
    if city in locations:
        return locations.get(city)
    else:
        return 999999
        
print(plane_ride_cost('Charlote'))

