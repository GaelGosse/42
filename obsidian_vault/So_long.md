
## Parsing

### *Map file*

- [ ] check if extension is .ber
- [ ] check if file exist 
- [ ] build map x2 in struct (original + check)

### *Map caracteristics*

- [ ] be rectangular
- [ ] surrounded by wall
- [ ] contain only one character
- [ ] contain only one exit
- [ ] contain at least one collectible
it will be interpreted as :
	0    : empty tile      (\*)
	1     : wall                (\*)
	C    : collectible     (1 or \*)
	E    : exit                (1)
	P    : character      (1)

- [ ] a valid path leading to all collectible and the exit

## MLX

- [ ] display window 
- [ ] display sprites
- [ ] key event to move the character
		W    : up
		S     : down
		A     : left
		D     : right
	- [ ] ESC : quit the program
	- [ ] "x"   : quit the program (mouse click on cross)
- [ ] display number of movements in the shell

