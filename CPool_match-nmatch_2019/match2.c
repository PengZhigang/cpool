/*
** EPITECH PROJECT, 2019
** match-nmatch
** File description:
** compare
*/

typedef struct pile
{
    int a[1000][2];
    int top;
} Pile;

void push(Pile *p, int i, int j)
{
    p->a[p->top][0] = i;
    p->a[p->top][1] = j;
    p->top++;
}

void pop(Pile *p, int *i, int *j)
{
    if (p->top == 0){
        return;
    }
    else{
        p->top--;
        *i = p->a[p->top][0];
        *j = p->a[p->top][1];
    }
}

int get_len(char const *str)
{
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

int match2(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int res = 0;
    Pile p;
    p.top = 0;
    while (i < get_len(s1) || p.top > 0){
        while (j < get_len(s2)){
            if (i > get_len(s1))
                i = get_len(s1);
            if (s1[i] == s2[j]){
                i++;
                j++;
            }
            if (s1[i] != s2[j] && s2[j] != '*')
                break;
            if (s1[i] == '\0' && s2[j] == '*'){
                j++;
            }
            if (s1[i] != '\0' && s2[j] == '*')
                push(&p, i, j);
            if (s1[i] == s2[j] && s2[j] == '\0'){
                res++;
            }
            i++;
        }
        if (p.top > 0){
            pop(&p , &i , &j);
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    // if (res > 0)
    //     return 1;
    // else
    //     return 0;
    return res;
}