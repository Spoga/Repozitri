'''1.	Kreirajte tekstualni fajl temp_tz_nov_2017.txt.
Podaci su odvojeni tabom ('\t'). Kreirajte program koji čita iz ovog fajla i pronalazi minimalnu i maksimalnu temperaturu. Ove podatke zatim upisuje u novi fajl u vidu sledeće rečenice:
'Minimalna temperatura u Tuzli u novembru 2017. godine je: _____, a maksimalna:_____.'
'''

broj_dana = 0
temperature = list()
with open("temp_tz_nov_2017.txt", 'r', encoding = 'utf-8') as fh:
  for red in fh:
    if red.startswith('#') == False:
      broj_dana +=1
      
      temperature.append(float(red.split()[1]))

max_temp = max(temperature)
min_temp = min(temperature)

with open("min_max_temp.txt",'w',encoding='utf-8')as gh:
  gh.write(f"Minimalna temperatura u Tuzli u novembru 2017. godine je: {min_temp}, a maksimalna: {max_temp}.")
  gh.write('\n')