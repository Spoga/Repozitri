'''
15.	Napisati rekurzivnu funkciju i njen docstring koja prima dva parametra m i n. Funkcija rekurzivno proračunava m**n
'''

def ekspo(m,n):
  '''
  (int,int)-> int
  funkcija prima parametar m i n (prirodni brojevi), proračunava m**n (m na n) rekurzivno te vraća rezultat
  '''
  if n==0:
    return 1
  else:
      return m * ekspo(m,n-1)


