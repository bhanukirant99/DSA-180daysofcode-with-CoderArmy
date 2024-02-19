def arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height):
    back_row = list(zip(back_row_rank, back_row_height))
    front_row = list(zip(front_row_rank, front_row_height))
    
    # Sort musicians based on rank
    back_row.sort()
    front_row.sort()
    
    back_positions = [None] * n
    front_positions = [None] * n
    
    back_idx = 0
    front_idx = 0
    
    # Iterate through sorted musicians and assign positions
    for i in range(n):
        if back_row[back_idx][1] > front_row[front_idx][1]:
            back_positions[i] = back_row[back_idx][0]
            front_positions[i] = front_row[front_idx][0]
            back_idx += 1
            front_idx += 1
        else:
            return "Invalid Ordering"
    
    return ''.join(map(str, back_positions)) + '\n' + ''.join(map(str, front_positions))

# Sample Input 1
n = 9
back_row_rank = [147, 137, 137, 137, 135, 140, 145, 140, 135]
back_row_height = [147, 137, 137, 137, 135, 140, 145, 140, 135]
front_row_rank = [136, 135, 132, 146, 138, 139, 132, 142, 130]
front_row_height = [136, 135, 132, 146, 138, 139, 132, 142, 130]

print(arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height))

# Sample Input 2
n = 5
back_row_rank = [122, 130, 125, 127, 149]
back_row_height = [122, 130, 125, 127, 149]
front_row_rank = [132, 130, 131, 128, 129]
front_row_height = [132, 130, 131, 128, 129]

print(arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height))

# Sample Input 3
n = 5
back_row_rank = [88, 76, 8, 7, 6]
back_row_height = [88, 76, 8, 7, 6]
front_row_rank = [42, 17, 3, 2, 1]
front_row_height = [42, 17, 3, 2, 1]

print(arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height))


def arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height):
    back_row = list(zip(back_row_rank, back_row_height))
    front_row = list(zip(front_row_rank, front_row_height))
    
    # Sort musicians based on rank
    back_row.sort()
    front_row.sort()
    
    back_positions = [None] * n
    front_positions = [None] * n
    
    back_idx = 0
    front_idx = 0
    
    # Iterate through sorted musicians and assign positions
    for i in range(n):
        if back_row[back_idx][1] > front_row[front_idx][1]:
            back_positions[i] = back_row[back_idx][0]
            front_positions[i] = front_row[front_idx][0]
            back_idx += 1
            front_idx += 1
        else:
            return "Invalid Ordering"
    
    return ''.join(map(str, back_positions)) + '\n' + ''.join(map(str, front_positions))

# Read input automatically
n = int(input().strip())
back_row_rank = list(map(int, input().strip()))
back_row_height = list(map(int, input().strip().split()))
front_row_rank = list(map(int, input().strip()))
front_row_height = list(map(int, input().strip().split()))

print(arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height))


















def arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height):
    back_row = list(zip(back_row_rank, back_row_height, range(1, n + 1)))
    front_row = list(zip(front_row_rank, front_row_height, range(1, n + 1)))
    
    # Sort musicians based on rank and height
    back_row.sort(key=lambda x: (x[0], -x[1]))
    front_row.sort(key=lambda x: (x[0], -x[1]))
    
    back_positions = [None] * n
    front_positions = [None] * n
    
    for i in range(n):
        if back_row[i][1] > front_row[i][1]:
            back_positions[i] = back_row[i][2]
            front_positions[i] = front_row[i][2]
        else:
            return "Invalid Ordering"
    
    return ' '.join(map(str, back_positions)) + '\n' + ' '.join(map(str, front_positions))

# Read input automatically
n = int(input().strip())
input()  # Skip the line with single digits, as it's not needed

back_row_rank = list(map(int, input().strip().split()))
back_row_height = list(map(int, input().strip().split()))
input()  # Skip the line with single digits, as it's not needed

front_row_rank = list(map(int, input().strip().split()))
front_row_height = list(map(int, input().strip().split()))

print(arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height))















def arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height):
    # Combine ranks and heights with their respective indices
    back_musicians = list(zip(back_row_rank, back_row_height, range(1, n + 1)))
    front_musicians = list(zip(front_row_rank, front_row_height, range(1, n + 1)))

    # Sort musicians based on rank and height
    back_musicians.sort()
    front_musicians.sort()

    # Check if the arrangement is valid
    for i in range(n):
        if back_musicians[i][1] <= front_musicians[i][1]:
            return "Invalid Ordering"

    # Extract positions
    back_positions = [musician[2] for musician in back_musicians]
    front_positions = [musician[2] for musician in front_musicians]

    # Return the arrangement
    return ' '.join(map(str, back_positions)) + '\n' + ' '.join(map(str, front_positions))

# Read input
n = int(input().strip())
back_row_rank = list(map(int, input().strip().split()))
back_row_height = list(map(int, input().strip().split()))
front_row_rank = list(map(int, input().strip().split()))
front_row_height = list(map(int, input().strip().split()))

# Print output
print(arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height))



def arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height):
    # Combine ranks, heights, and original positions
    back_musicians = list(zip(back_row_rank, back_row_height, range(1, n + 1)))
    front_musicians = list(zip(front_row_rank, front_row_height, range(1, n + 1)))

    # Sort musicians by rank
    back_musicians.sort(key=lambda x: x[0])
    front_musicians.sort(key=lambda x: x[0])

    back_positions = [None] * n
    front_positions = [None] * n

    # Assign positions to back row musicians
    back_idx = 0
    for i in range(n):
        while back_idx < n and back_musicians[back_idx][1] <= front_musicians[i][1]:
            back_idx += 1
        if back_idx == n:  # If there are no more valid positions in the back row
            return "Invalid Ordering"
        back_positions[i] = back_musicians[back_idx][2]
        back_idx += 1

    # Assign positions to front row musicians
    for i in range(n):
        front_positions[i] = front_musicians[i][2]

    # Return the arrangement
    return ' '.join(map(str, back_positions)) + '\n' + ' '.join(map(str, front_positions))

# Read input
n = int(input().strip())
back_row_rank = list(map(int, input().strip().split()))
back_row_height = list(map(int, input().strip().split()))
front_row_rank = list(map(int, input().strip().split()))
front_row_height = list(map(int, input().strip().split()))

# Print output
print(arrange_musicians(n, back_row_rank, back_row_height, front_row_rank, front_row_height))



musicians = [(125, 125, 5), (128, 128, 7), (135, 135, 2), (139, 139, 3), (139, 139, 6), (140, 140, 1), (149, 149, 4)]

# Find the index where to insert the tuple (140, 140, 1)
index_to_insert = 0

# Insert the tuple (140, 140, 1) at the first position
new_musicians = [musicians[index_to_insert]] + musicians[:index_to_insert] + musicians[index_to_insert + 1:]

print(new_musicians)


musicians = [(125, 125, 5), (128, 128, 7), (135, 135, 2), (139, 139, 3), (139, 139, 6), (140, 140, 1), (149, 149, 4)]

# Find the index where to insert the tuple (140, 140, 1)
index_to_insert = 0

# Insert the tuple (140, 140, 1) at the first position
new_musicians = [musicians[index_to_insert]] + musicians[:index_to_insert] + musicians[index_to_insert + 1:]

print(new_musicians)







input_order = [5, 7, 2, 3, 6, 1, 4]

# Move the element at index 5 (1) to the second position (index 1)
new_order = input_order[:1] + [input_order[5]] + input_order[1:5] + input_order[6:]

print(new_order)


input_order = [5, 7, 2, 3, 6, 1, 4]

# Define the index of the element to move and its new position
index_to_move = 5
new_position = len(input_order) - 1

# Rearrange the list    
new_order = input_order[:new_position] + [input_order[index_to_move]] + input_order[new_position:index_to_move] + input_order[index_to_move+1:]

print(new_order)
