
def snail(line):

    # The snail's daily progress equals the difference between daily up and daily down. If this difference is equal
    # or less than 0 and the snail doesn't reach the top before the end of the day, there is no daily progress and
    # the snail will never reach the top of the wall

    meters_Up, meters_Down, wall_Height = int(line.split()[0]), int(line.split()[1]), int(line.split()[2])
    dailyProgress = meters_Up - meters_Down
    day_counter, snailmeter = 0, 0

    if dailyProgress <= 0 and meters_Up != wall_Height:
        print("Fail")
    else:
        while snailmeter < wall_Height:

            snailmeter += meters_Up
            if snailmeter < wall_Height:
                snailmeter -= meters_Down
            day_counter += 1

        print(day_counter)

snail("3 2 11")