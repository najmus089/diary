
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "structure.h"
#include "addEntry.h"
#include "deleteEntry.h"
#include "loadEntriesFromFile.h"
#include "saveEntriesToFile.h"
#include "viewEntries.h"
#include "searchEntry.h"
#include "editEntry.h"


void main() {
    diary entries[100];
    int choice;
    int count = 0;
    const char* filename = "diary_entries.txt";

    loadEntriesFromFile(entries, &count, filename);

    while (1) {
        printf("\n--- Diary Management System ---\n");
        printf("1. Add Entry\n");
        printf("2. View Entries\n");
        printf("3. Search Entry\n");
        printf("4. Edit Entry\n");
        printf("5. Delete Entry\n");
        printf("6. Save and Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid choice. Please try again.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        switch (choice) {
            case 1:
                addEntry(entries, &count);
                break;
            case 2:
                viewEntries(entries, count);
                break;
            case 3:
                searchEntry(entries, count);
                break;
            case 4:
                editEntry(entries, count);
                break;
            case 5:
                deleteEntry(entries, &count);
                break;
            case 6:
                saveEntriesToFile(entries, count, filename);
                exit(0);
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
}
