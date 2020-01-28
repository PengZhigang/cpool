/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** ssstrcpy
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++){
        if (s1[i] != s2[i]){
            res = s1[i] - s2[i];
            break;
        }
    }
    return res;
}