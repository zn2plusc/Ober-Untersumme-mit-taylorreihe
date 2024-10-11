# Taylorreihe Exponentialfunktion - Ober- und Untersummenberechnung

Dieses C++-Programm berechnet die Ober- und Untersummen der Exponentialfunktion e^x über ein gegebenes Intervall mithilfe der Taylorreihe.

## Funktionsweise

Das Programm approximiert die Exponentialfunktion e^x für jeden Punkt des Intervalls mit einer Taylorreihe der Länge 7. Anschließend wird das Intervall in eine angegebene Anzahl von Abschnitten unterteilt, und für jeden Abschnitt wird die Ober- und Untersumme berechnet. Das Ergebnis sind numerische Approximationen des Integrals der Funktion e^x über das Intervall.

## Programmablauf

1. **Eingabe**:
   Der Benutzer wird aufgefordert, folgende Werte einzugeben:
   - `start`: Der Startwert des Intervalls.
   - `end`: Der Endwert des Intervalls.
   - `sections`: Die Anzahl der Abschnitte, in die das Intervall unterteilt wird.

2. **Berechnung**:
   - Das Intervall wird in die vorgegebene Anzahl von Abschnitten aufgeteilt.
   - Für jedes Teilintervall werden die Taylor-Näherungen für e^x am linken und rechten Rand berechnet.
   - Die Ober- und Untersummen werden durch die Rechteckregel berechnet.

3. **Ausgabe**:
   - Die Ober- und Untersummen werden als Ergebnis auf der Konsole ausgegeben.
