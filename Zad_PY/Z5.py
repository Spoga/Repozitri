'''
Kreirajte program koji provjerava koji od tri unesena broja je najmanji. Dakle, korisnik treba da unee 3 broja, a program treba da ispiše koji od njih je najmanji. Ne smijete koristiti ugrađenu funkciju min!
'''

b1=int(input("Unesite prvi broj: "))
b2=int(input("Unesite drugi broj: "))
b3=int(input("Unesite treći broj: "))

if b1<b2 and b1<b3:
  print(f"Najmanji uneseni broj je: {b1}")
elif b2<b3:
  print(f"Najmanji uneseni broj je: {b2}")
else:
  print(f"Najmanji uneseni broj je: {b3}")