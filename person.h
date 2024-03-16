typedef struct {
    char* discord;
    char* instagram;
    char* github;
    char* reddit;
    char* lastfm;
    char* email;
    char* website;
} Socials;

typedef struct {
    char* name;
    int age;
    char* occupation;
    char* location;
    char** languages;
    Socials socials;
    char** projects;
    char** hobbies;
} Person;


Person createPerson(char* name, int age, char* occupation, char* location, char** languages, Socials socials, char** projects, char** hobbies);