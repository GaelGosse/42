# Little setup for shell

## intro

bash: is an interpreter of line command 

zsh: is an extension to bash

## make shorter your commands

When your are at your home folder (type just "cd"), you have some hidden files

(Remind to see them: ls -a)

there are some hidden files that can help you to custom/setup your shell

if you are using **zsh**:

*.zshrc* : this is the file where you can write alias and function (as describe below)

if you are using **bash**:

*.bashrc* : this is the file where you can write alias and function (as describe below)

*.bash_profile* : where .bashrc is called to be available

### alias

you can write in the .bashrc / .zshrc alias.

An alias is a command that makes multiple commands shorter to write

*example:*

the shortcut command : **gcw**='gcc -Wall -Wextra -Werror'
commands that are called when you type the shortcut : gcw=**'gcc -Wall -Wextra -Werror'**

### function

Like alias, function can help you write less commands and save time.

It's a similar syntax to a lot language, you can just declare "function" follow by her name and the parenthesis

*example:*

function poush()
{
    git add.
    git commit -m **$1**
    git push
}

*when you call poush:* poush first_commit

$1 is a parameter, you don't have to specified them in the parenthesis.

It could be used in this case, to write the name of the commit.

As you see the first parameter's name is $1, it's the same if you want to use multiple parameter:

$2: for the second parameter

$3: for the third parameter

...


### extension for zsh's theme

*to get it:* sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"


Like shortcut.md, I hope it could be useful for some :)

