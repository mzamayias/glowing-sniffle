/*
Να γραφεί ένα πρόγραμμα που θα διαβάζει από το πληκτρολόγιο 4 float αριθμούς, οι οποίο αντιπροσωπεύουν
το κόστος μιας τηλεόρασης, ενός dvd, ενός πλυντηρίου και ενός ψυγείου. Στη συνέχεια θα υπολογίζει τις
τιμές με ΦΠΑ, θα αυξάνει δηλαδή τις αρχικές κατά 23% και θα γράφει τα αποτελέσματα στην οθόνη.
Να κάνετε το πρόγραμμά σας πιο λειτουργικό ορίζοντας την τιμή του ΦΠΑ ως σταθερά στην αρχή του
προγράμματος, με το όνομα FPA.
*/

#include <stdio.h>

#define FPA 23

int main()
{
    float prices[4], new_prices[4];

    printf("Δώσε την τιμή της τηλεόρασης, χωρίς τον ΦΠΑ:\t");
    scanf("%f", &prices[0]);
    printf("Δώσε την τιμή του dvd player, χωρίς τον ΦΠΑ:\t");
    scanf("%f", &prices[1]);
    printf("Δώσε την τιμή του πλυντηρίου, χωρίς τον ΦΠΑ:\t");
    scanf("%f", &prices[2]);
    printf("Δώσε την τιμή του ψυγείου, χωρίς τον ΦΠΑ:\t");
    scanf("%f", &prices[3]);

    for (int i = 0; i < 4; i++)
    {
        new_prices[i] = prices[i] * (1 + (FPA / 100.0));
    }

    printf("H τιμή της τηλεόρασης με τον ΦΠΑ είναι:\t%.2f\n", new_prices[0]);
    printf("H τιμή του dvd player με τον ΦΠΑ είναι:\t%.2f\n", new_prices[1]);
    printf("H τιμή του πλυντηρίου με τον ΦΠΑ είναι:\t%.2f\n", new_prices[2]);
    printf("H τιμή του ψυγείου με τον ΦΠΑ είναι:\t%.2f\n", new_prices[3]);

    return 0;
}
