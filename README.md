```c
#include "person.h"

int main() {
    const char* languages[] = {"C#", "Python", "C"};
    const char* projects[] = {
        "MapDownloader",
        "osu-rpc", 
        "MineStorage",
        "badapple",
        "BadAppleMinecraft"
    };
    const char* hobbies[] = {
        "Coding",
        "Playing osu!",
        "Listening to music"
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
            .instagram = "salihefee727",
            .github = "salihefee",
            .reddit = "salihefee727",
            .lastfm = "https://www.last.fm/user/pthreadgc2",
            .email = "mail@salihefee.com.tr",
            .website = "https://salihefee.com.tr"
        }
    };

    return 0;
}
```
