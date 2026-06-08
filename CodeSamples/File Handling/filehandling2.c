#include <stdio.h>
#include <string.h>

typedef struct {
    char Name[50];
    char Animal[50];
    int Age;
}Pet;

int main(){
    FILE *Destination = fopen("storage.txt", "a+"); // w a r w+ a+
    Pet pet1;
    char buffer[100];

    printf("Enter Pet Name: ");
    fgets(pet1.Name, sizeof(pet1.Name), stdin);
    pet1.Name[strcspn(pet1.Name, "\n")] = '\0';

    printf("Enter Type of Animal: ");
    fgets(pet1.Animal, sizeof(pet1.Animal), stdin);
    pet1.Animal[strcspn(pet1.Animal, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &pet1.Age);


    if (Destination != NULL)
    {

        fprintf(Destination, "Pet Name: %s\n", pet1.Name);
        fprintf(Destination, "Animal: %s\n", pet1.Animal);
        fprintf(Destination, "Age: %d\n", pet1.Age);

        rewind(Destination);

        while(fgets(buffer, sizeof(buffer), Destination)){
            printf("%s", buffer);
        }

        fclose(Destination);

    } else {
        printf("\nWas not able to read the file.\n");
    }



    return 0;
}