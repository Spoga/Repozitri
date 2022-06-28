'''
13.	Kreirati rekurzivnu funkciju suma_parnih i njen docstring koja prima jedan parametar, prirodni broj n, a računa rekurzivno i vraća sumu svih parnih prirodnih brojeva do n.
'''

def suma_parnih(n):
  '''
  (int)-> int
  funkcija prima parametar n (prirodni broj), proračunava sumu svih parnih prirodnih brojeva do n rekurzivno te vraća sumu
  '''
  if n<=0:
    return 0
  elif (n % 2 == 0):
      return n + suma_parnih(n-2)
  else:
      return suma_parnih(n-1)


