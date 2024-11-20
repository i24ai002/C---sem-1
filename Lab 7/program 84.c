#include<stdio.h>
void book_info(int n)
{
    int Total_pages,edition,publication_year;//n means serial no.
    char author[100],genre[100];
    char title[100];
    printf("Enter the title of the book:");
    fgets(title,100,stdin);
    printf("Enter the name of the author:");
    fgets(author,100,stdin);
    printf("Enter the genre of the book:");
    fgets(genre,100,stdin);
    printf("Enter the publication year:");
    scanf("%d",&publication_year);
    printf("Enter the edition no.of the book:");
    scanf("%d",&edition);
    printf("Enter Total no.of pages:");
    scanf("%d",&Total_pages);
    printf("Information related to the book on %d position:-",n);
    printf("\nThe title of the book on %d no.:\t%s",n,title);
    printf("\nThe name of the author:\t%s",author);
    printf("\nThe genre of the book:\t%s",genre);
    printf("\nThe publication year:%d",publication_year);
    printf("\nThe edition no.of the book: %d",edition);
    printf("\nTotal no.of pages: %d",Total_pages);
}

int main() 
{
    int num_serial;
    printf("Enter the serial number of book:");
    scanf("%d",&num_serial);
    book_info(num_serial);
    return 0;
}