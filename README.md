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
![vector_a_100k](https://user-images.githubusercontent.com/38924118/119930147-936fcd00-bf87-11eb-8d55-9269fd661d37.PNG)

# Testavimo rezultatai (Vector)(A)(1mil)
![vector_a_1mil](https://user-images.githubusercontent.com/38924118/119930198-a71b3380-bf87-11eb-8955-6b45fe82f80b.PNG)

# Testavimo rezultatai (Vector)(A)(10mil)
![vector_a_10mil](https://user-images.githubusercontent.com/38924118/119930239-b9956d00-bf87-11eb-9fbb-d034ac0976e1.PNG)

# Testavimo rezultatai (Vector)(B)(100k)
![vector_b_100k](https://user-images.githubusercontent.com/38924118/119930268-cc0fa680-bf87-11eb-8259-a6a9ba2a3974.PNG)

# Testavimo rezultatai (Vector)(B)(1mil)
![vector_b_1mil](https://user-images.githubusercontent.com/38924118/119930290-da5dc280-bf87-11eb-9245-ebb4ba043ffc.PNG)

# Testavimo rezultatai (Vector)(B)(10mil)
![vector_b_10mil_nogenerate](https://user-images.githubusercontent.com/38924118/119930318-e5185780-bf87-11eb-8211-5f4d5cddca21.PNG)

# Testavimo rezultatai (Deque)(A)(100k)
![deque_a_100k](https://user-images.githubusercontent.com/38924118/119930396-08db9d80-bf88-11eb-90fc-a709dad679c5.PNG)

# Testavimo rezultatai (Deque)(A)(1mil)
![deque_a_1mil](https://user-images.githubusercontent.com/38924118/119930444-1e50c780-bf88-11eb-9e96-a792098e8637.PNG)

# Testavimo rezultatai (Deque)(B)(100k)
![deque_b_100k](https://user-images.githubusercontent.com/38924118/119930501-3a546900-bf88-11eb-8561-9bfbe43a7b92.PNG)

# Testavimo rezultatai (Deque)(B)(1mil)
![deque_b_1mil](https://user-images.githubusercontent.com/38924118/119930506-3de7f000-bf88-11eb-9dff-2f385a7c8dc2.PNG)


# Release v1.1
Iš struktūrų pereita prie klasių. Palygintas programos laikas naudojant struktūras ir klases bei skirtingas O flags.

# Struct laikai Vector(100k)
![vector_a_100k](https://user-images.githubusercontent.com/38924118/119930147-936fcd00-bf87-11eb-8d55-9269fd661d37.PNG)

# Struct laikai Vector(1mil)
![vector_a_1mil](https://user-images.githubusercontent.com/38924118/119930198-a71b3380-bf87-11eb-8955-6b45fe82f80b.PNG)

# Testavimo rezultatai -O1 (100k)
![01_100k](https://user-images.githubusercontent.com/38924118/119930647-7b4c7d80-bf88-11eb-8f2b-96df9d415f52.PNG)

# Testavimo rezultatai -O1 (1mil)
![01_1mil](https://user-images.githubusercontent.com/38924118/119930664-856e7c00-bf88-11eb-94ec-2f2bb714ffbb.PNG)

# Testavimo rezultatai -O2 (100k)
![02_100k](https://user-images.githubusercontent.com/38924118/119930687-90291100-bf88-11eb-9c56-faa76f641c6f.PNG)

# Testavimo rezultatai -O2 (1mil)
![02_1mil](https://user-images.githubusercontent.com/38924118/119930718-a33be100-bf88-11eb-9c70-b79bd5142c09.PNG)

# Testavimo rezultatai -O3 (100k)
![03_100k](https://user-images.githubusercontent.com/38924118/119930745-b2229380-bf88-11eb-98e4-1a6a97162c05.PNG)

# Testavimo rezultatai -O3 (1mil)
![03_1mil](https://user-images.githubusercontent.com/38924118/119930764-bf3f8280-bf88-11eb-9d62-4c99b952846a.PNG)

# Release v1.2
Pritaikytas "Rule of three" principas klasei "mokinys".

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

