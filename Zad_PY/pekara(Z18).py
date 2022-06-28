'''
18.	Kreirajte modul pekara.py. Modul treba da sadrži rječnik u kojem su navedena peciva koja možete kupiti u toj pekari i njihova cijena. Ključevi su cijeli brojevi (šifra peciva) a vrijednosti ntorka koja sadrži naziv peciva, veličinu peciva i cijenu u KM:
peciva = {1: ('Bijeli hljeb', 'Maxi', 1.0), 2: ('Crni hljeb', 'Maxi', 1.2), 3: ('Bijeli hljeb', 'Mini', 0.5), 4: ('Crni hljeb', 'Mini', 0.6), 5: ('Ražev hljeb', 'Mini', 0.8)}
Kreirati dvije funkcije i njihov docstring:
-	Funkciju kupi_pecivo koja omogućava korisniku kupovinu peciva na osnovu šifre tog peciva. Funkcija prima šifru peciva, a upisuje naziv peciva, veličinu peciva i cijenu peciva u novi rječnik korpa koji se nalazi van funkcije: Funkcija ne vraća ništa
-	Funkciju ispis_kupovine koja omogućava ispis sadržaja i rječnika korpa kao i sumarni iznos kupovine. Funkcija ne prima niti vraća vrijednosti.


'''

peciva ={1: ('Bijeli hljeb', 'Maxi', 1.0),
         2: ('Crni hljeb', 'Maxi', 1.2),
         3: ('Bijeli hljeb', 'Mini', 0.5),
         4: ('Crni hljeb', 'Mini', 0.6),
         5: ('Ražev hljeb', 'Mini', 0.8)}

korpa=dict()
kljuc = 0
def kupi_pecivo(sifra):
  '''
  (int) -> None
  Funkcija prima sifru te upisuje artikle u rjecnik korpa koji je van funkcije
  '''
  global kljuc
  korpa[kljuc] = peciva[sifra]
  kljuc+=1
  return None
def ispis_kupovine():
  suma = 0
  print("Sifra\tNaziv\tVelicina\tCijena")
  for i in korpa:
    print(f"{i}\t{korpa[i][0]}\t{korpa[i][1]}\t{korpa[i][2]}")
    suma += int(korpa[i][2])

  print(f"Ukupna cijena: {suma}")
  return None

if __name__ == '__main__':
  print(kljuc, korpa)
  kupi_pecivo(1)
  ispis_kupovine()