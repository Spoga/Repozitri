'''Kockica sa ecampusa
Kreirajte program koji korisniku omogućava bacanje kockice n
puta, gdje je n broj između 3 i 5.
● Korisnik je pobijedio ukoliko baci tri puta isti broj. Tada program
treba da ispiše odgovarajuću poruku uz veselog smajlija.
● Ukoliko korisnik baci sva tri broja različita, izgubio je. Tada
program ispisuje odgovarajuću poruku uz tužnog smajlija.

'''

import emoji, random

while True:
    n = int(input('Unesite broj bacanja kockice (između 3 i 5): '))
    if n >= 3 and n <= 5:
        break

bacanja = [] #[4, 2, 2, 6]
for i in range(n):
    #bacanje kockice
    b = random.randint(1, 6)
    bacanja.append(b)

pobjeda = False
for i in bacanja:
    if bacanja.count(i) >= 3:
        pobjeda = True
        break

print(bacanja)
if pobjeda == True:
    print(emoji.emojize(':smiley:', use_aliases=True))
else:
    print(emoji.emojize(':worried:', use_aliases=True))
