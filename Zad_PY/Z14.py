'''
14.	Kreirati rekurzivnu funkciju suma_neparnih i njen docstring koja prima jedan parametar, prirodni broj n, a računa rekurzivno i vraća sumu svih neparnih prirodnih brojeva do n.
'''

def suma_neparnih(n):
  '''
  (int)-> int
  funkcija prima parametar n (prirodni broj), proračunava sumu svih neparnih prirodnih brojeva do n rekurzivno te vraća sumu
  '''
  if n<=0:
    return 0
  elif (n % 2 != 0):
      return n + suma_neparnih(n-2)
  else:
      return suma_neparnih(n-1)


print(suma_neparnih(10))