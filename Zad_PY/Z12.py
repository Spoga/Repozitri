'''
12.	Kreirajte modul rjecnik.py. Modul sadrži rječnik koji mapira engleske riječi u bosanske. Modul sadrži:
a.	Funkciju eng_bos i njen docstring. Funkcija uzima dva parametra tipa string: riječ na engleskom i odgovarajući prevod te riječi na bosanskom. Funkcija ubacuje riječi u rječnik.
b.	Funkciju rijec_u_rjecniku i njen docstring. Funkcija prima jedan parametar-riječ na engleskom i provjerava da li se ona nalazi u gore navedenom rječniku. Ako se nalazi ispisuje poruku: 'Riječ ______ se nalazi u rječniku.', a ako se ne nalaziispisuje poruku: 'Riječ ______ se ne nalazi u rječniku.'
Kreirati testni program koji poziva ove funkcije.

'''
import rjecnik

rjecnik.eng_bos("Bird","Ptica")
rjecnik.rijec_u_rjecniku("Bird")
rjecnik.rijec_u_rjecniku("Fish")
