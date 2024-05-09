import sys

# Function to simulate the game for a single test case
def simulate_game():
    # Taking input for the current test case
    n, k, pb, ps = map(int, input().split())
    p = list(map(int, input().split()))
    a = list(map(int, input().split()))
    
    # Initializing variables for scores
    bodya = 0
    sasha = 0
    
    # Calculating the maximum score
    mxx = max(a)
    
    # Simulating the game
    for _ in range(k):
        bodya += a[pb - 1]
        sasha += a[ps - 1]
        if a[p[pb - 1] - 1] > a[pb - 1]:
            pb = p[pb - 1]
        if a[p[ps - 1] - 1] > a[ps - 1]:
            ps = p[ps - 1]
        if a[ps - 1] == mxx and a[pb - 1] == mxx:
            bodya += (k - _ - 1) * mxx
            sasha += (k - _ - 1) * mxx
            break
    
    # Printing the result
    if bodya > sasha:
        print("Bodya")
    elif sasha > bodya:
        print("Sasha")
    else:
        print("Draw")

# Main function
def main():
    # Taking the number of test cases as input
    t = int(input())
    
    # Simulating each test case
    for _ in range(t):
        simulate_game()

# Calling the main function
if __name__ == "__main__":
    main()
