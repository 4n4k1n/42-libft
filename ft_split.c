#include <stdio.h>
#include <stdlib.h>

int word_start(char *str, int index)
{
    while (str[index] != '\0' && (str[index] == ' ' || str[index] == '\t' || str[index] == '\n'))
        index++;
    if (str[index] == '\0')
        return (-1);
    return (index);
}

int word_end(char *str, int index)
{
    while (str[index] != '\0' && str[index] != ' ' && str[index] != '\t' && str[index] != '\n')
        index++;
    return (index);
}

char **expand_matrix(char **matrix, int size)
{
    char **matrix_new;
    int i;

    matrix_new = (char **)malloc(sizeof(char *) * size);
    if (!matrix_new)
        return (NULL);
    i = 0;
    while (i < size - 1)
    {
        matrix_new[i] = matrix[i];
        i++;
    }
    free(matrix);
    return (matrix_new);
}

char *fill_arr(char *str, int index)
{
    int len;
    int i;
    char *arr;

    len = 0;
    while (str[index + len] != '\0' && str[index + len] != ' ' && str[index + len] != '\t' && str[index + len] != '\n')
        len++;
    arr = (char *)malloc(sizeof(char) * (len + 1));
    if (!arr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        arr[i] = str[index + i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

char **ft_split(char *str, char *charset)
{
    int index;
    char **matrix;
    int word_count;

    word_count = 0;
    index = 0;
    matrix = NULL;
    while (index != -1)
    {
        index = word_start(str, index);
        if (index != -1)
        {
            word_count++;
            matrix = expand_matrix(matrix, word_count);
            if (!matrix)
                return (NULL);
            matrix[word_count - 1] = fill_arr(str, index);
            if (!matrix[word_count - 1])
                return (NULL);
            index = word_end(str, index);
        }
    }
    matrix = expand_matrix(matrix, word_count + 1);
    if (!matrix)
        return (NULL);
    matrix[word_count] = NULL;
    return (matrix);
}

int main(void)
{
    char **arr;
    int i;

    arr = ft_split("hello this is a test :).", " ");
    if (!arr)
        return (0);
    i = 0;
    while (arr[i] != NULL)
    {
        printf("%s\n", arr[i]);
        free(arr[i]);
        i++;
    }
    free(arr);
    return (0);
}
