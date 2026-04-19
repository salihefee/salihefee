#include "person.h"

#include <stdio.h>

int main() {
    const char* languages[] = {"C#", "Python", "C", NULL};
    const char* projects[] = {
        "MapDownloader",
        "osu-rpc", 
        "MineStorage",
        "badapple",
        "BadAppleMinecraft",
        NULL
    };
    const char* hobbies[] = {
        "Coding",
        "Playing osu!",
        "Listening to music",
        NULL
    };

    Person salihefee = {
        .name = "Salih Efe Ergür",
        .age = 18,
        .occupation = "Student",
        .location = "Turkey",
        .languages = languages,
        .projects = projects,
        .hobbies = hobbies,
        .socials = {
            .discord = "salihefee",
            .github = "salihefee",
            .reddit = "salihefee727",
            .email = "email@salihefeergur.com.tr",
            .website = "https://salihefee.com.tr"
        }
    };

    print_person(&salihefee);
    return 0;
}
