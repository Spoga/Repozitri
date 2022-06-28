'''
Kreirajte funkciju koja prima 3 parametra. Prva dva parametra su tipa broj x i y. Treći parametar je tipa string a određuje matematičku operaciju koja se treba izvršiti nad primljenim brojevima. Matematičke operacije mogu biti: sabiranje('+'), oduzimanje('-'), množenje ('*') i dijeljenje. Funkcija vraća rezultat te operacije. Ukoliko je drugi parametar jednak 0, a operacija je dijeljenje, fukncija treba da ispiše 'Ne znam dijeliti sa nulom'. Ukoliko je unešena nepoznata nepoznata matematička operacija, funkcija treba da ispiše poruku 'Ne znam tu matematičku operaciju'.
'''

def funkcija(x,y,op):
  '''(number,number,string)-> number
  Funkcija vrsi matematicke operacije na prva 2 proslijedjena parametra na osnovu 3. unesenog parametra te vraca rezultat
Primjer poziva:
>>> a = 3
>>> b = 4
>>> print(funkcija(a,b,'+'))
7 
'''
  if op == '+':
    return x+y
    
  elif op == '-':
    return x-y
  elif op=='*':
    return x*y
  elif op=='/':
    try:
      return x/y
    except ZeroDivisionError:
      print("Ne znam dijeliti sa nulom")
      return None
  else:
    print("Ne znam tu matematicku operaciju")
    return None