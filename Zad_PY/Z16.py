'''
16.	Kreirajte tekstualni fajl mat_bodovi.txt 
Kreirajte program koji čita iz ovog fajla i upisuje u novi fajl imena i prezimena, te ocjene koje su ovi studenti dobili prema sljedećem:

Ako su bodovi >=54 ocjena je 6,
Ako su bodovi >=65 ocjena je 7,
Ako su bodovi >=75 ocjena je 8,
Ako su bodovi >=85 ocjena je 9,
Ako su bodovi >=95 ocjena je 10,

Ako su bodovi ispod 54, student nije položio, te ne upisivati njegove podatke u fajl.
'Student _______ je položio/la ispit. Ocjena: ____.'

'''

with open('mat_bodovi.txt','r',encoding='utf-8') as fh, open('ocjene.txt','w',encoding='utf-8')as wh:
  fh.readline()
  fh.readline()
  podaci = fh.readlines()
  for unos in podaci:
    ime_prezime,br_indeksa,datum,bodovi = unos.split(', ')
    bodovi = int(bodovi)

    if bodovi<54:
      continue
    elif 54<=bodovi<65:
      ocjena = 6
    elif 65<=bodovi<75:
      ocjena = 7
    elif 75<=bodovi<85:
      ocjena = 8
    elif 85<=bodovi<95:
      ocjena = 9
    elif 95<=bodovi<=100:
      ocjena = 10
    wh.write(f"Student {ime_prezime} je položio/la ispit. Ocjena : {ocjena}\n")
    

