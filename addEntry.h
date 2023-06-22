
void addEntry(diary entries[],int *count){
diary newentry;
printf("\nEnter the date (DD MM YYYY): ");
if(scanf("%d%*c%d%*c%d",&newentry.day,&newentry.month,&newentry.year)!=3){
        printf("\nInvalid date format. Entry not added.\n");
        while(getchar()!='\n');
        return;
}
printf("Enter the entry:\n ");
getchar();
fgets(newentry.entry,sizeof(newentry.entry),stdin);
entries[*count]=newentry;
(*count)++;
printf("\nEntry added successfully!\n");
}
