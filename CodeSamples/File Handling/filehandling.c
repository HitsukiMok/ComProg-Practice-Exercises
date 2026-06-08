#include <stdio.h>
#include <string.h>

typedef struct {
    char Name[50];
    char Animal[50];
    int Age;
}Pet;

int main(){
    FILE *filename = fopen("testing.txt", "a+");

    Pet pet1[2];

    int i = 0;
    while(fscanf(filename, "Pet Name: %[^\n]\n", pet1[i].Name) == 1){
        fscanf(filename, "Animal: %[^\n]\n", pet1[i].Animal);
        fscanf(filename, "Age: %d\n", &pet1[i].Age);
        i++;
    }

    rewind(filename);

    for (int i = 0; i < 2; i++)
    {

        printf("Pet name: %s\n", pet1[i].Name);
        printf("Animal: %s\n", pet1[i].Animal);
        printf("Age: %d\n", pet1[i].Age);

    }

    fclose(filename);

    return 0;

}