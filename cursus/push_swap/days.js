'use strict'

function zero(time) {
	if (typeof time == "number")
	{
		if (time < 10) 
		{
			time = `0${time}`;
		}
		return time;
	}
	else
	{
		console.log(`${time} is not a number`);
	}
}


function dayschange(days, sign) {
	let stamp = Date.now();
	
	// first date
	stamp -= (1000*60*60*24*0)
	let stampdate = new Date(stamp);
	console.log(`${zero(stampdate.getDate())} / ${zero(stampdate.getMonth()+1)} / ${zero(stampdate.getFullYear())}`);
	
	if (sign == "+") 
	{
		stamp += (1000*60*60*24*days)
		stampdate = new Date(stamp);
	}
	else
	{
		stamp -= (1000*60*60*24*days)
		stampdate = new Date(stamp);
	}

	// date wanted
	console.log(`${zero(stampdate.getDate())} / ${zero(stampdate.getMonth()+1)} / ${zero(stampdate.getFullYear())}`);
}

dayschange(21, "+");