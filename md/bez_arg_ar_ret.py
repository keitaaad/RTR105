# Modulis 3: bez argumentiem ar return

def get_random_number():
    import random
    return random.randint(1, 10)

random_num = get_random_number()
print(f"Nejaušs sakitlis: {random_num}")

