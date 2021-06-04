# Objektinio programavimo 2 uzduotis
Main branch'e visada yra atliekamas pull request'as su naujausia stabilia versija.

# Release v0.1
Failas main.cpp yra vektorių implementacija projekte. Aplikacija konsolėje skaito naudotojų įrašą (input): studentų vardus, pavardes, namų darbų rezultatus, 
tada suskaičiuoja galutinį pažymį bei pažymių vidurkį ir medianą. Taip pat studentų pažymiai gali būti sugeneruojami atsitiktinai.

# Release v0.2
Pridėta skaitymo iš failo implementacija. Rodomas rezultatas rušiuojamas pagal studentų vardus ir pavardes.

# Release v0.3
Pridėtas .h header failas, sukurti atskiri .cpp failai: vienas main funkcijai, kitas - kitoms aplikacijoje naudojamoms funkcijoms

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

Priedas "2" skirtas programos implementacijai su strategija B (skirstome naudodami du konteinerius)
Be priedo failai skirti implementacijai su strategija A (skirstome naudodami tris konteinerius)

Programos paleidimas: įrašyti 'make' cmd lange atsidarius kataloga kur yra failai su kodu.

Norint pakeisti leidžiamus failus: atidaryti makefile failą ir pakoreguoti antrąją eilutę Pvz.: g++ -std=c++17 -o main main_vec_2.cpp func_vec_2.cpp
Su šiuo makefile programa pasileis su strategijos B implementacija.

# Testavimo kompiuteris
CPU: Intel(R) Core(TM) i5-7300HQ @ ~2.50GHz (4 CPUs), RAM: 8GB DD4-2666Mhz, SSD: SAMSUNG MZVLW128 1TB M.2

# Testavimo rezultatai (Vector)(A)(100k)
https://user-images.githubusercontent.com/38924118/120754256-15766d80-c515-11eb-8eaf-0b69f7e2fa94.PNG
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 2129.48 ms <br>
Vidurkių skaičiavimas: 7.3629 ms <br>
Medianų skaičiavimas: 30.7981 ms <br>
Rūšiavimas std::sort: 708.397 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 51.6701 ms <br>
Rašymas į failą: 695.256 ms <br>

# Testavimo rezultatai (Vector)(A)(1mil)
https://user-images.githubusercontent.com/38924118/120754271-1ad3b800-c515-11eb-89a3-2a160df8acb5.PNG
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 2129.48 ms <br>
Vidurkių skaičiavimas: 7.3629 ms <br>
Medianų skaičiavimas: 30.7981 ms <br>
Rūšiavimas std::sort: 708.397 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 51.6701 ms <br>
Rašymas į failą: 695.256 ms <br>

# Testavimo rezultatai (Vector)(A)(10mil)
https://user-images.githubusercontent.com/38924118/120754290-20310280-c515-11eb-8f0c-cecda9f12fff.PNG
Studentų skaičius: 10000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 21709.4 ms <br>
Vidurkių skaičiavimas: 79.2921 ms <br>
Medianų skaičiavimas: 306.147 ms <br>
Rūšiavimas std::sort: 543.642 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 543.642 ms <br>
Rašymas į failą: 6048.82 ms <br>

# Testavimo rezultatai (Vector)(B)(100k)
https://user-images.githubusercontent.com/38924118/120754374-42c31b80-c515-11eb-95fb-e8b7624d8d1b.PNG
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 2235.22 ms <br>
Vidurkių skaičiavimas: 7.8093 ms <br>
Medianų skaičiavimas: 31.8747 ms <br>
Rūšiavimas std::sort: 742.026 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 64.4179 ms <br>
Rašymas į failą: 584.089 ms <br>

# Testavimo rezultatai (Vector)(B)(1mil)
https://user-images.githubusercontent.com/38924118/120754404-48b8fc80-c515-11eb-99d1-74004649bf2b.PNG
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 21722.2 ms <br>
Vidurkių skaičiavimas: 78.86 ms <br>
Medianų skaičiavimas: 314.195 ms <br>
Rūšiavimas std::sort: 8727.75 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 609.715 ms <br>
Rašymas į failą: 5793.9 ms <br>


# Testavimo rezultatai (Vector)(B)(10mil)
https://user-images.githubusercontent.com/38924118/120754418-4ce51a00-c515-11eb-87c3-26b516be718f.PNG
Studentų skaičius: 10000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 203896 ms <br>
Vidurkių skaičiavimas: 782.465 ms <br>
Medianų skaičiavimas: 3952.92 ms <br>
Rūšiavimas std::sort: 94537.9 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 5809.01 ms <br>
Rašymas į failą: 55106.9 ms <br>

# Testavimo rezultatai (Deque)(A)(100k)
https://user-images.githubusercontent.com/38924118/120754429-53739180-c515-11eb-8a8e-e4ce1cc3b1ff.PNG
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 2317.65 ms <br>
Vidurkių skaičiavimas: 133.444 ms <br>
Medianų skaičiavimas: 113.989 ms <br>
Rūšiavimas std::sort: 1219.95 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 166.834 ms <br>
Rašymas į failą: 1234.97 ms <br>

# Testavimo rezultatai (Deque)(A)(1mil)
https://user-images.githubusercontent.com/38924118/120754450-5a020900-c515-11eb-853b-5c3153254fa1.PNG
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 21141.1 ms <br>
Vidurkių skaičiavimas: 1358.29 ms <br>
Medianų skaičiavimas: 1132.49 ms <br>
Rūšiavimas std::sort: 14541.4 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 1749.86 ms <br>
Rašymas į failą: 12422.5 ms <br>

# Testavimo rezultatai (Deque)(B)(100k)
https://user-images.githubusercontent.com/38924118/120754464-61c1ad80-c515-11eb-93a2-bdda34cdfe57.PNG
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 428.844 ms <br>
Vidurkių skaičiavimas: 141.542 ms <br>
Medianų skaičiavimas: 119.581 ms <br>
Rūšiavimas std::sort: 1265.64 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 99.0086 ms <br>
Rašymas į failą: 703.745 ms <br>

# Testavimo rezultatai (Deque)(B)(1mil)
https://user-images.githubusercontent.com/38924118/120754480-671ef800-c515-11eb-821f-ba591fd6a6d4.PNG
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 4603.97 ms <br>
Vidurkių skaičiavimas: 1376.97 ms <br>
Medianų skaičiavimas: 1135.33 ms <br>
Rūšiavimas std::sort: 14820 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 1005.49 ms <br>
Rašymas į failą: 6927.97 ms <br>


# Release v1.1
Iš struktūrų pereita prie klasių. Palygintas programos laikas naudojant struktūras ir klases bei skirtingas O flags.

# Struct laikai Vector(100k)
https://user-images.githubusercontent.com/38924118/120754256-15766d80-c515-11eb-8eaf-0b69f7e2fa94.PNG
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 2129.48 ms <br>
Vidurkių skaičiavimas: 7.3629 ms <br>
Medianų skaičiavimas: 30.7981 ms <br>
Rūšiavimas std::sort: 708.397 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 51.6701 ms <br>
Rašymas į failą: 695.256 ms <br>

# Struct laikai Vector(1mil)
https://user-images.githubusercontent.com/38924118/120754271-1ad3b800-c515-11eb-89a3-2a160df8acb5.PNG
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 2129.48 ms <br>
Vidurkių skaičiavimas: 7.3629 ms <br>
Medianų skaičiavimas: 30.7981 ms <br>
Rūšiavimas std::sort: 708.397 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 51.6701 ms <br>
Rašymas į failą: 695.256 ms <br>

# Testavimo rezultatai -O1 (100k)
https://user-images.githubusercontent.com/38924118/120754764-c846cb80-c515-11eb-8c86-b5b938554817.PNG
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 2372.27 ms <br>
Vidurkių skaičiavimas: 3.2042 ms <br>
Medianų skaičiavimas: 6.2168 ms <br>
Rūšiavimas std::sort: 78.7619 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 22.9332 ms <br>
Rašymas į failą: 680.05 ms <br>

# Testavimo rezultatai -O1 (1mil)
https://user-images.githubusercontent.com/38924118/120754779-cc72e900-c515-11eb-923d-96a1fc237140.PNG
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 19738.3 ms <br>
Vidurkių skaičiavimas: 26.3299 ms <br>
Medianų skaičiavimas: 60.9034 ms <br>
Rūšiavimas std::sort: 1043.68 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 201.063 ms <br>
Rašymas į failą: 6146.76 ms <br>

# Testavimo rezultatai -O2 (100k)
https://user-images.githubusercontent.com/38924118/120754799-d1379d00-c515-11eb-8f8f-12932126efcd.PNG
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 2038.25 ms <br>
Vidurkių skaičiavimas: 3.1209 ms <br>
Medianų skaičiavimas: 7.2342 ms <br>
Rūšiavimas std::sort: 80.8808 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 21.8283 ms <br>
Rašymas į failą: 635.021 ms <br>

# Testavimo rezultatai -O2 (1mil)
https://user-images.githubusercontent.com/38924118/120754815-d694e780-c515-11eb-80d0-54f2716450d7.PNG
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 20240.4 ms <br>
Vidurkių skaičiavimas: 23.1946 ms <br>
Medianų skaičiavimas: 63.3707 ms <br>
Rūšiavimas std::sort: 1072.47 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 207.545 ms <br>
Rašymas į failą: 5248.89 ms <br>

# Testavimo rezultatai -O3 (100k)
https://user-images.githubusercontent.com/38924118/120754835-db599b80-c515-11eb-8cb6-978e1e9b1e87.PNG
Studentų skaičius: 100000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 1987.51 ms <br>
Vidurkių skaičiavimas: 3.2043 ms <br>
Medianų skaičiavimas: 5.348 ms <br>
Rūšiavimas std::sort: 80.7906 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 22.4115 ms <br>
Rašymas į failą: 631.353 ms <br>

# Testavimo rezultatai -O3 (1mil)
https://user-images.githubusercontent.com/38924118/120754916-f75d3d00-c515-11eb-953a-0bce3aad205d.PNG
Studentų skaičius: 1000000 <br> 
Namų darbų skaičius: 5 <br>
Skaitymas iš failo: 20087.1 ms <br>
Vidurkių skaičiavimas: 26.366 ms <br>
Medianų skaičiavimas: 59.7863 ms <br>
Rūšiavimas std::sort: 1050.79 ms <br>
Studentų skirstymas į "kietekus" ir "lievakus": 208.818 ms <br>
Rašymas į failą: 5280.52 ms <br>

# Release v1.2
Pritaikytas "Rule of three" principas klasei "mokinys". Patobūlinta klasė, perrašytos skaitymo ir rašymo funkcijos.

# Release v1.5
Pridėta žmogaus klasė iš kurios klasė "mokinys" dabar yra derived.

# Release v2.0
Pridėta doxygen dokumentacija doc.rar archyve.

atnaujintas README.md

# INSTRUCTIONS
1. git clone OP_2uzd [master] to your machine
2. open the downloaded folder
3. open command line or terminal inside the same directory
4. run make
5. run the program by make run
