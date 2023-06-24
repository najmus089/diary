
void deleteEntry(diary entries[], int* count) {
    if (*count == 0) {
        printf("\nNo entries found!\n");
        return;
    }

    int day, month, year;
    printf("\nEnter the date of the entry to delete (DD MM YYYY): ");
    if (scanf("%d%*c%d%*c%d", &day, &month, &year) != 3) {
        printf("\nInvalid date or format. Delete aborted.\n");
        while (getchar() != '\n');
        return;
    }

    for (int i = 0; i < *count; i++) {
        if (entries[i].day == day && entries[i].month == month && entries[i].year == year) {
            printf("Entry to be deleted:\n");
            printf("Date: %02d-%02d-%02d\n", entries[i].day, entries[i].month, entries[i].year);
            printf("Entry: %s\n", entries[i].entry);

            // Shift remaining entries to fill the gap
            for (int j = i; j < *count - 1; j++) {
                entries[j] = entries[j + 1];
            }

            (*count)--;
            printf("\nEntry deleted successfully!\n");
            return;
        }
    }

    printf("\nEntry not found!\n");
}
