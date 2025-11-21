PROJECT 6

NAME: Varadraj Kulkarni
ROLL NO: 127 (PRN: B25CE1127)
CLASS: FY CE 2
BATCH: C

AIM: Develop a C program to search for the location or area of a person based on
their phone number in a telephone directory. The program should utilize an
array to store the phone numbers along with their corresponding locations
or areas. Upon receiving a specific phone number as input from the user, the
program should search the array and display the corresponding location or
area if the phone number is found. If the phone number is not found, the
program should output a message indicating that the number is not in the
directory. Additionally, the program should handle invalid input and provide
appropriate error messages.


RESEARCH:
Content recommendation systems are widely used across major entertainment platforms such as Netflix, Amazon Prime Video, and YouTube. These platforms rely on recommendation algorithms to increase engagement, personalize user experience, and improve viewer satisfaction.
Key ideas from real-world systems:
User Profiling (Netflix Technology Blog)


Platforms collect user details such as watch history, preferred genres, interactions, and ratings.
This allows systems to build a unique profile for each user.


Content Categorization (YouTube, IMDb)


Movies and series are classified into genres such as Action, Drama, Comedy, etc.
Genre-based recommendations allow platforms to quickly match user preferences.


Personalization Models (Amazon Personalize / Netflix Research)


Collaborative Filtering → Uses behavior of similar users.
Content-Based Filtering → Matches user preferences to item attributes.
Hybrid Models → Combine both for stronger recommendations.


User Authentication and Identification (General systems like Spotify, Netflix)
Login credentials like email, phone number, or user ID help load previous preferences and recommendations.

PROJECT: Personalized content recommendation System

ANALYSIS:
To simulate a personalized recommendation model in C, the following components were analyzed and defined:
User Data Structure
Name
Phone Number (used for identification)
Favorite Genre (stored as index in 10-genre list)


Content Arrays
10 genres × 7 titles each for movies
10 genres × 7 titles each for series


Recommendation Flow
Register multiple users
Login using phone number
Check if user exists
Display recommended movies or series based on the saved favorite genre
Optionally display content from another genre chosen by the user


Control Structures Used:
Loops for listing content
If–else for menu choices
Structure arrays for storing multiple users
This system provides personalized suggestions and demonstrates how entertainment platforms map user data to curated content lists.
IDEATE:
During planning, several variations were considered:
Employee database
 Inputs: Name, phone number
 Output: salary, projects and workload.


Students registration and records.
Input full student data
Fetch marks, address or achievements through it.
Gym membership track record
Input all details of person & track subscription, make personalized diet plans or training sessions.


Chosen Concept:
 Simple Genre-Based Personalized Content System
 Reason:
Fits well with beginner C programming
Uses arrays, structures, and conditional logic effectively
Easy for users to interact with
Demonstrates core logic behind recommendation systems

BUILD:
The program was developed in C using the following steps:
User Registration
Collect name, phone number, and favorite genre
Store in an array of struct user_info
Login System
Login using phone number
Search in user array to find match
Recommendation Engine
If user selects movies → display movies from favorite genre
If user selects series → display series from favorite genre
Optional: Choose another genre to get additional recommendations
Genre List
Content Storage
10×7 multi-dimensional arrays for movies and series

TESTING:


Output-
Welcome to Bingeflix!!

Choose below option to begin:
1.Register (New user)
2.Login :1

Please enter your name: varad
Please enter your phone number: 12345
Please choose your most favorite genre:
1.Action
2.Adventure
3.Comedy
4.Drama
5.Horror
6.Thriller
7.Mystery
8.Romance
9.Sci-Fi (Science Fiction)
10.Fantasy
:5

Thank you! Your registration is completed.
Welcome to Bingeflix!!

Choose below option to begin:
1.Register (New user)
2.Login :1

Please enter your name: parth
Please enter your phone number: 23456
Please choose your most favorite genre:
1.Action
2.Adventure
3.Comedy
4.Drama
5.Horror
6.Thriller
7.Mystery
8.Romance
9.Sci-Fi (Science Fiction)
10.Fantasy
:10

Thank you! Your registration is completed.
Welcome to Bingeflix!!

Choose below option to begin:
1.Register (New user)
2.Login :2


Please Login:
Enter your phone number: 23456


What do you want to watch; 1.movies 2.series? 1

Recommended movies for parth: 

The Lord of the Rings: The Return of the King (2003)
Harry Potter and the Prisoner of Azkaban (2004)
Pan's Labyrinth (2006)
Spirited Away (2001)
The Chronicles of Narnia: The Lion, the Witch and the Wardrobe (2005)
The Hobbit: An Unexpected Journey (2012)
The Shape of Water (2017)

Do you want recommendations based on specific genre?
1.yes  2.no : 2

IMPLIMENTATION:
Github link:  

CONCLUSION:
This project successfully demonstrates how a Personalized Content Recommendation System can be created using C. By using structures, loops, and arrays, the system collects user information, identifies users through their phone number, and recommends movies or series based on their favorite genre.
The project reflects how large streaming platforms create simple content-based recommendation platforms. Although basic, it captures essential concepts such as user profiling, genre categorization, menu-driven navigation, and personalized output. 

 SOURCES:
Netflix Technology Blog – Personalization & Recommendation System
IMDb – Genre Classification & Movie/Series Data
YouTube Official Blog – How Recommendations Work
GeeksforGeeks – Structures, Arrays & Control Statements in C
Let us c - Yash Kanetkar

