num = 6

# # Initialize the factorial variable to 1
# factorial = 1

# # Calculate the factorial using a for loop
# for i in range(1, num + 1):
#     factorial *= i

# # Output: The factorial of the number
# print(f"The factorial of {num} is {factorial}")     
def factorial(num):
    """Calculate factorial of n."""
    factorial = 1
    for i in range(1, num + 1):
        factorial *= i
    return factorial
print(f"The factorial of {num} is {factorial}")   

def find_pair(arr, target):
    num = len(arr)  # Get the number of elements in the array
    index_sum = -1  # Initialize to -1 (default if no pair is found)
    
    # Calculate the number of pairs we can form (for illustrative purposes)
    total_pairs = factorial(num) // (factorial(2) * factorial(num - 2))
    print(f"Total unique pairs (combinatorial): {total_pairs}")

    # Use nested loops to find pairs
    for i in range(n):
        for j in range(i + 1, n):  # Ensure j starts after i
            if arr[i] + arr[j] == target:  # Check if the sum equals the target
                index_sum = i + j  # Update index_sum with the sum of indices
                return index_sum  # Return the sum of the indices

    return -1 # Return -1 if no valid pair is found

