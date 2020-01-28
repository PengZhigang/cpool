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
            print_str_end(x, y, i, j);
        }
        my_putchar('\n');
    }
}

void print_str_end(int x, int y, int i, int j)
{
    if ( x == 1 || y == 1)
        my_putchar('B');
    else if (i == 0 || i == y - 1){
        if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1)){
            my_putchar('A');
        }
        else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0)){
            my_putchar('C');
        }
        else{
            my_putchar('B');
        }
    }
    else{
        if (j == 0 || j == x - 1){
            my_putchar('B');
        }
        else
            my_putchar(' ');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0){
        write(2, "Invalid size", 12);
        write(2, "\n", 1);
    }
    else {
        loop(x, y);
    }
}