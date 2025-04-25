/*
Build a basic cli contact management tool

what does our program do?
- Store contacts data which includes phonenumber, name, email.asm
- Search functionality to search people by name.
- Edit a contact.
- Delete a contact.
- Add a contact

issues/things i dont know a fuck about:
1. How to store contact info?
    we can do that by structs,
    struct myStructure {
     int myNum;
     char myLetter;
    };

    struct myStruct s1; //this is how we create a custom variable type for contact.asm
    s1.myNum = 89769;
    s1.myLetter = "aslkfdja";


TODO:
create a struct for contacts - done
create a function called getMenu() which gets our options - done
create a function addContact to create and add it to file. - done

create a function to search contacts:
   - implement a function searchDB
   - get single line and go through it -> if a match then print else keep searching else return something
 */

 #include <stdio.h>
 #include <stdlib.h>

 //contact struct
 struct contacts{
    long ph;
    char name[100];
    char email[100];
 } list;//i have no idea why we do lists but soon willl learn and write a simple explanation.

 //get main menu
 int getMenu(){
    int choice=0;
    printf("Main Menu\n");
    printf("[1] Add Contact\n");
    printf("[2] Search Contacts\n");
    printf("Choose an option:"); scanf("%d", &choice);
    return choice;
 }

 //file hand
 void saveToFile(struct contacts *contact){
    FILE *f;
    size_t nwritten;
    f = fopen("contacts.txt", "a");
    if (f == NULL){
        printf("Cannot open file\n");
        return;
    }

    nwritten = fprintf(f, "%s,%ld,%s\n",
        contact->name,
        contact->ph,
        contact->email);
    fclose(f);

    if (nwritten < 1)
   {
      fprintf(stderr, "Writing to file failed.\n");
      return;
   }

 }

 void addContacts(){
    struct contacts *cont= malloc(sizeof *cont);
    printf("Enter name: "); scanf("%s", cont->name);
    printf("Enter phone number: "); scanf("%ld", &cont->ph);
    printf("Enter email: "); scanf("%s", cont->email);
    
    saveToFile(cont);
    free(cont);
 }

 void searchContacts(){
   char line[1024];
   char input[1024];

   scanf("%s", &input);

   FILE *stream = fopen("contacts.txt", "r");
   while(fgets(line, 1024, stream)){
      if(line == input){
         printf("%s", "Contact Found!\n");
         printf("%s", line);
      }
   }
 }
 int main(){
    char query[20];
    int found, ch;

    while(1){
        ch=getMenu();
        switch(ch){
            case 1:
                addContacts();

            case 2:
               searchContacts();
        }
    }
 }