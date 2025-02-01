#ifndef PERSON_H
#define PERSON_H

typedef struct {
    const char* discord;
    const char* instagram;
    const char* github;
    const char* reddit;
    const char* lastfm;
    const char* email;
    const char* website;
} Socials;

typedef struct {
    const char* name;
    int age;
    const char* occupation;
    const char* location;
    const char** languages;
    Socials socials;
    const char** projects;
    const char** hobbies;
} Person;

#endif