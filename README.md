# Objektinio programavimo 2 uzduotis
# Release v0.1
Failas main.cpp yra vektorių implementacija projekte. Aplikacija konsolėje skaito naudotojų įrašą (input): studentų vardus, pavardes, namų darbų rezultatus, 
tada suskaičiuoja galutinį pažymį bei pažymių vidurkį ir medianą. Taip pat studentų pažymiai gali būti sugeneruojami atsitiktinai.

# Release v0.2
Pridėta skaitymo iš failo implementacija. Rodomas rezultatas rušiuojamas pagal studentų vardus ir pavardes.

# Release v0.3
Pridėtas .h header failas, sukurti atskiri .cpp failai: vienas main funkcijai, kitas - kitoms aplikacijoje n

# Release v0.4
Pridėta galimybė atsitiktinai generuoti įrašymo failus. Rezultatai skirstomi pagal pažymius į "kietekus" ir "lievakus". Atitinkamai sukuriami failai šiems dviems sarašams išvesti. Programos laikas skaičiuojamas programoje kiekvienai funkcijai.

# Release v0.5
Pridėta deque implementacija ir atliktas testavimas su šiuo konteineriu tipu.

# Testavimo kompiuteris
CPU: Intel(R) Core(TM) i5-7300HQ @ ~2.50GHz (4 CPUs), RAM: 8GB DD4-2666Mhz, SSD: SAMSUNG MZVLW128 1TB M.2

# Testavimo rezultatai (std::vector)
Testavimas #1:

Studentų skaičius : 1000 <br>
Namų darbų skaičius : 10 <br>
Generavimas : 13.9765 ms <br>
Skaitymas iš failo : 50.8396 ms <br>
Vidurkių skaičiavimas : 0.7953 ms <br>
Medianų skaičiavimas : 1.6708 ms <br>
Rūšiavimas std::sort : 4.3238 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus" : 2.0789 ms <br>
Rašymas į failą : 10.6524 ms <br>

Testavimas #2:

Studentų skaičius: 10000 <br>
Namų darbų skaičius: 10 <br>
Generavimas: 51.6133 ms <br>
Skaitymas iš failo: 382.428 ms <br>
Vidurkių skaičiavimas: 2.2214 ms <br>
Medianų skaičiavimas: 16.3237 ms <br> 
Rūšiavimas std::sort: 51.1975 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 11.4225 ms <br>
Rašymas į failą: 69.0375 ms <br>

Testavimas #3:

Studentų skaičius: 100000 <br>
Namų darbų skaičius: 10 <br>
Generavimas: 469.166 ms <br>
Skaitymas iš failo: 3832.65 ms <br>
Vidurkių skaičiavimas: 14.4711 ms <br>
Medianų skaičiavimas: 170.388 ms <br>
Rūšiavimas std::sort: 635.327 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 94.8377 ms <br>
Rašymas į failą: 646.541 ms <br>


Testavimas #4:

Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 10 <br>
Generavimas: 4900.18 ms <br>
Skaitymas iš failo: 38454.7 ms <br>
Vidurkių skaičiavimas: 125.814 ms <br>
Medianų skaičiavimas: 1592.62 ms <br>
Rūšiavimas std::sort: 7439.1 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 988.09 ms <br>
Rašymas į failą: 5243.97 ms <br>


# Testavimo rezultatai (Deque)

Testavimas #1:

Studentų skaičius: 1000 <br> 
Namų darbų skaičius: 10 <br>
Generavimas: 28.2995 ms <br>
Skaitymas iš failo: 56.1175 ms <br>
Vidurkių skaičiavimas: 2.947 ms <br>
Medianų skaičiavimas: 27.5667 ms <br>
Rūšiavimas std::sort: 6.0914 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 4.2923 ms <br>
Rašymas į failą: 15.4356 ms <br>

Testavimas #2:

Studentų skaičius: 10000 <br> 
Namų darbų skaičius: 10 <br>
Generavimas: 65.4911 ms <br>
Skaitymas iš failo: 416.905 ms <br>
Vidurkių skaičiavimas: 23.1511 ms <br>
Medianų skaičiavimas: 270.947 ms <br>
Rūšiavimas std::sort: 91.1885 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 21.4992 ms <br>
Rašymas į failą: 73.4469 ms <br>

Testavimas #3:

Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 10 <br>
Generavimas: 523.569 ms <br>
Skaitymas iš failo: 4311.06 ms <br>
Vidurkių skaičiavimas: 225.12 ms <br>
Medianų skaičiavimas: 2886 ms <br>
Rūšiavimas std::sort: 1301.92 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 230.867 ms <br>
Rašymas į failą: 659.71 ms <br>

Testavimas #4:

Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 10 <br>
Generavimas: 5267.8 ms <br>
Skaitymas iš failo: 40721.9 ms <br>
Vidurkių skaičiavimas: 2186.73 ms <br>
Medianų skaičiavimas: 26350.3 ms <br>
Rūšiavimas std::sort: 13244.4 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 1820.52 ms <br>
Rašymas į failą: 5734.26 ms <br>


# Release v1.0

Implementuotos dvi strategijos programos atlikimui ir lyginamas programos laikas

# Instrukcija, failų pavadinimai:

Priedas "vec" skirtas failams implementuojamais su vektoriais
Be priedo failai skirti implementacijai su deku

Priedas "2" skirtas programos implementacijai su strategija B
Be priedo failai skirti implementacijai su strategija A

Programos paleidimas: įrašyti 'make' cmd lange atsidarius kataloga kur yra failai su kodu.

Norint pakeisti leidžiamus failus: atidaryti makefile failą ir pakoreguoti antrąją eilutę Pvz.: g++ -std=c++17 -o main main_vec_2.cpp func_vec_2.cpp
Su šiuo makefile programa pasileis su strategijos B implementacija.

# Testavimo kompiuteris
CPU: Intel(R) Core(TM) i5-7300HQ @ ~2.50GHz (4 CPUs), RAM: 8GB DD4-2666Mhz, SSD: SAMSUNG MZVLW128 1TB M.2

# Testavimo rezultatai (Vector)(A)
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 470.158 ms <br>
Skaitymas iš failo: 2188.14 ms <br>
Vidurkių skaičiavimas: 8.1929 ms <br>
Medianų skaičiavimas: 43.5323 ms <br>
Rūšiavimas std::sort: 677.136 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 81.2707 ms <br>
Rašymas į failą: 824.36 ms <br>

# Testavimo rezultatai (Vector)(B)
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 695.066 ms <br>
Skaitymas iš failo: 2273.29 ms <br>
Vidurkių skaičiavimas: 9.5355 ms <br>
Medianų skaičiavimas: 49.6168 ms <br>
Rūšiavimas std::sort: 747.642 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 574882 ms <br>
Rašymas į failą: 795.351 ms <br>

# Testavimo rezultatai (Deque)(A)
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 664.821 ms <br>
Skaitymas iš failo: 2252.72 ms <br>
Vidurkių skaičiavimas: 131.105 ms <br>
Medianų skaičiavimas: 723.922 ms <br>
Rūšiavimas std::sort: 1257.64 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 163.591 ms <br>
Rašymas į failą: 699.587 ms <br>

# Testavimo rezultatai (Deque)(B)
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 670.548 ms <br>
Skaitymas iš failo: 2282.41 ms <br>
Vidurkių skaičiavimas: 137.056 ms <br>
Medianų skaičiavimas: 799.482 ms <br>
Rūšiavimas std::sort: 1257.74 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 286133 ms <br>
Rašymas į failą: 621.995 ms <br>


# Release v1.1
Iš struktūrų pereita prie klasių. Palygintas programos laikas naudojant struktūras ir klases bei skirtingas O flags.

# Testavimo rezultatai (Struct)
Testavimas #1: <br>
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 695.361 ms <br>
Skaitymas iš failo: 2194.81 ms <br>
Vidurkių skaičiavimas: 8.0244 ms <br>
Medianų skaičiavimas: 44.3731 ms <br>
Rūšiavimas std::sort: 667.623 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 93.1717 ms <br>
Rašymas į failą: 588.071 ms <br>

Testavimas #2: <br>
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 4662.62 ms <br>
Skaitymas iš failo: 23420.7 ms <br>
Vidurkių skaičiavimas: 135.874 ms <br>
Medianų skaičiavimas: 539.867 ms <br>
Rūšiavimas std::sort: 9517.64 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 1103.46 ms <br>
Rašymas į failą: 6072.1 ms <br>

# Testavimo rezultatai (Class)

Testavimas #1: <br>
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 426.902 ms <br>
Skaitymas iš failo: 2176.76 ms <br>
Vidurkių skaičiavimas: 8.3873 ms <br>
Medianų skaičiavimas: 43.6382 ms <br>
Rūšiavimas std::sort: 696.342 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 89.7869 ms <br>
Rašymas į failą: 932.124 ms <br>

Testavimas #2: <br>
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 4655.62 ms <br>
Skaitymas iš failo: 22612.2 ms <br>
Vidurkių skaičiavimas: 72.9808 ms <br>
Medianų skaičiavimas: 402.969 ms <br>
Rūšiavimas std::sort: 8108.67 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 922.702 ms <br>
Rašymas į failą: 5470.57 ms <br>

# Skirtingų -O flags testavimo rezultatai
Testavimas #1: Flag'as default <br>
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 4655.62 ms <br>
Skaitymas iš failo: 22612.2 ms <br>
Vidurkių skaičiavimas: 72.9808 ms <br>
Medianų skaičiavimas: 402.969 ms <br>
Rūšiavimas std::sort: 8108.67 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 922.702 ms <br>
Rašymas į failą: 5470.57 ms <br>

Testavimas #2: Flag'as O1 <br>
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 4352.32 ms <br>
Skaitymas iš failo: 20402.3 ms <br>
Vidurkių skaičiavimas: 28.3 ms <br>
Medianų skaičiavimas: 82.7385 ms <br>
Rūšiavimas std::sort: 1088.37 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 364.91 ms <br>
Rašymas į failą: 5072.79 ms <br>

Testavimas #3: Flag'as O2 <br>
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 3964.53 ms <br>
Skaitymas iš failo: 19912.3 ms <br>
Vidurkių skaičiavimas: 40.6735 ms <br>
Medianų skaičiavimas: 81.671 ms <br>
Rūšiavimas std::sort: 1089.85 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 372.555 ms <br>
Rašymas į failą: 5406.51 ms <br>

Testavimas #4: Flag'as O3 <br>
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Generavimas: 3981.19 ms <br>
Skaitymas iš failo: 20625.6 ms <br>
Vidurkių skaičiavimas: 23.3047 ms <br>
Medianų skaičiavimas: 76.3007 ms <br>
Rūšiavimas std::sort: 1061.17 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 324.437 ms <br>
Rašymas į failą: 5102.32 ms <br>

# Release v1.2
Pridėtas "<<" custom operatorius padedantis parašyti išrašymo funkcijas "švariau" ir labiau organizuotai.
