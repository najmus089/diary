
void addEntry(diary entries[], int* count) {
    diary newentry;
    printf("\nEnter the date (DD MM YYYY): ");
    if (scanf("%d%*c%d%*c%d", &newentry.day, &newentry.month, &newentry.year) != 3) {
        printf("\nInvalid date format. Entry not added.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Enter the entry (press Ctrl+Z on a new line to finish):\n");
   // getchar();
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\x1A' && i < sizeof(newentry.entry) - 1) {
        newentry.entry[i++] = c;
    }
    newentry.entry[i] = '\0';

    entries[*count] = newentry;
    (*count)++;
    printf("\nEntry added successfully!\n");
}

