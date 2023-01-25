**=**    permet de definir plusieurs fois une variable
**:=**   permet de definir une seule fois une variable

**%.c=%.o**
signifie cree : pour tous fichiers .c il y aura un .o cree

**OBJ = $(SRC:%.c=%.o)**
Dans Obj, on mettra tous les .o qui ont ete cree par les .c
Le `:` signifie lie la *cible* a une *regle*

**`$(VAR1) : $(VAR2)`**
Pour construire VAR1 il faut dabord construire les dependances lie a VAR2