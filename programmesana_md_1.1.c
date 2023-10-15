#!/bin/bash

read -p "Ievadi pirmo skaitli (400000): " pirmais_skaitlis

read -p "Ievadi orto skaitli (100000): " otrais_skaitlis

result=$((pirmais_skaitlis * otrais_skaitlis))

echo "Rezultāts ir: $result"

