```c
#include "person.h"

int main() {
    char* name = "Salih Efe Ergür";
    int age = 17;
    char* occupation = "Student";
    char* location = "Turkey";
    char* languages[] = { "C#", "Python", "C" };
    char* projects[] = { "MapDownloader", "osu-rpc", "MineStorage", "badapple", "BadAppleMinecraft" };
    char* hobbies[] = { "Coding", "Playing osu!", "Listening to music" };
    
    Socials socials = {
        .discord = "salihefee",
        .instagram = "salihefee727",
        .github = "salihefee",
        .reddit = "salihefee727",
        .lastfm = "https://www.last.fm/user/pthreadgc2",
        .email = "mail@salihefee.com.tr",
        .website = "https://salihefee.com.tr",
    };

    Person salihefee = createPerson(name, age, occupation, location, languages, socials, projects, hobbies);
}
```
