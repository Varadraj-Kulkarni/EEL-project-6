#include <stdio.h>
#include <stdbool.h>


struct user_info {
    char name[50];
    int ph_no;
    int fav_genre;
    
    
};


int main() {
    int i, j, k, l=0, menu, mov_ser, specific, specific_genre, target;
    struct user_info user[20];
    
    char movies[10][7][150] = {
        // Action
        {"Die Hard (1988)", "Mad Max: Fury Road (2015)", "John Wick (2014)", "The Dark Knight (2008)", "Gladiator (2000)", "Terminator 2: Judgment Day (1991)", "The Raid: Redemption (2011)"},
        // Adventure
        {"Indiana Jones: Raiders of the Lost Ark (1981)", "Pirates of the Caribbean: The Curse of the Black Pearl (2003)", "Jurassic Park (1993)", "The Revenant (2015)", "Life of Pi (2012)", "The Mummy (1999)", "The Lord of the Rings: The Fellowship of the Ring (2001)"},
        // Comedy
        {"Superbad (2007)", "The Hangover (2009)", "Monty Python and the Holy Grail (1975)", "Groundhog Day (1993)", "Step Brothers (2008)", "Anchorman (2004)", "Bridesmaids (2011)"},
        // Drama
        {"The Shawshank Redemption (1994)", "Forrest Gump (1994)", "The Godfather (1972)", "Fight Club (1999)", "12 Years a Slave (2013)", "The Green Mile (1999)", "Whiplash (2014)"},
        // Horror
        {"The Exorcist (1973)", "Hereditary (2018)", "The Conjuring (2013)", "A Nightmare on Elm Street (1984)", "Get Out (2017)", "The Shining (1980)", "It (2017)"},
        // Thriller
        {"Se7en (1995)", "Gone Girl (2014)", "The Silence of the Lambs (1991)", "Heat (1995)", "Nightcrawler (2014)", "Shutter Island (2010)", "No Country for Old Men (2007)"},
        // Mystery
        {"Knives Out (2019)", "Prisoners (2013)", "The Girl with the Dragon Tattoo (2011)", "Zodiac (2007)", "Memento (2000)", "Chinatown (1974)", "The Prestige (2006)"},
        // Romance
        {"The Notebook (2004)", "La La Land (2016)", "Pride & Prejudice (2005)", "Titanic (1997)", "Call Me by Your Name (2017)", "A Walk to Remember (2002)", "Before Sunrise (1995)"},
        // Sci-Fi
        {"Interstellar (2014)", "Inception (2010)", "The Matrix (1999)", "Blade Runner 2049 (2017)", "Star Wars: Episode V – The Empire Strikes Back (1980)", "Arrival (2016)", "Alien (1979)"},
        // Fantasy
        {"The Lord of the Rings: The Return of the King (2003)", "Harry Potter and the Prisoner of Azkaban (2004)", "Pan's Labyrinth (2006)", "Spirited Away (2001)", "The Chronicles of Narnia: The Lion, the Witch and the Wardrobe (2005)", "The Hobbit: An Unexpected Journey (2012)", "The Shape of Water (2017)"},
    };
    
    
    char series[10][7][150] = {
        // Action
        {"24 (2001)", "Arrow (2012)", "Daredevil (2015)", "The Boys (2019)", "Jack Ryan (2018)", "The Witcher (2019)", "Vikings (2013)"},
        // Adventure
        {"Game of Thrones (2011)", "Stranger Things (2016)", "Lost (2004)", "The Mandalorian (2019)", "The Walking Dead (2010)", "Arrow (2012)", "Once Upon a Time (2011)"},
        // Comedy
        {"Friends (1994)", "The Office (US) (2005)", "Parks and Recreation (2009)", "Brooklyn Nine-Nine (2013)", "How I Met Your Mother (2005)", "Arrested Development (2003)", "The Big Bang Theory (2007)"},
        // Drama
        {"Breaking Bad (2008)", "The Crown (2016)", "Mad Men (2007)", "Better Call Saul (2015)", "The Sopranos (1999)", "The Wire (2002)", "This Is Us (2016)"},
        // Horror
        {"American Horror Story (2011)", "The Haunting of Hill House (2018)", "Penny Dreadful (2014)", "Stranger Things (2016)", "Bates Motel (2013)", "Castle Rock (2018)", "Hannibal (2013)"},
        // Thriller
        {"Mindhunter (2017)", "You (2018)", "True Detective (2014)", "Bodyguard (2018)", "Sherlock (2010)", "Ozark (2017)", "The Night Of (2016)"},
        // Mystery
        {"Sherlock (2010)", "Twin Peaks (1990)", "Broadchurch (2013)", "Dark (2017)", "The Undoing (2020)", "Veronica Mars (2004)", "Mare of Easttown (2021)"},
        // Romance
        {"Outlander (2014)", "Bridgerton (2020)", "Grey's Anatomy (2005)", "The Vampire Diaries (2009)", "Normal People (2020)", "Jane the Virgin (2014)", "Sex and the City (1998)"},
        // Sci-Fi
        {"Stranger Things (2016)", "The Expanse (2015)", "Doctor Who (2005)", "Westworld (2016)", "Battlestar Galactica (2004)", "Black Mirror (2011)", "Stargate SG-1 (1997)"},
        // Fantasy
        {"Game of Thrones (2011)", "The Witcher (2019)", "His Dark Materials (2019)", "Shadow and Bone (2021)", "Merlin (2008)", "Once Upon a Time (2011)", "Chilling Adventures of Sabrina (2018)"}
    };
    
    while (true){
        printf("Welcome to Bingeflix!!\n\nChoose below option to begin:\n1.Register (New user)\n2.Login :");
        scanf("%d", &menu);
        
        if (menu==1){
            printf("\nPlease enter your name: ");
            scanf("%s", user[l].name);
        
            printf("Please enter your phone number: ");
            scanf("%d", &user[l].ph_no);
            printf("Please choose your most favorite genre:\n1.Action\n2.Adventure\n3.Comedy\n4.Drama\n5.Horror\n6.Thriller\n7.Mystery\n8.Romance\n9.Sci-Fi (Science Fiction)\n10.Fantasy\n:");
            scanf("%d", &user[l].fav_genre);
            user[l].fav_genre--;
            printf("\nThank you! Your registration is completed.\n");
            l++;
            
        }
        else if(menu==2){
            break;
        }
        else{
            printf("ERROR! Please enter a valid choice and try again.");
            return 0;
        }
    }
    
    //LOGIN:
    printf("\n\nPlease Login:\nEnter your phone number: ");
    scanf("%d", &target);
    int index=-1;
    for (int k = 0; k < l; k++) {
        if (user[k].ph_no == target) {
            index = k;
            break;
        }
    }
    
    if (index != -1) {
        printf("\n\nWhat do you want to watch; 1.movies 2.series? ");
        scanf("%d", &mov_ser);
        if (mov_ser==1){
            printf("\nRecommended movies for %s: \n\n", user[index].name);
            for (i=0;i<7;i++){
                printf("%s", movies[user[index].fav_genre][i]);
                printf("\n");
        }
        }
        else if(mov_ser==2){
            printf("Recommended series for %s: \n\n", user[index].name);
            for (i=0;i<7;i++){
                printf("%s", series[user[index].fav_genre][i]);
                printf("\n");
        }
        }
        printf("\nDo you want recommendations based on specific genre?\n1.yes  2.no : ");
        scanf("%d", &specific);
        if (specific==1){
            printf("Please choose genre:\n1.Action\n2.Adventure\n3.Comedy\n4.Drama\n5.Horror\n6.Thriller\n7.Mystery\n8.Romance\n9.Sci-Fi (Science Fiction)\n10.Fantasy\n:");
            scanf("%d", &specific_genre);
            specific_genre--;
            if (mov_ser==1){
                printf("\nMovies matching your selected genre: \n\n");
                for (i=0;i<7;i++){
                    printf("%s", movies[specific_genre][i]);
                    printf("\n");
            }
            }
            else if(mov_ser==2){
                printf("Series matching your selected genre: \n\n");
                for (i=0;i<7;i++){
                    printf("%s", series[specific_genre][i]);
                    printf("\n");
            }
            }
        }
        else{
            return 0;
        }    
    } else {
        printf("User not found.\n");
    }

    return 0;
}
