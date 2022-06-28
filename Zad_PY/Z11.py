'''
11.	Napišite funkciju koja prima dan, mjesec i godinu i provjerava koji dan u sedmici je bio na taj datum, te da li je ta godina bila prestupna. Funkcija ispisuje dvije poruke, a ne vraća ništa:
'Datum _____ je ______ (dan u sedmici).'
'Godina _____ je (nije) prestupna godina.'

'''
def funkcija(dan,mjesec,godina):
  '''
  (int,int,int) -> None
  Funkcija ispisuje koji je dan u sedmici bio te da li je godina bila prestupna ovisno o proslijeđenom datumu

  '''
  import datetime
  import calendar
  datum = datetime.date(godina,mjesec,dan)
  dani_u_sedmici = ('Ponedjeljak','Utorak','Srijeda','Četvrtak','Petak','Subota','Nedjelja')
  
  print(f"Datum {datum} je {dani_u_sedmici[datum.weekday()]}")

  if calendar.isleap(godina)==True:
    print(f"Godina {datum.year} je prestupna godina")
  else:
    print(f"Godina {datum.year} nije prestupna godina")
  
  

  

