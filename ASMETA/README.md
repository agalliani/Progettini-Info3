

# Progettino ASMETA


### **Introduzione**

Anche in questo caso mantengo la costruzione di Aerei. \
Ho creato tre **domini**:



* TipoCorpo che costituisce gli enumerativi per la struttura di un aereo di tipo Jet, Propeller e da Combattimento.
* TipoMotore che costituisce l’enumerativo per motore Jet e Propeller
* TipoAereo che può essere Jet, Propeller, Fight o Custom

L’utente seleziona il tipo di motore e il tipo di corpo desiderato (attraverso delle **monitored**), il sistema decide la tipologia di aereo da associare a tali selezioni (tramite la funzione **static buildPlane**). Se le scelte non rientrano in nessuna categoria, allora l’aereo è di tipo Custom.

Infine, il sistema comunica con un messaggio (una stringa) la conferma della creazione dell’aereo.

Ho quindi usato:



* **monitored** per la scelta del motore e del corpo dell’aereo da parte dell’utente
* **controlled** che prendono in input le scelte fatte e che gestiscono la stringa con il messaggio da dare all’utente
* **macro rule** a cui passo il motore e il corpo scelti e attraverso uno switch
* **function** chiamata all’interno dello switch della macro rule per decidere la categoria a cui deve appartenere l’aereo da costruire
* **main rule** che all’interno di un blocco **par** chiama la funzione per la costruzione dell’aereo e la regola per la stampa del messaggio corretto.


### **Scenari**

Sono stati salvati cinque diversi scenari, per testare l’effettiva correttezza del sistema.

Tramite l’animatore ho creato



* un jet
* un propeller
* un caccia
* due aerei custom diversi
