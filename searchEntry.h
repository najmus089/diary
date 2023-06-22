
void searchEntry(diary entries[],int count){
int day,month,year;
if(count==0)
    printf("\nNo entries found!\n");
else{
printf("\nEnter the date to search (DD MM YYYY): ");
if(scanf("%d%*c%d%*c%d",&day,&month,&year)!=3){
printf("\nInvalid date or format. Search aborted.\n");
while(getchar()!='\n');
return;
}
for(int i=0;i<count;i++){
    if(entries[i].day==day && entries[i].month==month && entries[i].year==year){
    printf("Date: %02d-%02d-%02d\n",entries[i].day,entries[i].month,entries[i].year);
    printf("Entry: %s\n",entries[i].entry);
    return;
    }
}
printf("\nEntry not found!\n");
}
}
