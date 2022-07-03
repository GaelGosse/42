# A voir

## JS
function isHidden(el) {
    return (el.offsetParent === null)
}
let err = document.querySelector('#frontendErrorOutput')
let interval = setInterval(()=>{
    let x = document.querySelector('#executeBtn')
    if (x && isHidden(x) == false)
    {
        if (x.textContent == "Visualize Execution" && err.textContent.indexOf('traffic') != -1)
            x.click()
    }
    else {
        clearInterval(interval);
        console.clear();
    }
}, 1000)

## kill task that use too much  Memory/CPU
shell task
ps -aux | sort -nk +4 | tail -n 10
ps aux --sort -rss | head


void    print_array(char    **arr)
{
    int    i;

    i = 0;
    while (arr[i])
    {
        printf("arr[%i]: %s \n", i, arr[i]);
        i++;
    }
}

## Aim error(s) in the norm
 norm | grep -v -i space | grep -v -i empty | grep -v -i brace | grep -v -i include | grep -v -i few | grep -v -i misaligned | grep -v -i consecutive | grep -v -i wrong | grep -v -i ok | grep -i -v vars | grep -v -i decl | grep -v -i long 

 bashrc quit with push kill chrome && code

## Define specific variable (MACRO - Pre Processing)
\# define INT_MAX 0x7fffffff
\# define INT_MIN (-(INT_MAX + 1))

\# define NULL (void *)0;

## get hours in intra
org_date = document.querySelector('#bh-date').textContent.split('/')
org_date = new Date(org_date[2], parseInt(org_date[1]) - 1, org_date[0], 23, 59, 0, 0)
time = document.createElement('p')
document.querySelector('#bh-date').innerHTML = '';
document.querySelector('#bh-date').append(time)
interval = setInterval(()=>{
	now = new Date()
	diff = org_date.getTime() - now.getTime()

	diff /= 1000
	sec = Math.floor(diff) % 60
	sec < 10 ? sec = `0${sec}` : sec

	diff /= 60
	min = Math.floor(diff) % 60
	min < 10 ? min = `0${min}` : min

	diff /= 60
	hrs = Math.floor(diff) % 60
	hrs < 10 ? hrs = `0${hrs}` : hrs

	diff /= 24
	days = Math.floor(diff)
	time.innerHTML = `${days} days ${hrs} h ${min} min <span id="changing">${sec}</span> sec`
}, 1000)
cssAnimation = document.createElement('style');
cssAnimation.type = 'text/css';
rules = document.createTextNode(`
@keyframes fadein {
  from {
		transform: scale(1.2);
  }
  to {
		transform: scale(0.8);
  }
}
#changing{
	display: inline-block;
	animation: 1s fadei infinite;
}`);
cssAnimation.appendChild(rules);
document.getElementsByTagName("head")[0].appendChild(cssAnimation);

## JS block ad / prevent open new tab "beforeunload"
https://levelup.gitconnected.com/building-your-own-adblocker-in-literally-10-minutes-1eec093b04cd