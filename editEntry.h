
void editEntry(diary entries[], int count) {
    if (count == 0) {
        printf("\nNo entries found!\n");
        return;
    }

    int day, month, year;
    printf("\nEnter the date of the entry to edit (DD MM YYYY): ");
    if (scanf("%d%*c%d%*c%d", &day, &month, &year) != 3) {
        printf("\nInvalid date or format. Edit aborted.\n");
        while (getchar() != '\n');
        return;
    }

    for (int i = 0; i < count; i++) {
        if (entries[i].day == day && entries[i].month == month && entries[i].year == year) {
            printf("Existing Entry:\n");
            printf("Date: %02d-%02d-%02d\n", entries[i].day, entries[i].month, entries[i].year);
            printf("Entry: %s\n", entries[i].entry);

            printf("\nEnter the updated entry (press Ctrl+Z on a new line to finish):\n");
            //getchar();
            int j = 0;
            char c;
            while ((c = getchar()) != EOF && c != '\x1A' && j < sizeof(entries[i].entry) - 1) {
                entries[i].entry[j++] = c;
            }
            entries[i].entry[j] = '\0';

            printf("\nEntry updated successfully!\n");
            return;
        }
    }

    printf("\nEntry not found!\n");
}
