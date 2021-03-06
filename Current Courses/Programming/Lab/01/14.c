/*
Στα παλαία χρόνια (όταν η μνήμη του Η\Υ ήταν πολύτιμη), κάποιος βρήκε την εξής
"αριθμητική" λύση για την (στην οποία αναφέρεται και η πιο πάνω άσκηση):
a = a + b; b = a - b; a = a - b; 
Είναι σωστή; Να το διαπιστώσετε δίνοντας δύο τιμές στα a και b, μετά τις πιο πάνω
εντολές και ξαναεμφανίζοντας τις τιμές των a και b.
*/

#include <stdio.h>


int main()
{
    int a = 3, b = 5;

    printf("a = %i, b = %i\n", a, b);

    a += b;
    b = a - b;
    a -= b;

    printf("a = %i, b = %i\n", a, b);

    return 0;
}
