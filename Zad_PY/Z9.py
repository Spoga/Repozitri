'''
9.	Kreirajte program koji od korisnika traži da unese cijeli broj između 1 i 9 (ne treba provjeravati ako je unio nešto drugo). Program zatim treba da ispiše obrazac poput ovog ispod (ovo je za broj 3):

123**
12**
1**
12**
123**



'''
n = int(input("Unesite cijeli broj između 1 i 9: "))

for i in range(n,1,-1):
  for j in range(1,i+1):
    print(j,end='')
  print("**")

for i in range(1,n+1):
  for j in range(1,i+1):
    print(j,end='')
  print("**")
