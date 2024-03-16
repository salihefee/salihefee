#include "person.h"

Person createPerson(char* name, int age, char* occupation, char* location, char** languages, Socials socials, char** projects, char** hobbies) {
    Person person;
    person.name = name;
    person.age = age;
    person.occupation = occupation;
    person.location = location;
    person.languages = languages;
    person.socials = socials;
    person.projects = projects;
    person.hobbies = hobbies;
    return person;
}