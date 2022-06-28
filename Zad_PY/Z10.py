'''
10.	Napišite funkciju koja prima tri parametra tipa cijeli broj: dan, mjesec, godina. Funkcija treba da vrati broj dana koji su protekli od tog datuma, ako je datum bio u prošlosti, odnosno, koliko dana je do tog datuma, ako je datum u budućnosti
'''
def funkcija(dan,mjesec,godina):
  '''
  (int,int,int) -> int

  Funkcija vraća broj dana koji su ostali/protekli od proslijeđenog datuma  
  '''
  import datetime
  danas = datetime.date.today()
  datum = datetime.date(godina,mjesec,dan)
  delta = datum - danas

  if delta.days<0:
    return f"Prošlo je {abs(delta.days)} dana od tog datuma"
  else:
    return f"Ostalo je {delta.days} dana do tog datuma"
  

