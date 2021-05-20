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

