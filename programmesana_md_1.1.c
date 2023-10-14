#!/bin/bash

# Ask the user to insert two numbers.
echo "Ievadiet pirmo skaitli: "
read first_number
echo "Ievadiet otro skaitli: "
read second_number

# Calculate the multiplication operation result.
result=$((first_number * second_number))

# Output the multiplication operation result.
echo "Rezultāts ir  $result"
