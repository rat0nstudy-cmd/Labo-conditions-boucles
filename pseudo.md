# Pseudo code
```C++
bool is_running = true

bool is_prime (nombre) {
    pour (diviseur = 2; diviseur <= au carré de (nombre); diviseur ++){
        si (nombre % diviseur == 0)
            retourne faux
        }
        retourne vrai
}

(On demande minimum une fois donc --> do...while)
fait (
    int limit = 0
    fait {
        cout "Entrer une valeur [2-1000] : "
        cin limit} pendant que (!(limit est plus grand ou égale à 2 && plus petit ou égale à 1000))
    
    //les nombres 
    int n_col = 5
    int width = 5   
    int col = 1
    
    cout voici la liste des nombres premiers
    pour (nombre = 2; nombre <= limit; nombre++) {
        si (is_prime(nombre)) {
            cout << setw(width) << nombre
            col++
            
            si (col > n_col) {
                cout << endl
                col = 1
            }
        }
    }
    
    fait {
        cout "Voulez vous recommencer ? :"
        cin choix } pendant que (!(choix == O || choix == N))
        
    si (choix == N)
        is_running = false
) pendant que (is_running)

cout "Fin de programme"
```
