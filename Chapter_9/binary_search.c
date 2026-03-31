#include <stdio.h>
#include <stdbool.h>

struct entry {
    char word[15];
    char definition[100];
};

int compareStrings(const char s1[], const char s2[])
{
    int i = 0, answer;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    
    if(s1[i] < s2[i])
        answer = -1;
    else if(s1[i] == s2[i])
        answer = 0;
    else
        answer = 1;

    return answer;
}

int lookup(const struct entry dictionary[], const char serach[], const int entries)
{
    int low = 0;
    int high = entries - 1;
    int mid, result;
    int compareStrings(const char s1[], const char s2[]);

    while(low <= high)
    {
        mid = (low + high) / 2;
        result = compareStrings(dictionary[mid].word, serach);

        if(result == -1)
            low = mid + 1;
        else if(result == 1)
            high = mid - 1;
        else
            return mid;
    }

    return -1;
}

int main(void)
{
   const struct entry dictionary[106] =
    {{"aardvark", "a burrowing African mammal with a long snout"},
    {"abandon", "to leave completely behind"},
    {"ability", "the power or skill to do something"},
    {"abroad", "in or to a foreign country"},
    {"absorb", "to take in or soak up"},
    {"abstract", "existing as an idea rather than a physical object"},
    {"accent", "a way of pronouncing words"},
    {"accept", "to receive willingly"},
    {"accident", "an unexpected event that happens by chance"},
    {"accompany", "to go somewhere with someone"},
    {"accurate", "correct and free from mistakes"},
    {"achieve", "to successfully reach a goal"},
    {"acorn", "the nut of an oak tree"},
    {"acquire", "to get or obtain something"},
    {"adapt", "to change in order to fit new conditions"},
    {"addition", "the process of adding something"},
    {"address", "the details of where someone lives or a speech to an audience"},
    {"adjust", "to change something slightly to improve it"},
    {"admire", "to respect or like greatly"},
    {"admit", "to confess or allow entry"},
    {"adopt", "to take and use as ones own"},
    {"advance", "to move forward"},
    {"adventure", "an unusual and exciting experience"},
    {"advice", "guidance or recommendations about what to do"},
    {"affect", "to influence something"},
    {"afraid", "feeling fear"},
    {"agency", "an organization that provides a service"},
    {"agile", "able to move quickly and easily"},
    {"agree", "to have the same opinion"},
    {"air", "the invisible mixture of gases we breathe"},
    {"alarm", "a warning signal"},
    {"album", "a collection of recordings or pictures"},
    {"alert", "watchful and quick to notice danger"},
    {"alike", "similar to each other"},
    {"alive", "living and not dead"},
    {"allow", "to permit"},
    {"almost", "very nearly"},
    {"alphabet", "a set of letters used in writing"},
    {"already", "before now or before the expected time"},
    {"also", "in addition"},
    {"alter", "to change"},
    {"amateur", "a person who is not a professional"},
    {"amazing", "very surprising or impressive"},
    {"ancient", "very old"},
    {"angel", "a spiritual being often shown with wings"},
    {"animal", "a living creature that is not a plant"},
    {"answer", "a reply to a question"},
    {"anxious", "worried or nervous"},
    {"apology", "an expression of regret"},
    {"appear", "to come into sight"},
    {"apple", "a round fruit with red, green, or yellow skin"},
    {"apply", "to make use of or formally request"},
    {"appoint", "to choose someone for a job or position"},
    {"approve", "to officially agree to or accept"},
    {"arch", "a curved structure over an opening"},
    {"argue", "to speak with disagreement"},
    {"arise", "to come into being or notice"},
    {"armor", "protective covering worn in battle"},
    {"arrange", "to put in order"},
    {"arrive", "to reach a place"},
    {"artist", "a person who creates art"},
    {"ascend", "to go up"},
    {"ash", "the powder left after something burns"},
    {"aspect", "one part or feature of something"},
    {"assemble", "to gather together or put together"},
    {"assist", "to help"},
    {"assume", "to accept as true without proof"},
    {"astonish", "to surprise greatly"},
    {"athlete", "a person trained in sports"},
    {"atom", "the smallest unit of an element"},
    {"attach", "to fasten or join"},
    {"attack", "to act violently against"},
    {"attempt", "an effort to do something"},
    {"attend", "to be present at"},
    {"august", "majestic and impressive or the eighth month"},
    {"author", "a person who writes books or other works"},
    {"autumn", "the season between summer and winter"},
    {"available", "ready to be used"},
    {"average", "the usual level or the arithmetic mean"},
    {"avoid", "to keep away from"},
    {"awake", "not asleep"},
    {"award", "a prize or honor"},
    {"aware", "having knowledge of something"},
    {"awkward", "difficult to handle or socially uncomfortable"},
    {"balance", "a state of equal weight or stability"},
    {"balloon", "a rubber bag filled with air or gas"},
    {"banana", "a long curved yellow fruit"},
    {"barrier", "something that blocks movement"},
    {"basic", "simple and most important"},
    {"battery", "a device that stores electrical energy"},
    {"battle", "a fight between armed forces"},
    {"beacon", "a signal light or guiding mark"},
    {"beast", "a large or wild animal"},
    {"beauty", "the quality of being pleasing or attractive"},
    {"because", "for the reason that"},
    {"become", "to begin to be"},
    {"before", "earlier than"},
    {"behave", "to act in a particular way"},
    {"belief", "something accepted as true"},
    {"belong", "to be the property of or fit in"},
    {"beneath", "under or below"},
    {"benefit", "an advantage or helpful effect"},
    {"berry", "a small juicy fruit"},
    {"beyond", "farther than"},
    {"bicycle", "a vehicle with two wheels powered by pedals"},
    {"bitter", "having a sharp unpleasant taste"}
    };

    char word[15];
    int entries = 106;
    int entry;
    int lookup(const struct entry dictionary[], const char search[], const int entries);

    printf("Enter word: ");
    scanf("%14s", word);
    entry = lookup(dictionary, word, entries);

    if(entry != -1)
        printf("%s\n", dictionary[entry].definition);
    else
        printf("Sorry, the word %s is not in my dictionary. \n", word);

    return 0;
}