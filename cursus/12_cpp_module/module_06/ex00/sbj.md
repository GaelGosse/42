Écrivez une classe static ScalarConverter
qui contiendra une méthode "convert"
prenant comme paramètre string.
Ce littéral doit appartenir à l’un des types scalaires suivants :
--------------------------------------------------------------------------------------------------------
• char
• int
• float
• double

À l’exception des paramètres char, seule la notation décimale sera utilisée.

Exemples de littéraux de type char : ’c’, ’a’, ...

Pour simplifier les choses, notez que les caractères non affichables n e seront pas passés à votre programme.

Si la conversion d’un char n’est affichable, mettez un message informatif.

Exemples de littéraux de type int : 0, -42, 42...
Exemples de littéraux de type float : 0.0f, -4.2f, 4.2f...

Vous devez gérer ces pseudo littéraux aussi (pour l’amour de la science) : -inff, +inff et nanf.
Exemples de littéraux de type double : 0.0, -4.2, 4.2...
Vous devez gérer ces pseudo littéraux aussi (parce que c’est fun) : -inf, +inf et nan.