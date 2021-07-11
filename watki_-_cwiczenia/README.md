Zadanie 1.

Napisz program w którym zadeklarowano zmienną globalną counter. Funkcja main uruchamia dwa wątki, po czym czeka na zakończenie dowolnego z nich. Wątek pierwszy w nieskończonej pętli wyświetla wartość zmiennej counter. Wątek drugi w nieskończonej pętli inkrementuje tę zmienną. Dodatkowo skompiluj program z opcją -O3. Opcja ta włącza optymalizacje kompilatora. Jak wytłumaczyć zmianę zachowania programu? Jak temu zaradzić?

Zadanie 2.

Napisz program w którym funkcja main tworzy 10 wątków, po czym oczekuje na ich zakończenie. Każdy wątek powinien wykonywać pętlę for, w której wielokrotnie (ale niekoniecznie co każdą iterację) drukowany byłby napis: "Wątek i iteracja k”. Każdy wątek powinien wybierać losowo liczbę iteracji pętli for z przedziału [0-10000]. Po zakończeniu wszystkich wątków funkcja main powinna wyświetlić łączną liczbę iteracji wykonaną przez wszystkie wątki. Uwaga: zliczanie łącznej ilości iteracji powinno być wykonane przez parametry zwrotne wątków (funkcje pthread_exit / pthread_join), nie przez zmienną globalną.

Kod ćwiczeń wyślij jako archiwum z plikami źródłowymi i makefilem.
