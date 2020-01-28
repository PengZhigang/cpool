/*
** EPITECH PROJECT, 2019
** tree
** File description:
** description
*/

int get_last_line(int size);

int get_first_line(int size);

int get_first_line(int size)
{
    int res;
    int tmp = size / 2;
    if (size == 1)
        return 1;
    else {
        return res = get_last_line(size - 1) - tmp * 2;
    }
}

int get_last_line(int size)
{
    int res = 0;
    res = get_first_line(size) + (size + 3 - 1) * 2;
    return res;
}

void print_root(int size)
{
    int c = get_last_line(size) / 2 + 1 ;
    int nb_r = size;
    int nb_totle;
    if (size % 2 == 0){
        nb_r = size + 1;
    }
    nb_totle = nb_r / 2 + c;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < nb_totle; j++){
            if (j < (nb_totle - nb_r)){
                my_putchar(' ');
            }
            else{
                my_putchar('|');
            }
        }
        my_putchar('\n');
    }
}

void print_leaves(int size)
{
    int nb_c = get_last_line(size) / 2 + 1;
    int nb_l = 1;
    for (int i = 1; i <= size; i++){
        while (nb_l <= (i + 3)){
            for (int j = 0; j < nb_c; j++){
                if (j < nb_c - (get_first_line(i) + (nb_l - 1) * 2))
                    my_putchar(' ');
                else{
                    my_putchar('*');
                }
            }
            if (nb_l == (i + 3) && i % 2 == 0){
                nb_c = nb_c - i / 2;
            }
            else if (nb_l == (i + 3) && i % 2 == 1)
                nb_c = nb_c - i / 2 - 1;
            else
                nb_c++;
            nb_l++;
            my_putchar('\n');
        }
        nb_l = 1;
    }
}

void tree(int size)
{
    print_leaves(size);
    print_root(size);
}