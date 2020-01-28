/*
** EPITECH PROJECT, 2019
** rush
** File description:
** rush1
*/

void rush(int x, int y);

void print_str_end(int x, int y, int i, int j);

void loop(int x, int y);

void loop(int x, int y)
{
    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            print_str_end(y, x, i, j);
        }
        my_putchar('\n');
    }
}

void print_str_end(int x, int y, int i, int j)
{
    if (i == 0 || i == x - 1){
        if (j == 0 || j == y - 1){
            my_putchar('o');
        }
        else
            my_putchar('-');
    }
    else{
        if (j == 0 || j == y - 1){
            my_putchar('|');
        }
        else {
            my_putchar(' ');
        }
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0){
        write(2, "Invalid size", 12);
        write(2, "\n", 1);
    }
    else{
        loop(x, y);
    }
}