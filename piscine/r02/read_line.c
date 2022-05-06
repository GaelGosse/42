#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void    read_line(int fd, char **key, char **value)
{
  char  c;
  int   i;

  *key = malloc(sizeof(char) * 1024);
  *value = malloc(sizeof(char) * 1024);
  i = 0;
  while (read(fd, &c, 1) != '\n' && c whitespace)

    /!\ attention on va depasser
  while (read(fd, &c, 1) != '\n' && '0' <= c && c <= '9')
  {
     (*key)[i] = c;
     i++;
  }
  (*key)[i] = 0;
  while (read(fd, &c, 1) != '\n')
  {
    if ('a' <= c && c <= 'z')
    {
      (*value)[0] = c;
      break;
    }
  }
  i = 1;
  while (read(fd, &c, 1) != '\n' && 'a' <= c && c <= 'z')
  {
    (*value)[i] = c;
    i++;
  }
  (*value)[i] = 0;
}

int main()
{
  int    fd;
  char  *key;
  char  *value;

  fd = open("numbers.dict", O_RDONLY);
  if (fd == -1)
  {
    write(1, "Error", 5);
    return (0);
  }
  read_line(fd, &key, &value);
  return (0);
}

