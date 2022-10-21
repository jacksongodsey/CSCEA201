/******************************************
* Jackson Godsey
* Homework 1
* Program 5
* 9/21/22
* Description: This program simulates a game show. The player is given a choice of three doors.
* As the player is about to make a choice they are shown what is behind a door.
* The player then chooses to stay with their door or chose the remaining door so they can win the big prize.
* The outcome of this guess is then tracked twice. One for how many times they win when they stay out of a 1000, and another 1000 times where they chose the other door.
******************************************/

//Given the results of this program I would chose to switch doors. The wins from the switching option is on average 200 wins higher.

//including the stuff we need
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defining two functions which we will use later to determine if the person won or not
int didiwin_noswitch(void);
int didiwin_switch(void);

int main(void) {
    // declaring variables such as i for the for loops and result so we can track wether they won or not
    int i, result;
    int win_with_switch = 0;
    int win_with_no_switch = 0;

    //declaring the seed so we get truly random results
    srand((int)time(0));

    // this for loop runs the didiwin_noswitch function 1000 times. this function is documented later. it also increments the respective variable
    for (i = 0; i < 1001; i++) {
        result = didiwin_noswitch();
        if (result == 1) {
            win_with_no_switch += 1;
        }
    }

    // this for loop runs the didiwin_switch function 1000 times. this function is documented later. it also increments the respective variable
    for (i = 0; i < 1001; i++) {
        result = didiwin_switch();
        if (result == 1) {
            win_with_switch += 1;
        }
    }

    //print the results of the loops
    printf("If you stayed you won %d out of a 1000 times.\n", win_with_no_switch);
    printf("If you switched you won %d out of a 1000 times.\n", win_with_switch);

}

int didiwin_noswitch(void) {
    /*****************************************************************
    * Name: didiwin_noswitch
    * Description: This function creates the doors. Then it compares the player door value to the winning
    * door and determines wether or not the player won then it increments a value and returns that
    * so the main function can track a win or loss.
    * Inputs: there are no inputs.
    * Returned value: An integer being either a 1 or 0. A 1 represents a win and a 0 represents a loss
    * Preconditions: it will run on it's own just fine. i guess you could say it needs the main function to call it.
    *****************************************************************/

    //declaring some variables
    int i, winning_door, player_door, revealed_door;
    int final = 0;

    // calculates the winning and player doors.
    winning_door = rand() % 3;
    player_door = rand() % 3;
    //using a for loop here to determine the revealed door.
    //just increments i until it's a value between 0 and 2 that isnt the player or winning door.
    for (i = 0; i < 3; i++) {
        if (i != winning_door && i != player_door) {
            revealed_door = i;
        }
    }

    //determines if the player won.
    if (player_door == winning_door) {
        final += 1;
    }

    //returning the win or loss
    return final;
}

int didiwin_switch(void) {
    /*****************************************************************
    * Name: didiwin_switch
    * Description: This function creates the doors. After creating the doors it switches the player door to
    * a value that isn't itself or the revealed door. Representing the choice the player can make during
    * the traditional game show. Then it compares the player door value to the winning
    * door and determines wether or not the player won then it increments a value and returns that.
    * so the main function can track a win or loss.
    * Inputs: there are no inputs.
    * Returned value: An integer being either 1 or 0. A 1 represents a win and a 0 represents a loss
    * Preconditions: it will run on it's own just fine. i guess you could say it needs the main function to call it.
    *****************************************************************/

    //creating some variables.
    int i, winning_door, player_door, revealed_door;
    int final = 0;

    //creating the doors again as in the above function
    winning_door = rand() % 3;
    player_door = rand() % 3;
    for (i = 0; i < 3; i++) {
        if (i != winning_door && i != player_door) {
            revealed_door = i;
        }
    }

    //this for loop switches the player door to a value that isnt the revealed door or the player door representing the switch
    for (i = 0; i < 3; i++) {
        if (i != player_door && i != revealed_door) {
            player_door = i;
        }
    }

    //determing if this scenario is a win or not
    if (player_door == winning_door) {
        final += 1;
    }

    //return the result
    return final;
}
