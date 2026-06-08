#include <stdio.h>

void behind(int *scores, int num_players);

int main() {
    int num_players;
    
    printf("Enter the number of players (maximum 10): ");
    scanf("%d", &num_players);
    if (num_players < 1 || num_players > 10) {
        printf("Invalid number of players. Exiting...\n");
        return 1;
    }

    int scores[10];
    printf("Enter the scores of each player:\n");
    for (int i = 0; i < num_players; i++) {
        printf("Player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    behind(scores, num_players);

    printf("\nPoints behind the leader:\n");
    for (int i = 0; i < num_players; i++) {
        printf("Player %d: %d\n", i + 1, scores[i]);
    }
    
    return 0;
}


void behind(int *scores, int num_players) {
    // Find the highest score
    int max_score = scores[0];
    
    for (int i = 1; i < num_players; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }

    // Calculate points behind for each player
    for (int i = 0; i < num_players; i++) {
        scores[i] = max_score - scores[i];
    }
}