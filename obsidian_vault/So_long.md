
## Parsing

### *Map file*

- [x] check if extension is .ber ✅ 2023-01-12
- [x] check if file exist ✅ 2023-01-12
- [x] build map x2 in struct (original + check) ✅ 2023-01-13

### *Map caracteristics*

- [x] be rectangular ✅ 2023-01-14
- [x] surrounded by wall ✅ 2023-01-14
- [x] contain only one character ✅ 2023-01-14
- [x] contain only one exit ✅ 2023-01-14
- [x] contain at least one collectible ✅ 2023-01-14
	it will be interpreted as :
	0    : empty tile      (\*)
	1     : wall                (\*)
	C    : collectible     (1 or \*)
	E    : exit                (1)
	P    : character      (1)
- [x] reject wrong letters
- [ ] reject 2 maps in one map
- [x] a valid path leading to all collectible and the exit ✅ 2023-01-14

## MLX

- [ ] display window 
- [ ] get sprites
- [ ] display sprites
- [ ] key event to move the character
	W    : up
	S     : down
	A     : left
	D     : right
	- [ ] ESC : quit the program
	- [ ] "x"   : quit the program (mouse click on cross)
- [ ] display number of movements in the shell
- [ ] destroy image when Exit or ESC or click on cross
