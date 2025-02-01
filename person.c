#include "person.h"
#include <stdio.h>

void print_string_array(const char** arr, const char* label) {
    printf("%s: ", label);
    for (int i = 0; arr[i] != NULL; i++) {
        printf("%s%s", i == 0 ? "" : ", ", arr[i]);
    }
    printf("\n");
}

void print_person(const Person* person) {
    printf("Hi, I'm %s\n", person->name);
    printf("Age: %d\n", person->age);
    printf("Occupation: %s\n", person->occupation);
    printf("Location: %s\n", person->location);
    
    print_string_array(person->languages, "Languages");
    print_string_array(person->projects, "Projects");
    print_string_array(person->hobbies, "Hobbies");
    
    printf("\nSocials:\n");
    printf("Discord: %s\n", person->socials.discord);
    printf("GitHub: %s\n", person->socials.github);
    printf("Reddit: %s\n", person->socials.reddit);
    printf("Last.fm: %s\n", person->socials.lastfm);
    printf("Email: %s\n", person->socials.email);
    printf("Website: %s\n", person->socials.website);
}

