
void viewEntries(diary entries[],int count){
if(count==0)
    printf("\nNo entries found!\n");
else{
    printf("\n--- Diary Entries ---\n");
for(int i=0;i<count;i++){
    printf("Date: %02d-%02d-%02d\n",entries[i].day,entries[i].month,entries[i].year);
    printf("Entry: %s\n",entries[i].entry);
}
}
}
