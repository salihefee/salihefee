```c
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
        .age = 17,
        .occupation = "Student",
        .location = "Turkey",
        .languages = languages,
        .projects = projects,
        .hobbies = hobbies,
        .socials = {
            .discord = "salihefee",
            .instagram = "salihefee727", // i don't use it anymore
            .github = "salihefee",
            .reddit = "salihefee727",
            .lastfm = "https://www.last.fm/user/pthreadgc2",
            .email = "email@salihefeergur.com.tr",
            .website = "https://salihefeergur.com.tr"
        }
    };

    print_person(&salihefee);
    return 0;
}
```
