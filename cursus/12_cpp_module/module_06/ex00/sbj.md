Écrivez une classe static ScalarConverter
qui contiendra une méthode "convert"
prenant comme paramètre string.
Ce littéral doit appartenir à l’un des types scalaires suivants :
• char
• int
• float
• double

À l’exception des paramètres char, seule la notation décimale sera utilisée.

Exemples de littéraux de type char : ’c’, ’a’, ...

Pour simplifier les choses, notez que les caractères non affichables ne seront pas passés à votre programme.

Si la conversion d’un char n’est affichable, mettez un message informatif.

Exemples de littéraux de type int : 0, -42, 42...
Exemples de littéraux de type float : 0.0f, -4.2f, 4.2f...

Vous devez gérer ces pseudo littéraux aussi (pour l’amour de la science) : -inff, +inff et nanf.
Exemples de littéraux de type double : 0.0, -4.2, 4.2...
Vous devez gérer ces pseudo littéraux aussi (parce que c’est fun) : -inf, +inf et nan.

Vous devez premièrement détecter le type du littéral passé en paramètre,

le convertir de sa représentation sous forme de chaîne de caractères vers son véritable type

le convertir explicitement vers les trois autres types de données.

Si une conversion n’a pas de sens ou overflow,
--------------------------------------------------------------------------------------------------------
affichez un message pour informer l’utilisateur que la conversion de type est impossible.
Incluez tout fichier d’en-tête qui vous sera nécessaire afin de gérer les limites numériques et les valeurs spéciales.