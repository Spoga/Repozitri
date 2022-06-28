'''
17.	Kreirajte tekstualni fajl bodovi_takmičenje.txt kao na primjeru ispod:
#Rezultati takmičenja iz engleskog jezika za učenike 2. srednjeg
#Max broj bodova po zadatku:
# Z1	Z2	Z3	Z4	Z5	Z6
# 15	10	10	15	20	30
Šifra učesnika, Z1, Z2, Z3, Z4, Z5, Z6
A234009, 9, 10, 10, 10, 15, 15
A122001, 7, 10, 9, 10, 10, 10
A333309, 15, 10, 10, 10, 18, 28
A000023, 15, 10, 10, 15, 19, 30
A234581, 8, 10, 0, 15, 20, 15
A763540, 15, 10, 8, 15, 15, 0
Spasite ovaj fajl u folderu sa ostalim zadacima. Kreirajte program koji čita iz ovog fajla i upisuje u fajl ukupno_bodovi_takmičenje.txt šifru i ukupne bodove učesnika 


'''

with open('bodovi_takmičenje.txt','r',encoding='utf-8') as fh, open('ukupno_bodovi_takmičenje.txt','w',encoding='utf-8')as wh:
  for i in range(5):
    fh.readline()

  wh.write("Sifra\tBroj Bodova\n")  
  podaci = fh.readlines()
  for unos in podaci:
    sifra,z1,z2,z3,z4,z5,z6 = unos.split(', ')
    bodovi_suma = int(z1)+int(z2)+int(z3)+int(z4)+int(z5)+int(z6)

    wh.write(f"{sifra}\t{bodovi_suma}\n")

