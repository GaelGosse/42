'use strict'

const fs = require('fs')

let all_tab = []

for (let ite = 11111; ite < 55555; ite++) {
	let result = ite + ''
	let not_push = 0;

	result = result.split('')
	
	// ONLY 1 2 3 4 5
	result.forEach(nbr_only => {
		if (nbr_only == 0 || nbr_only > 5)
			not_push++
	});

	// REMOVE DUP
	for (let nbr_1 = 0; nbr_1 < result.length; nbr_1++) {
		for (let nbr_2 = 0; nbr_2 < result.length; nbr_2++) {
			if (nbr_1 != nbr_2)
			{
				if (result[nbr_1] == result[nbr_2]) 
					not_push++;
			}
		}
	}

	if (not_push == 0) 
		all_tab.push(result)
}



all_tab.forEach(element => {
	console.log(element.join(' '))
});

console.log(all_tab.length)