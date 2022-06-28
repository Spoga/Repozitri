'''
Kreirajte program koji provjerava koja od tri unesene riječi je najduža. Dakle, korisnik treba da unese 3 riječi, a program treba da ispiše koja od njih je najduža (ima najviše karaktera).
'''

str1=input("Unesite prvu riječ: ")
str2=input("Unesite drugu riječ: ")
str3=input("Unesite treću riječ: ")

if len(str1)>len(str2) and len(str1)>len(str3):
  print(f"Najduža riječ od 3 unesene je: '{str1}'")
elif len(str2)>len(str1) and len(str2)>len(str3):
  print(f"Najduža riječ od 3 unesene je: '{str2}'")
elif len(str3)>len(str1) and len(str3)>len(str2):
  print(f"Najduža riječ od 3 unesene je: '{str3}'")
else:
  print("Dvije ili više riječi su iste dužine")