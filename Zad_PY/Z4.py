'''
Kreirajte program koji provjerava koliko cifara ima uneseni broj, te sumu njegovih cifara. Na primjer, ako je korisnik unio broj 234, program treba da ispiše sljedeće:

'Broj ima 3 cifre. Suma svih cifara je: 9.'

'''

broj = input("Unesite broj: ")
suma = 0
broj_cifri = 0
for i in broj:
  suma += int(i)
  broj_cifri +=1

print(f"Broj ima {broj_cifri} cifre. Suma svih cifara je: {suma}")