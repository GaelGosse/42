
Dans tous les cas, la classe de base Form doit être une classe abstraite
et doit donc être renommée AForm.
Gardez à l’esprit que les attributs du formulaire doivent rester privés
et qu’ils se trouvent dans la classe de base.

Ajoutez les classes concrètes suivantes :

• ShrubberyCreationForm (formulaire de création d’arbustes) :
Échelons requis : signature 145, exécution 137
Créé un fichier <target>_shrubbery dans le répertoire courant, et écrit des arbres
ASCII à l’intérieur.

• RobotomyRequestForm (formulaire de demande de robotomie) :
Échelons requis : signature 72, exécution 45
Fait des bruits de perceuse.
Ensuite, informe que la <target> a été robotomisée avec succès 50% du temps.
Dans le cas contraire, informe que l’opération a échoué.

• PresidentialPardonForm (formulaire de pardon présidentiel) :
Échelons requis : signature 25, exécution 5
Informe que la <target> a été pardonnée par Zaphod Beeblebrox.

Chacune d’entre elle prend un paramètre dans son constructeur : la target (cible) du formulaire.
Par exemple, "jardin" si vous voulez planter des arbustes dans votre jardin.

Maintenant, ajoutez la fonction membre
	execute(Bureaucrat const & executor) const
à la classe de base et implémentez une fonction pour exécuter l’action du formulaire des classes dérivées.

Vous devez vous assurer que le formulaire est signé
et que le grade du bureaucrate tentant de l’exécuter est suffisant.
Sinon, jetez une exception pertinente.
Que vous souhaitiez checker les prérequis dans chaque classe concrète ou dans la classe de base
(puis appeler une autre fonction pour exécuter le formulaire),
c’est votre choix.
--------------------------------------------------------------------------------------------------------------------------------
Toutefois, une de ces deux manières de faire est plus propre que l’autre.

Pour finir, ajoutez la fonction membre executeForm(Form const & form) au Bureaucrat.
Ce dernier doit tenter d’exécute le formulaire.
S’il y arrive, affichez un message comme :

<bureaucrat> executed <form>

Dans le cas contraire, affichez un message d’erreur explicite.

Implémentez et rendez vos propres tests afin de démontrer que tout marche comme
attendu.