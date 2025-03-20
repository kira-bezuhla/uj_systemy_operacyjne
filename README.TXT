Wykonawca: Kira Bezuhla

Pytanie: Ile procesów powstanie przy n-krotnym wywołaniu funkcji fork i dlaczego?
Odpowiedż: 2^n, gdzie n to ilość wywołania funkcji fork(). Ponieważ przy każdej iteracji są tworzone kolejne 2 procesy. Np.:

fork(); //line 1
fork(); //line 2
fork(); //line 3

             l1             //1 child process by line 1
          /     \           
        l2       l2         //2 child process by line 2
       /  \     /  \        
     l3    l3  l3   l3      //4 child process by line 3
        
Zawartość:
- plik README.txt 
- plik makefile 
- 5 plików z kodem żródłowym do każdego podpunktu zadania
- plik tree.txt z drzewem procesów do podpunkta d


Jak uruchomić programy:
- podpunkt A:
    program pokazuje różne id procesu
    aby go uruchomić wpisujemy komendę "make run_a"
- podpunkt B:
    wywolujemy funkcje fork 3 razy i kazdy z procesow powstalych w ten sposob robi to samo co program z podpunktu a
    aby go uruchomić wpisujemy komendę "make run_b"
- podpunkt C:
    podobnie jak w podpunkcie b ale przy pomocy funckji sleep powodujemy ze procesy potomne staja sie procesami zombie co pozwala nam sprawdzic jaki program je przygarnie
    aby go uruchomić wpisujemy komendę "make run_c"
- podpunkt D:
    podobnie jak w podpunkcie b ale przy pomocy funckji sleep powodujemy ze poszczegolne "pokolenia" procesow wypisuja swoje id po sobie
    aby go uruchomić wpisujemy komendę "make run_d"
- podpunkt E:
    podobnie jak w podpunkcie b ale przy uzyciu funkcji setpgid aby kazdy proces potomny stal sie liderem swojej grupy procesow
    aby go uruchomić wpisujemy komendę "make run_e"
- sprzatanie 
    usuwamy wszystkie programy obiektowe i wykonywalne
    aby go uruchomić wpisujemy komendę "make clean"
- kompresja
    sprzata i kompresuje folder
    aby to zrobic wpisujemy komende "make tar"
    


