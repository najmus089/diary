
void saveEntriesToFile(diary entries[], int count, const char* filename) {
    FILE* file = fopen(filename, "wb");
    if (file == NULL) {
        printf("\nError opening file for writing.\n");
        return;
    }

    fwrite(&count, sizeof(int), 1, file); // Write the count of entries

    // Write each entry to the file
    for (int i = 0; i < count; i++) {
        fwrite(&entries[i], sizeof(diary), 1, file);
    }

    fclose(file);
}
