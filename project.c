#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CANDIDATES 10
#define FILENAME "election_results.txt"

typedef struct {
    int id;
    char name[50];
    char party[50];
    int votes;
} Candidate;

Candidate candidates[MAX_CANDIDATES];
int candidateCount = 0;

void addCandidate(int id, const char *name, const char *party) {
    if (candidateCount < MAX_CANDIDATES) {
        candidates[candidateCount].id = id;
        strncpy(candidates[candidateCount].name, name, sizeof(candidates[candidateCount].name) - 1);
        candidates[candidateCount].name[sizeof(candidates[candidateCount].name) - 1] = '\0'; // Ensure null-termination
        strncpy(candidates[candidateCount].party, party, sizeof(candidates[candidateCount].party) - 1);
        candidates[candidateCount].party[sizeof(candidates[candidateCount].party) - 1] = '\0'; // Ensure null-termination
        candidates[candidateCount].votes = 0;
        candidateCount++;
    } else {
        printf("Maximum candidate limit reached.\n");
    }
}

void castVote(int candidateId) {
    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].id == candidateId) {
            candidates[i].votes++;
            printf("Vote cast for %s\n", candidates[i].name);
            return;
        }
    }
    printf("Candidate not found.\n");
}

void displayResults() {
    printf("\nElection Results:\n");
    for (int i = 0; i < candidateCount; i++) {
        printf("Candidate: %s, Party: %s, Votes: %d\n", 
               candidates[i].name, candidates[i].party, candidates[i].votes);
    }
}

void declareWinner() {
    int maxVotes = -1;
    int winnerIndex = -1;
    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].votes > maxVotes) {
            maxVotes = candidates[i].votes;
            winnerIndex = i;
        }
    }
    if (winnerIndex != -1) {
        printf("Winner: %s from %s with %d votes\n", 
               candidates[winnerIndex].name, candidates[winnerIndex].party, maxVotes);
    } else {
        printf("No votes cast.\n");
    }
}

void saveResultsToFile() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    
    fprintf(file, "Election Results:\n");
    for (int i = 0; i < candidateCount; i++) {
        fprintf(file, "Candidate: %s, Party: %s, Votes: %d\n", 
                candidates[i].name, candidates[i].party, candidates[i].votes);
    }
    
    fclose(file);
    printf("Results saved to %s\n", FILENAME);
}

int main() {
    // Adding candidates
    addCandidate(1, "Alice", "Party A");
    addCandidate(2, "Bob", "Party B");
    addCandidate(3, "Charlie", "Party C");

    // Casting votes
    castVote(1);
    castVote(2);
    castVote(1);
    castVote(3);
    castVote(2);
    castVote(2);

    // Display results
    displayResults();
    declareWinner();

    // Save results to file
    saveResultsToFile();

    return 0;
}
