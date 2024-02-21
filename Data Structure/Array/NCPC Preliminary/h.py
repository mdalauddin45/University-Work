from calendar import monthrange, day_name

def print_calendar(day, month, year, day_name):
    # Calculate the number of days in the month
    num_days = monthrange(year, month)[1]

    # Create a matrix to represent the calendar
    calendar_matrix = [[' - ' for _ in range(7)] for _ in range(5)]

    # Find the starting day of the week for the given date
    start_day = day_name.index(day_name)

    # Populate the matrix with the corresponding days of the month
    current_day = 1
    for i in range(5):
        for j in range(7):
            if i == 0 and j < start_day:
                continue
            if current_day <= num_days:
                calendar_matrix[i][j] = f"{current_day:2d}"
                current_day += 1

    # Print the calendar in tabular format
    print("|---------------------------|")
    print("|Sun|Mon|Tue|Wed|Thu|Fri|Sat|")
    print("|---------------------------|")
    for row in calendar_matrix:
        print("|" + "|".join(row) + "|")
        print("|---------------------------|")

# Read the number of test cases
T = int(input().strip())

for _ in range(T):
    # Read the input for each test case
    date_input = input().strip().split()
    day, month, year, day_name = map(int, date_input[0].split('/')) + [date_input[1]]

    # Print the calendar for the given date
    print_calendar(day, month, year, day_name)
    print()  # Print a blank line after each test case
