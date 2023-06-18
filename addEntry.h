void addEntry(struct DiaryEntry entries[], int *count) {
    struct DiaryEntry newEntry;
    printf("\nEnter the date (DD MM YYYY): ");
    if (scanf("%d %d %d", &newEntry.day, &newEntry.month, &newEntry.year) != 3) {
        printf("\nInvalid date format. Entry not added.\n");
        while (getchar() != '\n');  // Clear input buffer
        return;
    }
    printf("Enter the entry: ");
    getchar();
    fgets(newEntry.entry, sizeof(newEntry.entry), stdin);
    entries[*count] = newEntry;
    (*count)++;
    printf("\nEntry added successfully!\n");
}
