
void loadEntriesFromFile(diary entries[], int* count, const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        printf("\nError opening file for reading.\n");
        return;
    }

    fread(count, sizeof(int), 1, file); // Read the count of entries

    // Read each entry from the file
    for (int i = 0; i < *count; i++) {
        fread(&entries[i], sizeof(diary), 1, file);
    }

    fclose(file);
}
