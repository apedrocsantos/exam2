  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void fill(char **tab, t_point size, t_point pos, char c)
{
    if (pos.y < 0 || pos.y >= size.y || pos.x < 0 || pos.x >= size.x || tab[pos.y][pos.x] != c)
        return;
    tab[pos.y][pos.x] = 'F';
    fill(tab, size, (t_point){pos.x - 1, pos.y}, c);
    fill(tab, size, (t_point){pos.x + 1, pos.y}, c);
    fill(tab, size, (t_point){pos.x, pos.y + 1}, c);
    fill(tab, size, (t_point){pos.x, pos.y - 1}, c);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}