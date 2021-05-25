

#include "guitar.h"

void read_from_textfile(struct Guitar **guitar)
{
    FILE *file = fopen("guitar.txt", "r");
    if (file == NULL)
    {
        printf("can't open because: %s", strerror(errno));
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < QUANTITY_STRUCT; i++)
    {
        struct Guitar* temp = *(guitar + i);
        fscanf(file, "%u %s %u %u %u ", &(temp->pickup), (temp ->firm),  &(temp->strings.min_string_thickness), &(temp->strings.materials), &(temp ->guitar_size));
    }
    fclose(file);
}

void random_guitar_tunes(struct Guitar **guitar)
{
    for(int i = 0; i < QUANTITY_STRUCT; i++)
    {
        struct Guitar* temp = *(guitar + i);
        temp->guitar_tunes = rand() % 8 + 20;
    }

}

